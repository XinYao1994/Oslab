/*
 * $File: stage_ex.v
 * $Date: Sat Dec 20
 * $Author: jiakai <jia.kai66@gmail.com>
 * Modified by Diqing Hu
 */

`timescale 1ns/1ps

`define EXC_CODE_WIDTH	     5
`define BRANCH_OPT_WIDTH	 2
`define ALU_SRC_WIDTH       1
`define ALU_OPT_WIDTH	     7
`define MEM_OPT_WIDTH	     4
`define REGADDR_WIDTH	     5
`define ID2EX_WIRE_WIDTH (`EXC_CODE_WIDTH+`BRANCH_OPT_WIDTH+`ALU_SRC_WIDTH+`ALU_OPT_WIDTH+`MEM_OPT_WIDTH+`REGADDR_WIDTH+129)

`define EX2MEM_WIRE_WIDTH (`EXC_CODE_WIDTH+`MEM_OPT_WIDTH+`REGADDR_WIDTH+160)


`define ALU_SRC_IMM	1'b0

`define BRANCH_NONE		2'b00
`define BRANCH_ON_ALU_EQZ	2'b01	// branch on alu result = 0
`define BRANCH_ON_ALU_NEZ	2'b10	// branch on alu result != 0
`define BRANCH_UNCOND		2'b11	// unconditional jump

`define MEM_OPT_NONE	4'b0000
`define EC_NONE		5'h10	// dummy value for no exception
`define EC_RI		    5'h0a	// reserved instruction
`define ALU_OPT_MULT	7'h18

// instruction execution stage
module stage_ex(
	input clk,
	input rst,
	input stall,
	input clear,

	input [`ID2EX_WIRE_WIDTH-1:0] interstage_id2ex,

	input [31:0] reg1_data,
	input [31:0] reg2_data,

	output branch_flag,
	output [31:0] branch_dest,

	// whether write-back passed to mem is from alu result
	// used for forwarding
	output reg wb_from_alu,

	output reg mult_start,
	output reg [31:0] mult_opr1,
	output reg [31:0] mult_opr2,
	
	output [`EX2MEM_WIRE_WIDTH-1:0] interstage_ex2mem);

	// ------------------------------------------------------------------

    wire [`EXC_CODE_WIDTH-1:0] exc_code_id2ex;
    wire [31:0] exc_epc_id2ex;
    wire [31:0] exc_badvaddr_id2ex;
    wire [`BRANCH_OPT_WIDTH-1:0] branch_opt_id2ex;
    wire [32:0] branch_dest_id2ex;
    wire [31:0] alu_sa_imm;
    wire [`ALU_SRC_WIDTH-1:0] alu_src;
    wire [`ALU_OPT_WIDTH-1:0] alu_opt;
    wire [`MEM_OPT_WIDTH-1:0] mem_opt_id2ex;
    wire [`REGADDR_WIDTH-1:0] wb_reg_addr_id2ex;
    assign { exc_code_id2ex,exc_epc_id2ex,exc_badvaddr_id2ex,branch_opt_id2ex,branch_dest_id2ex,alu_sa_imm,alu_src,alu_opt,mem_opt_id2ex,wb_reg_addr_id2ex } = interstage_id2ex;

    reg [`EXC_CODE_WIDTH-1:0] exc_code_ex2mem;
    reg [31:0] exc_epc_ex2mem;
    reg [31:0] exc_badvaddr_ex2mem;
    reg [31:0] mem_addr_ex2mem;
    reg [31:0] mem_data_ex2mem;
    reg [`MEM_OPT_WIDTH-1:0] mem_opt_ex2mem;
    reg [`REGADDR_WIDTH-1:0] wb_reg_addr_ex2mem;
    reg [31:0] alu_result;
    assign interstage_ex2mem = { exc_code_ex2mem,exc_epc_ex2mem,exc_badvaddr_ex2mem,mem_addr_ex2mem,mem_data_ex2mem,mem_opt_ex2mem,wb_reg_addr_ex2mem,alu_result };


	wire [31:0] result_from_alu;
	wire alu_illegal_opt;

	alu ualu(
		.opr1(reg1_data),
		.opr2(alu_src == `ALU_SRC_IMM ? alu_sa_imm : reg2_data),
		.sa_imm(alu_sa_imm),
		.opt(alu_opt), .result(result_from_alu),
		.illegal_opt(alu_illegal_opt));


	assign branch_flag = ((branch_opt_id2ex == `BRANCH_ON_ALU_EQZ && !result_from_alu) ||
		(branch_opt_id2ex == `BRANCH_ON_ALU_NEZ && result_from_alu) ||
		(branch_opt_id2ex == `BRANCH_UNCOND));
		
	assign branch_dest = branch_dest_id2ex[32] ? reg2_data : branch_dest_id2ex[31:0];

	always @(posedge clk) begin
		mult_start <= 1'b0;	// assert for one cycle
		if (rst || !stall || clear) begin
			mem_opt_ex2mem <= `MEM_OPT_NONE;
			wb_reg_addr_ex2mem <= 5'h0;
			exc_code_ex2mem <= `EC_NONE;
			wb_from_alu <= 1'b0;
		end
		if (!stall && !clear) begin
			wb_from_alu <= 1'b0;
			exc_epc_ex2mem <= exc_epc_id2ex;
			exc_badvaddr_ex2mem <= exc_badvaddr_id2ex;
			if (exc_code_id2ex != `EC_NONE)
				exc_code_ex2mem <= exc_code_id2ex;
			else if (alu_illegal_opt) begin
				exc_code_ex2mem <= `EC_RI;
				exc_badvaddr_ex2mem <= {4'hf,{28-`ALU_OPT_WIDTH{1'b0}}, alu_opt};
			end
			else begin
				if (alu_opt == `ALU_OPT_MULT) begin
					mult_start <= 1'b1;
					mult_opr1 <= reg1_data;
					mult_opr2 <= reg2_data;
				end
				alu_result <= result_from_alu;
				wb_reg_addr_ex2mem <= wb_reg_addr_id2ex;
				mem_opt_ex2mem <= mem_opt_id2ex;
				mem_addr_ex2mem <= result_from_alu;
				mem_data_ex2mem <= reg2_data;
				wb_from_alu <= mem_opt_id2ex == `MEM_OPT_NONE;
			end
		end
	end

endmodule

