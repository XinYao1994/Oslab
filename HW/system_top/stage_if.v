/*
 * $File: stage_if.v
 * $Date: Fri Dec 20 15:17:31 2013 +0800
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

`define IF2ID_WIRE_WIDTH (`EXC_CODE_WIDTH+96)

/*
`define START_FROM_RAM  1
`ifdef START_FROM_RAM
`define SYSTEM_STARTUP_ADDR	32'h80000000
`else
`define SYSTEM_STARTUP_ADDR	32'h90000000
`endif
*/

// instruction fetch
module stage_if(
	input clk,
	input rst,
	input stall,
	input clear,
	
	input has_int_pending,
    input boot_addr_sel,
    
	input jmp_flag,
	input [31:0] jmp_dest,

	output [`IF2ID_WIRE_WIDTH-1:0] interstage_if2id,
	output [31:0]  pc_out,
	output [31:0]  instr_out,
	
	// mem_data must be asynchronously updated for mem_addr
	output reg [31:0] mem_addr,
	input [31:0] mem_data,
	input [`EXC_CODE_WIDTH-1:0] mem_exc_code);

	reg [`EXC_CODE_WIDTH-1:0] exc_code_if2id;
    reg [31:0] exc_addr_if2id;
    reg [31:0] next_pc;
    reg [31:0] instr;
    assign interstage_if2id = { exc_code_if2id,exc_addr_if2id,next_pc,instr };
    
    assign pc_out = next_pc;
    assign instr_out = instr;

	wire [31:0] mem_addr_plus_4 = mem_addr + 32'h4;

	// this latch is used to improve timing, otherwise xilinx may fail to meet
	// constraints
	always @(negedge clk)
		mem_addr <= jmp_flag ? jmp_dest : next_pc;

	always @(posedge clk) begin
		if (rst) begin
			instr <= 32'h0;
			//next_pc <= `SYSTEM_STARTUP_ADDR;
			exc_code_if2id <= `EC_NONE;
			if(boot_addr_sel)
			   next_pc <= 32'h80000000;      // boot from ram
			else
			   next_pc <= 32'h90000000;      // boot from rom			   
		end
		
		else if (!stall) begin
			exc_code_if2id <= `EC_NONE;
			exc_addr_if2id <= mem_addr;
			instr <= 32'h0;
			if (!clear) begin
				next_pc <= mem_addr_plus_4;
				if (mem_exc_code != `EC_NONE)
					exc_code_if2id <= mem_exc_code;
				else if (has_int_pending)
					exc_code_if2id <= `EC_INT;
				else
					instr <= mem_data;
			end
		end
	end

endmodule

