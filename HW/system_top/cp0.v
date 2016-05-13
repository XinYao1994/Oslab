/*
 * $File: cp0.v
 * $Date: Fri Dec 20 15:17:45 2013 +0800
 * $Author: jiakai <jia.kai66@gmail.com>
 */

`timescale 1ns/1ps

// dummy entry to disable writing to a register
`define CP0_REG_NONE	              11
`define CP0_NR_REG		              11
`define CP0_REG_TOT_WIDTH	          (32 * `CP0_NR_REG)
`define CP0_VISIT_REG(array, num)    array[(num)*32+31:(num)*32]

`define CP0_REG_ADDR_WIDTH   4
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

`define INT_MASK_WIDTH  	8	// width of interrupt mask

`define EXC_CODE_WIDTH	5
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


// coprocessor 0
// this implementation differs from MIPS standard in following ways:
// 1. some registers are not implemented
// 2. if write to predifined fieds (e.g. EBase[31:30]), the standard requires
//	original valus is returned on next read; but the value newly written would
//	be returned in this simplified cp0 design
// 3. select field is ignored (e.g. mfc0 $t0, $15, 0 and mfc0 $t0, $15, 1 both
// setup EBase)
module cp0(
	input clk,
	input rst,
	output [`CP0_REG_TOT_WIDTH-1:0] cp0_reg,

	// set to other than CP0_REG_NONE before posedge to write into cp0
	// reg; should not read and write at the same time
	input [`CP0_REG_ADDR_WIDTH-1:0] reg_write_addr,
	input [31:0] reg_write_data,

	// set exc_code to other than EC_NONE before posedge to prepare for
	// exception; exc_jmp_flag would be set on next posedge
	input [`EXC_CODE_WIDTH-1:0] exc_code,
	input [31:0] exc_epc,
	input [31:0] exc_badvaddr,

	// ip field of Cause register
	input [`INT_MASK_WIDTH-1:0] cause_ip,

	output reg int_timer_req,

	// updated at posedge
	output reg exc_jmp_flag,
	output reg [31:0] exc_jmp_dest);

	// ------------------------------------------------------------------

	// note the dummy entry regmem[`CP0_NR_REG], so no need to check whether
	// write_addr != `CP0_REG_NONE
	reg [31:0] regmem[0:`CP0_NR_REG];

	genvar i;
	generate
		for (i = 0; i < `CP0_NR_REG; i = i + 1) begin: CP0_REG_WIND
			if (i != `CP0_CAUSE)
				assign `CP0_VISIT_REG(cp0_reg, i) = regmem[i];
			else
				assign `CP0_VISIT_REG(cp0_reg, i) = {16'b0, cause_ip, regmem[i][7:0]};
		end
	endgenerate

	assign exc_is_tlb_refill = (exc_code == `EC_TLBL || exc_code == `EC_TLBS),
			exc_is_tlb = (exc_is_tlb_refill || exc_code == `EC_TLB_MOD);

	task set_vector_offset(input [29:0] offset);
		exc_jmp_dest <= {2'b10, offset + {regmem[`CP0_EBASE][29:12], 12'b0}};
	endtask


	task setup_exc; begin
//		$display("time=%g impending exception: ip=%b code=%h epc=%h badaddr=%h",
//		$time, cause_ip, exc_code, exc_epc, exc_badvaddr);

		// no other modification when EXL = 1,
		// see MIPS32 Architecture For Programmers, ch5
		if (regmem[`CP0_STATUS][1])
			set_vector_offset(30'h180);
		else begin
			regmem[`CP0_EPC] <= exc_epc;
			regmem[`CP0_BADVADDR] <= exc_badvaddr;
			regmem[`CP0_CAUSE][6:2] <= exc_code;
			regmem[`CP0_STATUS][1] <= 1'b1;	// EXL

			if (exc_is_tlb_refill)
				set_vector_offset(30'h0);
			else 
				set_vector_offset(30'h180);

			if (exc_is_tlb)
				regmem[`CP0_ENTRY_HI][31:13] <= exc_badvaddr[31:13];
		end

		exc_jmp_flag <= 1'b1;

	end endtask

	task perform_eret; begin
		regmem[`CP0_STATUS][1] <= 1'b0;	// EXL
		exc_jmp_flag <= 1'b1;
		exc_jmp_dest <= regmem[`CP0_EPC];
//		$display("time=%g eret: %h", $time, regmem[`CP0_EPC]);
	end endtask

	always @(posedge clk) begin
		// only assert exc_jmp_flag for 1 cycle
		exc_jmp_flag <= 1'b0;

		if (rst) begin: RESET_CP0
			integer i;
			int_timer_req <= 1'b0;
			for (i = 0; i < `CP0_NR_REG; i = i + 1)
				regmem[i] <= 32'h0;
		end else begin
			regmem[`CP0_COUNT] <= regmem[`CP0_COUNT] + 1'b1;
			if (regmem[`CP0_COUNT] == regmem[`CP0_COMPARE])
				int_timer_req <= 1'b1;

			case (exc_code)
				`EC_NONE: begin
					// clear timer interrupt when writing to compare
					if (reg_write_addr == `CP0_COMPARE)
						int_timer_req <= 1'b0;
					regmem[reg_write_addr] <= reg_write_data;
				end
				`EC_ERET:
					perform_eret();
				default:
					setup_exc();
			endcase
		end
	end

endmodule

