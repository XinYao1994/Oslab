/*
 * File: system.v
 * Date: 2015.06.03
 * Author: jiakai <jia.kai66@gmail.com>
 * Modified: Diqing_Hu
 */

`define VGA_ADDR_WIDTH	18
`define VGA_DATA_WIDTH	8
`define VGA_WIDTH_MULT_SHIFT 9


// top-level system
module system (
   input clk_100M,
	input rst,
	input rst_counter,

	output [7:0] segdisp_data,
	output [7:0] segdisp_sel_n,
	output [15:0] led_out,
	output clk_50M_out,
	output clk_cpu_out,

	// control interface
	input rom_selector,
	input boot_addr_sel,
	input [2:0] disp_sel,

	// ram interface
	output [22:0] psram_addr,
	inout  [15:0] psram_data,
	output psram_ce,
	output psram_oe,
	output psram_we,
	output psram_ub,
	output psram_lb,
	output psram_adv,
	output psram_clk,
	output psram_cre,

	// VGA interface
	output [11:0] vga_color_out, // 4 red, 4 green, 4 blue
	output vga_hsync,
	output vga_vsync,

	// ascii keyboard interface
	inout ps2_clk,
	inout ps2_data,
/*	input kbd_int,
	output kbd_int_ack,
	input [7:0] kbd_data, */

	// serial port interface
	output com_TxD,
	input com_RxD);


	// ------------------------------------------------------------------
	// change the ports to wires or regs
	
	// for clock generation
	wire clk_cpu;
	wire clk_fast;
   wire clk_50M;
   wire clk_disp;
   reg [31:0] clk_count;

	always @(posedge clk_100M) begin
		if(rst_counter)	clk_count <= 32'h0;
		else clk_count <= clk_count + 1;
    end
	
	assign clk_50M = clk_count[0];       // 50MHz
	//assign clk_50M = clk_count[1];         // 25MHz
	assign clk_cpu = clk_count[5];
	assign clk_fast = clk_count[0];
	//assign clk_cpu = clk_count[5];         // for simulation
	//assign clk_fast = clk_count[2];        // for simulation
	assign clk_disp = clk_count[10];
	
	assign clk_50M_out = clk_50M;
	assign clk_cpu_out = clk_cpu;
	
	// ---------------------------------------------------------------------
	// for display
   wire [31:0] segdisp;
   wire [31:0] pc_out;
	wire [7:0]  segdisp_sel;
	reg [31:0] disp_in;
	wire [31:0] instruction;

	//assign led_out[15:0] = pc_out[15:0];
	//assign led_out[15:0] = segdisp[15:0];
	assign led_out[15] = psram_ce;
	assign led_out[14] = psram_oe;
	assign led_out[13] = psram_we;
	assign led_out[12:0] = 13'h0;
	assign segdisp_sel_n = ~segdisp_sel;
	
	always @(*) begin
	   case(disp_sel)
	       3'b000: disp_in <= pc_out;
	       3'b001: disp_in <= mem_addr;
	       3'b010: disp_in <= data_from_mem;
	       3'b011: disp_in <= data_to_mem;
	       3'b100: disp_in <= instruction;
			 3'b101: disp_in <= {9'h0, psram_addr};
			 3'b110: disp_in <= {16'h0, psram_data};
			 3'b111: disp_in <= segdisp;
	       default: disp_in <= 32'hffffffff;
	   endcase;
	end
	
	//seven_seg useg (.clk(clk_50M), .rst(rst), .in(segdisp), .out(segdisp_data), .sel(segdisp_sel));
	seven_seg useg (.clk(clk_disp), .rst(rst), .in(disp_in), .out(segdisp_data), .sel(segdisp_sel));
	
	// ---------------------------------------------------------------------
    // ram interface
	wire mem_is_write, mem_busy;
	wire [31:0] mem_addr, data_to_mem, data_from_mem;

    assign psram_adv = 1'b0;
    assign psram_clk = 1'b0;
    assign psram_cre = 1'b0;

	assign psram_ub = 1'b0;
	assign psram_lb = 1'b0;
    
    // ascii keyboard interface
    wire kbd_int;
    wire kbd_int_ack;
    wire [7:0] kbd_data;

	// vga interface
	wire [`VGA_ADDR_WIDTH-1:0] vga_write_addr;
	wire [`VGA_DATA_WIDTH-1:0] vga_write_data;
	wire vga_write_enable;
	wire [8:0]	vga_color;
	// ------------------------------------------------------------------
	

	// ------------------------------------------------------------------
	// the serial port
	wire int_com_req, int_com_ack, com_write_enable, com_write_busy;
	wire [7:0] data_to_com, data_from_com;


	cpu ucpu(.clk(clk_cpu), .clk_fast(clk_fast), .rst(rst),
        
        .boot_addr_sel(boot_addr_sel),
        
		.int_com_req(int_com_req),
		.int_kbd_req(kbd_int),
		
		.pc_out(pc_out),
		.instr_out(instruction),

		.dev_mem_addr(mem_addr),
		.dev_mem_data_in(data_from_mem),
		.dev_mem_data_out(data_to_mem),
		.dev_mem_is_write(mem_is_write),
		.dev_mem_busy(mem_busy));

	phy_psram_ctrl umem(.clk50M(clk_fast), .rst(rst),
	//phy_psram_ctrl umem(.clk50M(clk_50M), .clk(clk_fast), .rst(rst),
        .is_write(mem_is_write), .addr(mem_addr),
		.data_in(data_to_mem), .data_out(data_from_mem),
		.busy(mem_busy),

		.int_com_ack(int_com_ack),

		.segdisp(segdisp),

		.rom_selector(rom_selector),

		.sram_addr(psram_addr),
		.sram_data(psram_data),
		.sram_ce(psram_ce), .sram_oe(psram_oe), .sram_we(psram_we),
		
		.com_data_in(data_from_com), .com_data_out(data_to_com),
		.enable_com_write(com_write_enable),
		.com_read_ready(int_com_req),
		.com_write_ready(!com_write_busy),
	
		.vga_write_addr(vga_write_addr),
		.vga_write_data(vga_write_data),
		.vga_write_enable(vga_write_enable),
	
		.kbd_data(kbd_data),
		.kbd_int_ack(kbd_int_ack));


/*	phy_mem_ctrl umem(.clk50M(clk_50M), .rst(rst),
		.is_write(mem_is_write), .addr(mem_addr),
		.data_in(data_to_mem), .data_out(data_from_mem),
		.busy(mem_busy),

		.int_com_ack(int_com_ack),

		.segdisp(segdisp),

		.rom_selector(rom_selector),

		.baseram_addr(baseram_addr),
		//.baseram_data(baseram_data),
		.baseram_data(sram_data),
		.baseram_ce(baseram_ce), .baseram_oe(baseram_oe), .baseram_we(baseram_we),
		
		.extram_addr(extram_addr),
		.extram_data(extram_data),
		.extram_ce(extram_ce), .extram_oe(extram_oe), .extram_we(extram_we),
	
		.com_data_in(data_from_com), .com_data_out(data_to_com),
		.enable_com_write(com_write_enable),
		.com_read_ready(int_com_req),
		.com_write_ready(!com_write_busy),
	
		.flash_addr(flash_addr),
		.flash_data(flash_data),
		.flash_ctl(flash_ctl),
	
		.vga_write_addr(vga_write_addr),
		.vga_write_data(vga_write_data),
		.vga_write_enable(vga_write_enable),
	
		.kbd_data(kbd_data),
		.kbd_int_ack(kbd_int_ack));
*/

	uart_port ucom(
		.clk50M(clk_50M), .clk(clk_fast), .rst(rst),
		.int_req(int_com_req), .int_ack(int_com_ack),
		.data_out(data_from_com), .data_in(data_to_com),
		.write_enable(com_write_enable),
		.write_busy(com_write_busy),
		.TxD(com_TxD), .RxD(com_RxD));

/*	serial_port #(.CLK_FREQ(50000000)) ucom(
	//serial_port #(.CLK_FREQ(25000000)) ucom(            
		.clk(clk_50M), .rst(rst),
		.int_req(int_com_req), .int_ack(int_com_ack),
		.data_out(data_from_com), .data_in(data_to_com),
		.write_enable(com_write_enable),
		.write_busy(com_write_busy),
		.TxD(com_TxD), .RxD(com_RxD));
*/

	kbd ukbd(.clk(clk_100M), .clk50M(clk_fast), .rst(rst),
		.kbd_int(kbd_int),
		.kbd_int_ack(kbd_int_ack),
		.kbd_data(kbd_data),
		.ps2_clk(ps2_clk),
		.ps2_data(ps2_data));
	
	assign vga_color_out = {0, vga_color[8:6], 0, vga_color[5:3], 0, vga_color[2:0]};
	
	vga uvga(.clk50M(clk_50M),
		.write_addr(vga_write_addr),
		.write_data(vga_write_data),
		.write_enable(vga_write_enable),
		
		.color_out(vga_color),
		.hsync(vga_hsync),
		.vsync(vga_vsync));

endmodule

