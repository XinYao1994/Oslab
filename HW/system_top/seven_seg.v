
module seven_seg (clk, rst, in, out, sel);
	input	clk, rst;
	input	[31:0]	in;
	output	reg [7:0]	out;
	output	reg [7:0]	sel;
	
	reg 	[3:0]	display;
	
	always @(posedge clk) begin
		if(rst)
			sel <= 8'b00000001;
        else if(sel < 8'b10000000)
			sel <= (sel<<1);
        else
			sel <= 8'b00000001;
	end
	
	always @(*) begin
		case(sel)
			8'b00000001: display <= in[3:0];
			8'b00000010: display <= in[7:4];
			8'b00000100: display <= in[11:8];
			8'b00001000: display <= in[15:12];
			8'b00010000: display <= in[19:16];
			8'b00100000: display <= in[23:20];
			8'b01000000: display <= in[27:24];
			8'b10000000: display <= in[31:28];
			default: display <= 4'b0;
        endcase
    end
	
	always @(*) begin
        case(display)
            4'b0000: out<=8'b11000000;
            4'b0001: out<=8'b11111001;
            4'b0010: out<=8'b10100100;
            4'b0011: out<=8'b10110000;
            4'b0100: out<=8'b10011001;
            4'b0101: out<=8'b10010010;
            4'b0110: out<=8'b10000010;
            4'b0111: out<=8'b11111000;
            4'b1000: out<=8'b10000000;
            4'b1001: out<=8'b10010000;
            4'b1010: out<=8'b10001000;
            //4'b1011: out<=8'b10110001;
				4'b1011: out<=8'b10000011;
            4'b1100: out<=8'b11000110;
            //4'b1101: out<=8'b11100001;
				4'b1101: out<=8'b10100001;
            4'b1110: out<=8'b10000110;
            4'b1111: out<=8'b10001110;
            default: out<=8'b01111111;
        endcase
    end
	
endmodule
