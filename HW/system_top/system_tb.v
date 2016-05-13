`timescale 1ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2015/06/19 08:42:09
// Design Name: 
// Module Name: system_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module system_tb( );
    reg clk, rst, rst_counter;
    reg rom_selector, boot_addr_sel,com_RxD;
    reg [2:0] disp_sel;   
    
    wire [7:0] segdisp_data;
    wire [7:0] segdisp_sel_n;
    wire [15:0] led_out;
    wire clk_50M_out;
    wire clk_cpu_out;
    wire [22:0] psram_addr;
    wire [15:0] psram_data;
    wire psram_ce;
    wire psram_oe;
    wire psram_we;
    wire psram_ub;
    wire psram_lb;
    wire psram_adv;
    wire psram_clk;
    wire psram_cre;
    wire com_TxD;
    
    system UDT (.clk_100M(clk),
	            .rst(rst),
					.rst_counter(rst_counter),
                .segdisp_data(segdisp_data),
                .segdisp_sel_n(segdisp_sel_n),
                .led_out(led_out),
                .clk_50M_out(clk_50M_out),
                .clk_cpu_out(clk_cpu_out),
                .rom_selector(rom_selector),
                .boot_addr_sel(boot_addr_sel),
                .disp_sel(disp_sel),
                .psram_addr(psram_addr),
                .psram_data(psram_data),
                .psram_ce(psram_ce),
                .psram_oe(psram_oe),
                .psram_we(psram_we),
                .psram_ub(psram_ub),
                .psram_lb(psram_lb),
                .psram_adv(psram_adv),
                .psram_clk(psram_clk),
                .psram_cre(psram_cre),
                .com_TxD(com_TxD),
                .com_RxD(com_RxD));
                
    initial begin
        clk <= 1'b0;
        forever #5 clk <= ~clk;
    end
    
    initial begin
        rst = 1'b1;
		  rst_counter = 1'b1;
        rom_selector = 1'b0;
        boot_addr_sel = 1'b0;
        com_RxD = 1'b1;
        disp_sel = 3'b100;
		  
		  # 20
		  rst_counter = 1'b0;
        
        #2000
        rst = 1'b0;
    end
	
endmodule
