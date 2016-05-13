
module kbd(
	input clk,			// the input clock is 100MHz
	input clk50M,
	input rst,
	
	output reg kbd_int,
	input kbd_int_ack,
	output reg [7:0] kbd_data,
	
	inout ps2_clk,
	inout ps2_data);
	
	
	reg [7:0] recv_data;
	reg rev_ack;
	// maintain int
	always @(posedge clk50M) begin
		if (kbd_int && kbd_int_ack)
			kbd_int <= 1'b0;
		if (rst) begin
			kbd_data <= 8'h0;
			kbd_int <= 1'b0;
		end else if (!kbd_int && rev_ack) begin //recv_data
			kbd_int <= 1'b1;
			kbd_data <= recv_data;
		end
	end
	
	
	reg [7:0] tx_data;
	reg write_data;
	wire [7:0] rx_data;
	wire read_data;
	
	Ps2Interface ups2 (
		.ps2_clk(ps2_clk),  
		.ps2_data(ps2_data), 
		.clk(clk),      
		.rst(rst),      
		.tx_data(tx_data),  
		.write_data(write_data),
		.rx_data(rx_data),  
		.read_data(read_data),
		.busy( ),     
		.err( ));
	
	parameter kbd_IDLE = 1, kbd_START = 2, kbd_REC1 = 3, kbd_REC2 = 4, kbd_REC3 = 5;
	reg[0:3] kbd_state;
	
	always @(posedge clk) begin
		if(rst) begin
			write_data <= 1'b1;
			tx_data <= 8'hff;	
			rev_ack <= 1'b0;
		   kbd_state <= kbd_IDLE;
		end
		else begin
		   case(kbd_state)
			   kbd_IDLE: 
				begin
				   tx_data <= 8'hf4;
					kbd_state <= kbd_START;
				end
			   kbd_START: 
				begin
			      rev_ack <= 1'b0;
				   kbd_state <= kbd_REC1;//if(rx_data == 8'hf0) s
				end
			   kbd_REC1: 
				begin
				   write_data <= 1'b0;
			      if(read_data) begin
					    recv_data <= rx_data;
			          rev_ack <= 1'b1;
					    kbd_state <= kbd_REC2;
				   end
					else //kbd_state <= kbd_REC1;
					begin 
				       tx_data <= 8'hf4;
					    kbd_state <= kbd_START;//kbd_state <= kbd_REC3;
					end
				end
			   kbd_REC2: 
				begin
				   tx_data <= 8'hf4;
					kbd_state <= kbd_START;//kbd_state <= kbd_REC3;
				end
			   //kbd_REC3: 
				//begin
				   //tx_data <= 8'hf4;
					//kbd_state <= kbd_START;
				//end
			endcase
			
			//write_data <= 1'b0;
			//if(read_data)
			//	recv_data <= rx_data;
		
		end
	end
	
	
endmodule
