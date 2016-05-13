/*
 * $File: uart_port.v
 * $Date: 2015.07.16
 * $Author: Diqing Hu (hudq024@mail.hust.edu.cn)
 */


// interrupt for serial port
module uart_port (
	input clk50M,
	input clk,							// the input clock is cpu_fast
	input rst,
	output reg int_req,
	input int_ack,
	output reg [7:0] data_out,
	input [7:0] data_in,

	input write_enable,
	output write_busy,

	output TxD,
	input RxD);

	// ------------------------------------------------------------------
	// uart interrupt
	always @(posedge clk) begin
		if (rst || int_ack)
			int_req <= 1'b0;
		else if (uart_rx_data_present && !int_req) begin
			int_req <= 1'b1;
			data_out <= uart_rx_data_out;
		end
	end
		
	// --------------------------------------------------------------------
	// baud rate for UART
	reg [7:0] baud_count;
	reg en_16_x_baud;
	
	always @ (posedge clk50M) begin
		if(rst) begin
			baud_count <= 8'h0;
			en_16_x_baud <= 1'b0;
		end
		
		else begin
			//if(baud_count == 325) begin				// baud rate 9600 @ 50MHz
			if(baud_count == 26) begin					// baud rate 115200 @ 50MHz
				baud_count <= 8'h0;
				en_16_x_baud <= 1'b1;
			end
			else begin
				baud_count <= baud_count + 1;
				en_16_x_baud <= 1'b0;
			end
		end			
	end

	// --------------------------------------------------------------------
	// UART Transmitter with integral 16 byte FIFO buffer
	
	// sigal for UART_TX6
	wire	uart_tx_data_present;
	wire	uart_tx_half_full;
	reg	write_to_uart_tx;
	reg [7:0] uart_tx_data_in;
		
	reg is_tx_prev;
	wire is_tx_posedge;
	assign is_tx_posedge = !is_tx_prev && write_enable;
	
	always @ (posedge clk50M) begin
		if(rst) begin
			is_tx_prev <= 1'b0;
			write_to_uart_tx <= 1'b0;
			uart_tx_data_in <= 8'h0;
		end
		
		else begin
			is_tx_prev <= write_enable;
			
			if (is_tx_posedge) begin
				write_to_uart_tx <= 1'b1;
				uart_tx_data_in <= data_in;				
			end
			
			else begin
				write_to_uart_tx <= 1'b0;
				uart_tx_data_in <= 8'h0;
			end
		end
	end
	
	uart_tx6 tx (
		.data_in(uart_tx_data_in),
		.en_16_x_baud(en_16_x_baud),
		.serial_out(TxD),
		.buffer_write(write_to_uart_tx),
		.buffer_data_present(uart_tx_data_present),
		.buffer_half_full(uart_tx_half_full),
		.buffer_full(write_busy),
		.buffer_reset(rst),
		.clk(clk50M));
		
	// signal for UART RX6
	wire [7:0] uart_rx_data_out;
	//reg	read_from_uart_rx;
	wire	uart_rx_data_present;
	wire	uart_rx_half_full;
	wire	uart_rx_full;
	
	uart_rx6 rx (
		.serial_in(RxD),
		.en_16_x_baud(en_16_x_baud),
		.data_out(uart_rx_data_out),
		//.buffer_read(read_from_uart_rx),
		.buffer_read(int_ack),
		.buffer_data_present(uart_rx_data_present),
		.buffer_half_full(uart_rx_half_full),
		.buffer_full(uart_rx_full),
		.buffer_reset(rst),
		.clk(clk50M));

endmodule

