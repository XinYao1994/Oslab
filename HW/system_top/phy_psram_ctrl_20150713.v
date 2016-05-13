/*
 * $File: phy_mem_ctrl.v
 * $Date: Fri Dec 20 19:11:35 2013 +0800
 * $Author: jiakai <jia.kai66@gmail.com>
 */

`timescale 1ns/1ps

`define VGA_ADDR_WIDTH	     18
`define VGA_DATA_WIDTH	     8

`define COM_DATA_ADDR	32'h1FD003F8	// only lowest byte contributes
`define COM_STAT_ADDR	32'h1FD003FC	// {30'b0, read_ready, write_ready}

`define SEGDISP_ADDR	32'h1FD00400	// 7-segment display monitor

`define VGA_ADDR_START	32'h1A000000
`define VGA_ADDR_END	32'h1A096000

`define KEYBOARD_ADDR	32'h0F000000

`define ADDR_IS_RAM(addr) ((addr & 32'h007FFFFF) == addr)
`define ADDR_IS_FLASH(addr) (addr[31:24] == 8'h1E)
`define ADDR_IS_ROM(addr) (addr[31:12] == 20'h10000)
`define ADDR_IS_VGA(addr) (addr >= `VGA_ADDR_START && addr < `VGA_ADDR_END)

`define ROM_ADDR_WIDTH	            12

`define RAM_WRITE_WIDTH	           2	// width of write signal
`define RAM_WRITE_READ_RECOVERY    1	// recovery time before next read after write
`define RAM_WRITE_RECOVERY		   4
`define RAM_READ_RECOVERY		   4

`define FLASH_WRITE_WIDTH          4
`define FLASH_WRITE_READ_RECOVERY  2

// physical memory controller
module phy_psram_ctrl(
	input clk50M,
	input clk,
	input rst,

	input is_write,
	input [31:0] addr,
	input [31:0] data_in,
	output reg [31:0] data_out,
	output busy,

	output reg int_com_ack,

	output reg [31:0] segdisp,

	// control interface
	input rom_selector,

	// ram interface
	output reg [22:0] sram_addr,
	inout [15:0] sram_data,
	output sram_ce,
	output reg sram_oe,
	output reg sram_we,

	// serial port interface
	input [7:0]com_data_in,
	output [7:0] com_data_out,
	output reg enable_com_write,
	input com_read_ready,
	input com_write_ready,

	// VGA interface
	output reg [`VGA_ADDR_WIDTH-1:0] vga_write_addr,
	output reg [`VGA_DATA_WIDTH-1:0] vga_write_data,
	output reg vga_write_enable,

	// ascii keyboard interface
	input [7:0] kbd_data,
	output reg kbd_int_ack);

	// ------------------------------------------------------------------

	reg [31:0] addr_latch, write_data_latch, read_data_latch;
	reg [15:0] sram_data_out;
	reg [4:0] state;
	//reg [3:0] write_cnt;
	//wire [3:0] write_cnt_next = write_cnt + 1'b1;
	localparam IDLE = 4'b0000, READ_RAM_LB = 4'b0001, READ_WAIT = 4'b0010, READ_RAM_UB = 4'b0011; 
	localparam WRITE_RAM_LB = 4'b0100, WRITE_WAIT = 4'b0101, WRITE_RAM_UB = 4'b0110, WRITE_FLASH = 4'b0111, RECOVERY_READ = 4'b1000;

	assign busy = (state != IDLE || is_write);

	assign addr_is_ram = `ADDR_IS_RAM(addr);
	assign addr_is_com_data = (addr == `COM_DATA_ADDR);
	assign addr_is_com_stat = (addr == `COM_STAT_ADDR);
	assign addr_is_flash = `ADDR_IS_FLASH(addr);
    assign addr_is_segdisp = (addr == `SEGDISP_ADDR);
    assign addr_is_rom = `ADDR_IS_ROM(addr);
    assign addr_is_vga = `ADDR_IS_VGA(addr);
    assign addr_is_keyboard = (addr == `KEYBOARD_ADDR);

	wire [31:0] addr_vga_offset = addr - `VGA_ADDR_START;

	wire [`ROM_ADDR_WIDTH-1:0] rom_addr = addr[`ROM_ADDR_WIDTH-1:0];
	reg [31:0] rom_data;

	task rom_bootloader;
		case (rom_addr)
            0: rom_data = 32'h3c10be00;
            4: rom_data = 32'h3c04bfd0;
            8: rom_data = 32'h34840400;
            12: rom_data = 32'h240200ff;
            16: rom_data = 32'hae020000;
            20: rom_data = 32'h240f0000;
            24: rom_data = 32'h020f7821;
            28: rom_data = 32'h8de90000;
            32: rom_data = 32'h8def0004;
            36: rom_data = 32'h000f7c00;
            40: rom_data = 32'h012f4825;
            44: rom_data = 32'h3c08464c;
            48: rom_data = 32'h3508457f;
            52: rom_data = 32'h11090003;
            56: rom_data = 32'h00000000;
            60: rom_data = 32'h10000046;
            64: rom_data = 32'h00000000;
            68: rom_data = 32'h240f0038;
            72: rom_data = 32'h020f7821;
            76: rom_data = 32'h8df10000;
            80: rom_data = 32'h8def0004;
            84: rom_data = 32'h000f7c00;
            88: rom_data = 32'h022f8825;
            92: rom_data = 32'h240f0058;
            96: rom_data = 32'h020f7821;
            100: rom_data = 32'h8df20000;
            104: rom_data = 32'h8def0004;
            108: rom_data = 32'h000f7c00;
            112: rom_data = 32'h024f9025;
            116: rom_data = 32'h3252ffff;
            120: rom_data = 32'h240f0030;
            124: rom_data = 32'h020f7821;
            128: rom_data = 32'h8df30000;
            132: rom_data = 32'h8def0004;
            136: rom_data = 32'h000f7c00;
            140: rom_data = 32'h026f9825;
            144: rom_data = 32'h262f0008;
            148: rom_data = 32'h000f7840;
            152: rom_data = 32'h020f7821;
            156: rom_data = 32'h8df40000;
            160: rom_data = 32'h8def0004;
            164: rom_data = 32'h000f7c00;
            168: rom_data = 32'h028fa025;
            172: rom_data = 32'h262f0010;
            176: rom_data = 32'h000f7840;
            180: rom_data = 32'h020f7821;
            184: rom_data = 32'h8df50000;
            188: rom_data = 32'h8def0004;
            192: rom_data = 32'h000f7c00;
            196: rom_data = 32'h02afa825;
            200: rom_data = 32'h262f0004;
            204: rom_data = 32'h000f7840;
            208: rom_data = 32'h020f7821;
            212: rom_data = 32'h8df60000;
            216: rom_data = 32'h8def0004;
            220: rom_data = 32'h000f7c00;
            224: rom_data = 32'h12800011;
            228: rom_data = 32'h02cfb025;
            232: rom_data = 32'h12a0000f;
            236: rom_data = 32'h00000000;
            240: rom_data = 32'hac960000;
            244: rom_data = 32'h26cf0000;
            248: rom_data = 32'h000f7840;
            252: rom_data = 32'h020f7821;
            256: rom_data = 32'h8de80000;
            260: rom_data = 32'h8def0004;
            264: rom_data = 32'h000f7c00;
            268: rom_data = 32'h010f4025;
            272: rom_data = 32'hae880000;
            276: rom_data = 32'h26d60004;
            280: rom_data = 32'h26940004;
            284: rom_data = 32'h26b5fffc;
            288: rom_data = 32'h1ea0fff3;
            292: rom_data = 32'h00000000;
            296: rom_data = 32'h26310020;
            300: rom_data = 32'h2652ffff;
            304: rom_data = 32'h1e40ffd7;
            308: rom_data = 32'h00000000;
            312: rom_data = 32'h24020023;
            316: rom_data = 32'h02600008;
            320: rom_data = 32'hac820000;
            324: rom_data = 32'h3c04bfd0;
            328: rom_data = 32'h34840400;
            332: rom_data = 32'h240200ef;
            336: rom_data = 32'h1000fffc;
            340: rom_data = 32'hac820000;
            344: rom_data = 32'h3c04bfd0;
            348: rom_data = 32'h34840400;
            352: rom_data = 32'h240200ee;
            356: rom_data = 32'h1000fffc;
            360: rom_data = 32'hac820000;
            default: rom_data = 32'h0;
        endcase
	endtask

	task rom_memtrans;
		case (rom_addr)
            0: rom_data = 32'h0c000079;
            4: rom_data = 32'h00000000;
            8: rom_data = 32'h0c000082;
            12: rom_data = 32'had400000;
            16: rom_data = 32'h00402821;
            20: rom_data = 32'had450000;
            24: rom_data = 32'h24190023;
            28: rom_data = 32'h0c00008d;
            32: rom_data = 32'h24040003;
            36: rom_data = 32'h24040003;
            40: rom_data = 32'h0c00008d;
            44: rom_data = 32'h00403021;
            48: rom_data = 32'h00403821;
            52: rom_data = 32'h0c00009b;
            56: rom_data = 32'h03202021;
            60: rom_data = 32'h24190023;
            64: rom_data = 32'h00063080;
            68: rom_data = 32'h00073880;
            72: rom_data = 32'h240200f3;
            76: rom_data = 32'h10a20019;
            80: rom_data = 32'h00000000;
            84: rom_data = 32'h24020093;
            88: rom_data = 32'h10a2001f;
            92: rom_data = 32'h00000000;
            96: rom_data = 32'h2402000f;
            100: rom_data = 32'h10a2002b;
            104: rom_data = 32'h00000000;
            108: rom_data = 32'h24020070;
            112: rom_data = 32'h10a20035;
            116: rom_data = 32'h00000000;
            120: rom_data = 32'h24020038;
            124: rom_data = 32'h10a20043;
            128: rom_data = 32'h00000000;
            132: rom_data = 32'h240200ff;
            136: rom_data = 32'h14a2ffdf;
            140: rom_data = 32'h00000000;
            144: rom_data = 32'h00cc3021;
            148: rom_data = 32'h00c00008;
            152: rom_data = 32'h00000000;
            156: rom_data = 32'h00cc3021;
            160: rom_data = 32'h03e00008;
            164: rom_data = 32'h00ec3821;
            168: rom_data = 32'h00cb3021;
            172: rom_data = 32'h03e00008;
            176: rom_data = 32'h00eb3821;
            180: rom_data = 32'h0c000027;
            184: rom_data = 32'h00000000;
            188: rom_data = 32'h10c70045;
            192: rom_data = 32'h00000000;
            196: rom_data = 32'h0c00008d;
            200: rom_data = 32'h24040004;
            204: rom_data = 32'hacc20000;
            208: rom_data = 32'h1000fffa;
            212: rom_data = 32'h24c60004;
            216: rom_data = 32'h0c000027;
            220: rom_data = 32'h00000000;
            224: rom_data = 32'h10c7003c;
            228: rom_data = 32'h00000000;
            232: rom_data = 32'h8cc50000;
            236: rom_data = 32'h0c00009b;
            240: rom_data = 32'h00a02021;
            244: rom_data = 32'h0c00009b;
            248: rom_data = 32'h00052202;
            252: rom_data = 32'h0c00009b;
            256: rom_data = 32'h00052402;
            260: rom_data = 32'h0c00009b;
            264: rom_data = 32'h00052602;
            268: rom_data = 32'h1000fff4;
            272: rom_data = 32'h24c60004;
            276: rom_data = 32'h0c00002a;
            280: rom_data = 32'h00000000;
            284: rom_data = 32'h240200ff;
            288: rom_data = 32'had620000;
            292: rom_data = 32'h10c7002b;
            296: rom_data = 32'h00000000;
            300: rom_data = 32'h8cc50000;
            304: rom_data = 32'h0c00009b;
            308: rom_data = 32'h00a02021;
            312: rom_data = 32'h0c00009b;
            316: rom_data = 32'h00052202;
            320: rom_data = 32'h1000fff8;
            324: rom_data = 32'h24c60004;
            328: rom_data = 32'h0c00002a;
            332: rom_data = 32'h00000000;
            336: rom_data = 32'h10c70020;
            340: rom_data = 32'h00000000;
            344: rom_data = 32'h0c00008d;
            348: rom_data = 32'h24040002;
            352: rom_data = 32'h24030040;
            356: rom_data = 32'had630000;
            360: rom_data = 32'hacc20000;
            364: rom_data = 32'h24020070;
            368: rom_data = 32'had620000;
            372: rom_data = 32'h8d620000;
            376: rom_data = 32'h30420080;
            380: rom_data = 32'h1040fffb;
            384: rom_data = 32'h00000000;
            388: rom_data = 32'h1000fff2;
            392: rom_data = 32'h24c60004;
            396: rom_data = 32'h0c00002a;
            400: rom_data = 32'h00000000;
            404: rom_data = 32'h24020020;
            408: rom_data = 32'had620000;
            412: rom_data = 32'h240200d0;
            416: rom_data = 32'hacc20000;
            420: rom_data = 32'h0c00009b;
            424: rom_data = 32'h240400cc;
            428: rom_data = 32'h24020070;
            432: rom_data = 32'had620000;
            436: rom_data = 32'h8d620000;
            440: rom_data = 32'h30420080;
            444: rom_data = 32'h1040fff9;
            448: rom_data = 32'h00000000;
            452: rom_data = 32'h0c00009b;
            456: rom_data = 32'h24040033;
            460: rom_data = 32'h1000ff8e;
            464: rom_data = 32'h00000000;
            468: rom_data = 32'h0c00009b;
            472: rom_data = 32'h03202021;
            476: rom_data = 32'h1000ff8a;
            480: rom_data = 32'h00000000;
            484: rom_data = 32'h3c089fd0;
            488: rom_data = 32'h350803f8;
            492: rom_data = 32'h3c099fd0;
            496: rom_data = 32'h352903fc;
            500: rom_data = 32'h3c0a9fd0;
            504: rom_data = 32'h354a0400;
            508: rom_data = 32'h3c0b9e00;
            512: rom_data = 32'h03e00008;
            516: rom_data = 32'h3c0c8000;
            520: rom_data = 32'h00801821;
            524: rom_data = 32'h00a0e821;
            528: rom_data = 32'h8d240000;
            532: rom_data = 32'h30840002;
            536: rom_data = 32'h1080fffd;
            540: rom_data = 32'h00000000;
            544: rom_data = 32'h8d020000;
            548: rom_data = 32'h0322c826;
            552: rom_data = 32'h00602021;
            556: rom_data = 32'h03e00008;
            560: rom_data = 32'h03a02821;
            564: rom_data = 32'h03e0c021;
            568: rom_data = 32'h240f0000;
            572: rom_data = 32'h240e0000;
            576: rom_data = 32'h000420c0;
            580: rom_data = 32'h0c000082;
            584: rom_data = 32'h00000000;
            588: rom_data = 32'h01c21004;
            592: rom_data = 32'h01e27825;
            596: rom_data = 32'h25ce0008;
            600: rom_data = 32'h15c4fffa;
            604: rom_data = 32'h00000000;
            608: rom_data = 32'h0300f821;
            612: rom_data = 32'h03e00008;
            616: rom_data = 32'h01e01021;
            620: rom_data = 32'h8d2d0000;
            624: rom_data = 32'h31ad0001;
            628: rom_data = 32'h11a0fffd;
            632: rom_data = 32'h00000000;
            636: rom_data = 32'had040000;
            640: rom_data = 32'h03e00008;
            644: rom_data = 32'h0324c826;
            default: rom_data = 32'h0;
        endcase
	endtask

	always @(rom_addr, rom_selector)
		case (rom_selector)
			1'b0: rom_memtrans();
			1'b1: rom_bootloader();
		endcase

	assign com_data_out = write_data_latch[7:0];
	assign sram_ce = ~addr_is_ram;
	assign sram_data = sram_we ? {16{1'bz}} : sram_data_out;


	always @(*) begin
		data_out = 32'h0;
		case ({addr_is_ram, addr_is_com_data, addr_is_com_stat,	addr_is_flash, addr_is_rom, addr_is_keyboard})
			6'b100000: begin
				if(data_is_ready)
					data_out = read_data_latch;
			end
			6'b010000: data_out = {24'b0, com_data_in};
			6'b001000: data_out = {30'b0, com_read_ready, com_write_ready};
			6'b000100: data_out = {16'b1, 16'b1};
			6'b000010: data_out = rom_data;
			6'b000001: data_out = {24'b0, kbd_data};
		endcase
	end

	// assign int ack
	always @(negedge clk) begin
		int_com_ack <= addr_is_com_data && !is_write;
		kbd_int_ack <= addr_is_keyboard && !is_write;
	end
	
	reg is_write_prev;
	assign is_write_posedge = !is_write_prev && is_write;
	
	reg [31:0] counter;
	reg data_is_ready;

	// main FSM
	always @(negedge clk50M) begin
		enable_com_write <= 1'b0;
		is_write_prev <= is_write;
		vga_write_enable <= 1'b0;

		if (rst)
			state <= IDLE;
			
		else case (state)
			IDLE: begin
				sram_oe <= 1'b1;
				sram_we <= 1'b1;
				data_is_ready <= 1'b0;
				
				if (is_write_posedge) begin
					addr_latch <= addr;
					write_data_latch <= data_in;
				
					case ({addr_is_ram, addr_is_com_data, addr_is_flash, addr_is_segdisp, addr_is_vga})
						5'b10000: begin
							counter <= 0;
							state <= WRITE_RAM_LB;
						end
						
						5'b01000: enable_com_write <= 1'b1;
						5'b00100: state <= WRITE_FLASH;
						5'b00010: segdisp <= data_in;
						5'b00001: begin
							vga_write_addr <= addr_vga_offset[`VGA_ADDR_WIDTH+1:2];
							vga_write_data <= data_in[7:0];
							vga_write_enable <= 1'b1;
							state <= RECOVERY_READ;
						end
					endcase
				end
				
				else if (addr_is_ram) begin
					addr_latch <= addr;
					counter <= 0;
					state <= READ_RAM_LB;
				end			
			end 
			
			WRITE_RAM_LB: begin
				sram_we <= 1'b0;
				sram_addr <= {1'b0, addr_latch[22:2], 1'b0};
				sram_data_out <= write_data_latch[15:0];
				counter <= counter + 1;
				
				if(counter >= `RAM_WRITE_RECOVERY)
					state <= WRITE_WAIT;
			end
			
			WRITE_WAIT: begin 
				sram_we <= 1'b1;
				counter <= 0;
				state <= WRITE_RAM_UB;
			end
			
			WRITE_RAM_UB: begin
				sram_we <= 1'b0;
				sram_addr <= {1'b0, addr_latch[22:2], 1'b1};
				sram_data_out <= write_data_latch[31:16];
				counter <= counter + 1;
				
				if(counter >= `RAM_WRITE_RECOVERY)
					state <= RECOVERY_READ;
			end
			
			READ_RAM_LB: begin
				sram_oe <= 1'b0;
				sram_addr <= {1'b0, addr_latch[22:2], 1'b0};
				counter <= counter + 1;
				if(counter >= `RAM_READ_RECOVERY) begin
					counter <= 0;
					state <= READ_RAM_UB;
				end
			end
			
			READ_RAM_UB: begin
				read_data_latch[15:0] <= sram_data;
				sram_addr <= {1'b0, addr_latch[22:2], 1'b1};
				counter <= counter + 1;
				if(counter >= `RAM_READ_RECOVERY) 
					state <= READ_WAIT;
			end
			
			READ_WAIT: begin
				read_data_latch[31:16] <= sram_data;
				sram_oe <= 1'b1;
				data_is_ready <= 1'b1;
				state <= RECOVERY_READ;
			end
			
			WRITE_FLASH: begin
				state <= RECOVERY_READ;
			end
			
			RECOVERY_READ: begin
				sram_we <= 1'b1;
				state <= IDLE;
			end
				
			default:
				state <= IDLE;
		endcase
	end

endmodule

