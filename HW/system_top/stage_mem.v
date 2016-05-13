/*
 * $File: stage_mem.v
 * $Date: Fri Dec 20 14:55:37 2013 +0800
 * $Author: jiakai <jia.kai66@gmail.com>
 */

`define EXC_CODE_WIDTH	     5
// exc code definitions
`define EC_INT		    5'h00	// interrupt
`define EC_TLB_MOD	    5'h01	// modification exception
`define EC_TLBL		5'h02	// TLBL TLB invalid exception (load or instruction fetch)
`define EC_TLBS		5'h03	// TLBS TLB invalid exception (store)
`define EC_ADEL		5'h04	// AdEL Address error exception (load or instruction fetch)
`define EC_ADES		5'h05	// AdES Address error exception (store)
`define EC_SYS		    5'h08	// Syscall exception
`define EC_RI		    5'h0a	// reserved instruction
`define EC_CP_U		5'h0b	// Coprocessor Unusable exception
`define EC_NONE		5'h10	// dummy value for no exception
`define EC_ERET		5'h11	// dummy value to implement ERET
`define EC_NONE		5'h10	// dummy value for no exception
`define EC_RI		    5'h0a	// reserved instruction

`define MEM_OPT_WIDTH	     4
// used for both stage_mem and mmu
`define MEM_OPT_NONE	        4'b0000
`define MEM_OPT_LW		        4'b0001
`define MEM_OPT_LBS		    4'b0010
`define MEM_OPT_LBU		    4'b0011
`define MEM_OPT_LHU		    4'b1101
`define MEM_OPT_SW		        4'b0100
`define MEM_OPT_SB		        4'b0101
// used for stage_mem only
// operation on CP0 registers
`define MEM_OPT_WRITE_CP0	    4'b0110
`define MEM_OPT_READ_CP0	    4'b0111
`define MEM_OPT_WRITE_TLB_IDX	4'b1000
// operation on multiplier
`define MEM_OPT_MFLO		    4'b1001
`define MEM_OPT_MFHI		    4'b1010
`define MEM_OPT_MTLO		    4'b1011
`define MEM_OPT_MTHI		    4'b1100

`define REGADDR_WIDTH	     5

`define EX2MEM_WIRE_WIDTH (`EXC_CODE_WIDTH+`MEM_OPT_WIDTH+`REGADDR_WIDTH+160)

`define LOHI_WRITE_OPT_WIDTH	2
`define LOHI_WRITE_NONE	2'b00
`define LOHI_WRITE_LO		2'b01
`define LOHI_WRITE_HI		2'b10

`define INT_MASK_WIDTH	    8	// width of interrupt mask
// definition of interrupt numbers
`define INT_TIMER	        7
`define INT_KBD		    6
`define INT_COM		    4

`define TLB_ENTRY_WIDTH	63
`define TLB_INDEX_WIDTH	4	// total 16 entries
// {enable, index, entry}
`define TLB_WRITE_STRUCT_WIDTH	     (`TLB_ENTRY_WIDTH + `TLB_INDEX_WIDTH + 1)

`define CP0_REG_ADDR_WIDTH 4
// definition of internal register numbers
`define CP0_INDEX		    0
`define CP0_ENTRY_LO0	    1
`define CP0_ENTRY_LO1	    2
`define CP0_BADVADDR	    3
`define CP0_COUNT		    4
`define CP0_ENTRY_HI	    5
`define CP0_COMPARE		6
`define CP0_STATUS		    7
`define CP0_CAUSE		    8
`define CP0_EPC			9
`define CP0_EBASE		    10	
`define CP0_UNIMPLEMENTED	11

// dummy entry to disable writing to a register
`define CP0_REG_NONE	             11
`define CP0_NR_REG		             11
`define CP0_REG_TOT_WIDTH	         (32 * `CP0_NR_REG)
`define CP0_VISIT_REG(array, num)   array[(num)*32+31:(num)*32]

// check whether operation is read/write mem, not special reg or none
`define MEM_OPT_IS_READ(opt)	((opt) == `MEM_OPT_LW || (opt) == `MEM_OPT_LBS || (opt) == `MEM_OPT_LBU || (opt) == `MEM_OPT_LHU)
`define MEM_OPT_IS_WRITE(opt)	((opt) == `MEM_OPT_SW || (opt) == `MEM_OPT_SB)

// memory read/write
module stage_mem(
	input clk_fast,
	input clk,
	input rst,

	input [`EX2MEM_WIRE_WIDTH-1:0] interstage_ex2mem,

	output reg [`REGADDR_WIDTH-1:0] wb_reg_addr,
	output reg [31:0] wb_reg_data,

	output set_stall,
	output set_clear,

	output exc_jmp_flag,
	output [31:0] exc_jmp_dest,

	output is_user_mode,

	// interface to LO and HI registers
	input [63:0] lohi_value,
	input lohi_ready,
	output reg [`LOHI_WRITE_OPT_WIDTH-1:0] lohi_write_opt,
	output reg [31:0] lohi_write_data,

	// handle interrupt; interface to misc divices
	input [`INT_MASK_WIDTH-1:0] int_req,
	output has_int_pending,

	// interface to MMU
	output [`TLB_WRITE_STRUCT_WIDTH-1:0] mmu_tlb_write_struct,
	output reg [31:0] mmu_addr,
	input [31:0] mmu_data_in,
	output reg [31:0] mmu_data_out,
	output reg [`MEM_OPT_WIDTH-1:0] mmu_opt,
	input [`EXC_CODE_WIDTH-1:0] mmu_exc_code,
	input mmu_busy);

	// ------------------------------------------------------------------

	wire [`EXC_CODE_WIDTH-1:0] exc_code_ex2mem;
    wire [31:0] exc_epc_ex2mem;
    wire [31:0] exc_badvaddr_ex2mem;
    wire [31:0] mem_addr_ex2mem;
    wire [31:0] mem_data_ex2mem;
    wire [`MEM_OPT_WIDTH-1:0] mem_opt_ex2mem;
    wire [`REGADDR_WIDTH-1:0] wb_reg_addr_ex2mem;
    wire [31:0] alu_result;
    assign { exc_code_ex2mem,exc_epc_ex2mem,exc_badvaddr_ex2mem,mem_addr_ex2mem,mem_data_ex2mem,mem_opt_ex2mem,wb_reg_addr_ex2mem,alu_result } = interstage_ex2mem;


	reg [1:0] state;
	localparam READY = 2'b00, WAIT_MMU = 2'b01, WAIT_LOHI = 2'b10;

	reg [`EXC_CODE_WIDTH-1:0] cp0_exc_code;
	reg [`CP0_REG_ADDR_WIDTH-1:0] cp0_write_addr;
	reg [31:0] cp0_exc_epc, cp0_exc_badvaddr, cp0_write_data;

	assign set_stall = (state != READY);
	assign set_clear = (cp0_exc_code != `EC_NONE);

	wire [`CP0_REG_TOT_WIDTH-1:0] cp0_reg;
	wire [31:0] cp0_reg_unwind [0:`CP0_NR_REG-1];
	wire [31:0] cp0_status = cp0_reg_unwind[`CP0_STATUS];

	genvar i;
	generate
		for (i = 0; i < `CP0_NR_REG; i = i + 1) begin: CP0_REG_UNWIND
			assign cp0_reg_unwind[i] = `CP0_VISIT_REG(cp0_reg, i);
		end
	endgenerate

	assign is_user_mode = cp0_status[4:3] && !cp0_status[1];

	wire int_timer_req;

	reg [`INT_MASK_WIDTH-1:0] int_req_actual;
	always @(*) begin
		int_req_actual = int_req;
		int_req_actual[`INT_TIMER] = int_timer_req;
	end


	assign has_int_pending = (int_req_actual & cp0_status[15:8]) != 0 && cp0_status[0] /* IE */ && !cp0_status[1] /* EXL */;

	cp0 ucp0(.clk(clk), .rst(rst),
		.cp0_reg(cp0_reg),
		.reg_write_addr(cp0_write_addr), .reg_write_data(cp0_write_data),
		.exc_code(cp0_exc_code),
		.exc_epc(cp0_exc_epc), .exc_badvaddr(cp0_exc_badvaddr),
		.cause_ip(int_req_actual),
		.int_timer_req(int_timer_req),
		.exc_jmp_flag(exc_jmp_flag), .exc_jmp_dest(exc_jmp_dest));

	
	reg tlb_write_enable;
	reg [`TLB_ENTRY_WIDTH-1:0] tlb_entry;
	reg [`TLB_INDEX_WIDTH-1:0] tlb_index;
	assign mmu_tlb_write_struct = {tlb_write_enable, tlb_index, tlb_entry};

	assign mem_opt_is_read = `MEM_OPT_IS_READ(mem_opt_ex2mem),
		mem_opt_is_write = `MEM_OPT_IS_WRITE(mem_opt_ex2mem);

	// wb reg data and addr updated on negedge
	reg [`REGADDR_WIDTH-1:0] ne_wb_reg_addr;
	reg [31:0] ne_wb_reg_data;

	// wb on posedge for mmu and lohi
	reg wb_pe_mmu, wb_pe_lohi;

	wire [31:0] lohi_value_selected = mem_opt_ex2mem == `MEM_OPT_MFLO ? lohi_value[31:0] : lohi_value[63:32];

	// assign wb_reg_addr and wb_reg_data
	// use latch to improve timing ...
	always @(negedge clk_fast) begin
		wb_reg_addr <= wb_reg_addr_ex2mem;
		if (mem_opt_ex2mem == `MEM_OPT_READ_CP0)
			wb_reg_data <= cp0_reg_unwind[mem_addr_ex2mem];
		else begin
			wb_reg_data <= ne_wb_reg_data;
			if (state != READY) begin
				case ({wb_pe_mmu, wb_pe_lohi})
					2'b10:
						wb_reg_data <= mmu_data_in;
					2'b01:
						wb_reg_data <= lohi_value_selected;
					default:
						wb_reg_addr <= ne_wb_reg_addr;
				endcase
			end else
				wb_reg_addr <= ne_wb_reg_addr;
		end
	end

	reg mmu_busy_poslatch, lohi_ready_poslatch;
	always @(posedge clk) begin
		mmu_busy_poslatch <= mmu_busy;
		lohi_ready_poslatch <= lohi_ready;
		wb_pe_mmu <= (state == WAIT_MMU && !mmu_busy);
		wb_pe_lohi <= (state == WAIT_LOHI && lohi_ready);
	end
	
	task proc_mem_opt; 
		case (mem_opt_ex2mem) 
			`MEM_OPT_WRITE_CP0: begin
				state <= WAIT_MMU;
				cp0_write_addr <= mem_addr_ex2mem[`CP0_REG_ADDR_WIDTH-1:0];
				cp0_write_data <= mem_data_ex2mem;
			end
			`MEM_OPT_WRITE_TLB_IDX: begin
				state <= WAIT_MMU;
				tlb_write_enable <= 1;
				tlb_index <= cp0_reg_unwind[`CP0_INDEX][`TLB_INDEX_WIDTH-1:0];
				tlb_entry <= {cp0_reg_unwind[`CP0_ENTRY_HI][31:13],
					cp0_reg_unwind[`CP0_ENTRY_LO1][25:6],
					cp0_reg_unwind[`CP0_ENTRY_LO1][2:1],
					cp0_reg_unwind[`CP0_ENTRY_LO0][25:6],
					cp0_reg_unwind[`CP0_ENTRY_LO0][2:1]};
			end
			`MEM_OPT_MFLO, `MEM_OPT_MFHI: begin
				ne_wb_reg_addr <= 5'h0;
				state <= WAIT_LOHI;
			end
			`MEM_OPT_MTLO: begin
				state <= WAIT_LOHI;
				lohi_write_opt <= `LOHI_WRITE_LO;
				lohi_write_data <= alu_result;
			end
			`MEM_OPT_MTHI: begin
				state <= WAIT_LOHI;
				lohi_write_opt <= `LOHI_WRITE_HI;
				lohi_write_data <= alu_result;
			end
			// mmu operations
			default: if (mem_opt_is_read || mem_opt_is_write) begin
				state <= WAIT_MMU;
				mmu_opt <= mem_opt_ex2mem;
				mmu_addr <= mem_addr_ex2mem;
				mmu_data_out <= mem_data_ex2mem;
				ne_wb_reg_addr <= 5'h0;
			end
		endcase
	endtask

	always @(negedge clk) begin
		// thoses signals should be asserted for at most 1 cycle
		mmu_opt <= `MEM_OPT_NONE;
		cp0_write_addr <= `CP0_REG_NONE;
		tlb_write_enable <= 1'b0;
		lohi_write_opt <= `LOHI_WRITE_NONE;

		if (rst) begin
			state <= READY;
			cp0_exc_code <= `EC_NONE;
		end else case (state)
			READY: begin
				cp0_exc_epc <= exc_epc_ex2mem;
				cp0_exc_badvaddr <= exc_badvaddr_ex2mem;
				cp0_exc_code <= exc_code_ex2mem;
				if (exc_code_ex2mem == `EC_NONE) begin
					cp0_exc_code <= `EC_NONE;
					ne_wb_reg_addr <= wb_reg_addr_ex2mem;
					ne_wb_reg_data <= alu_result;
					proc_mem_opt();
				end
			end
			WAIT_MMU:
				if (mmu_exc_code != `EC_NONE) begin
					state <= READY;
					cp0_exc_code <= mmu_exc_code;
					cp0_exc_badvaddr <= mmu_addr;
				end else if (!mmu_busy_poslatch ||
						(!mmu_busy && mem_opt_is_write)) begin
					state <= READY;
					ne_wb_reg_data <= mmu_data_in;
					ne_wb_reg_addr <= wb_reg_addr_ex2mem;
				end
			WAIT_LOHI:
				if (lohi_ready_poslatch) begin
					state <= READY;
					ne_wb_reg_addr <= wb_reg_addr_ex2mem;
					ne_wb_reg_data <= lohi_value_selected;
				end

			default:
				state <= READY;
		endcase
	end

endmodule

