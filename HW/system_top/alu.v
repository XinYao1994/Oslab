/*
 * $File: Alu.v
 * $Date: Sat Dec 20
 * $Author: jiakai <jia.kai66@gmail.com>
 # Modified by Diqing Hu
 */

// source of second ALU operand
 `define ALU_SRC_WIDTH  1
 `define ALU_SRC_IMM    1'b0
 `define ALU_SRC_REG    1'b1
 
 // ALU opt is same as R-type instructions
 `define ALU_OPT_WIDTH    7

 `define ALU_OPT_NONE         7'h00
 
 `define ALU_OPT_SLL_IMM      7'h01 // shift opr2 left using imm value
 `define ALU_OPT_SRL_IMM      7'h02 
 `define ALU_OPT_SRA_IMM      7'h03 
 `define ALU_OPT_SLL          7'h04
 `define ALU_OPT_SRL          7'h06 
 `define ALU_OPT_SRA          7'h07  
 `define ALU_OPT_MULT         7'h18
 `define ALU_OPT_ADDU         7'h21
 `define ALU_OPT_SUBU         7'h23
 `define ALU_OPT_AND          7'h24
 `define ALU_OPT_OR           7'h25
 `define ALU_OPT_XOR          7'h26
 `define ALU_OPT_NOR          7'h27
 `define ALU_OPT_LT           7'h2A // signed less than
 `define ALU_OPT_LTU          7'h2B // unsigned less than
 `define ALU_OPT_SETU         7'h40 // extended opt, set upper half of opr1
 `define ALU_OPT_PASS_OPR1    7'h41 // extended opt, result <= first operand
 
 
 module alu(
	input [31:0] opr1,
	input [31:0] opr2,
	input [31:0] sa_imm,
	input [`ALU_OPT_WIDTH-1:0] opt,
	output reg [31:0] result,
	output reg illegal_opt);

	always @(*) begin
		illegal_opt = 1'b0;
		result = 32'h0;
		case (opt)
			`ALU_OPT_SLL_IMM:
				result = opr2 << sa_imm;
			`ALU_OPT_SRL_IMM:
				result = $unsigned(opr2) >> sa_imm;
			`ALU_OPT_SRA_IMM:
				result = $signed(opr2) >>> sa_imm;
			`ALU_OPT_SLL:
				result = opr2 << opr1;
			`ALU_OPT_SRL:
				result = $unsigned(opr2) >> opr1;
			`ALU_OPT_SRA:
				result = $signed(opr2) >>> opr1;
			`ALU_OPT_ADDU:
				result = opr1 + opr2;
			`ALU_OPT_SUBU:
				result = opr1 - opr2;
			`ALU_OPT_AND:
				result = opr1 & opr2;	
			`ALU_OPT_OR:
				result = opr1 | opr2;
			`ALU_OPT_XOR:
				result = opr1 ^ opr2;
			`ALU_OPT_NOR:
				result = ~(opr1 | opr2);
			`ALU_OPT_LT:
				result = $signed(opr1) < $signed(opr2) ? 32'b1 : 32'h0;
			`ALU_OPT_LTU:
				result = $unsigned(opr1) < $unsigned(opr2) ? 32'b1 : 32'h0;
			`ALU_OPT_SETU:
				result = {opr2[31:16], 16'b0};
			`ALU_OPT_PASS_OPR1:
				result = opr1;
				
			`ALU_OPT_MULT: ;	// ignore; processed by stage_ex
			`ALU_OPT_NONE: 
			   result = opr2 << sa_imm;
			
			default: begin
//				$warning("illegal alu opt: %h", opt);
				illegal_opt = 1'b1;
			end
		endcase
	end
endmodule

