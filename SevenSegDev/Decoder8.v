`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:40:45 12/25/2020 
// Design Name: 
// Module Name:    Decoder8 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Decoder8(DIN, DOUT);
	input [3:0]DIN;
	output [7:0]DOUT;
	
	assign DOUT = DECORDER(DIN);
	
	function [7:0] DECORDER;
		input [3:0]CNT;
		begin 
			case (CNT)
				4'b0000: DECORDER = 8'b11000000; // 0
				4'b0001: DECORDER = 8'b11111001; // 1
				4'b0010: DECORDER = 8'b10100100; // 2
				4'b0011: DECORDER = 8'b10110000; // 3
				4'b0100: DECORDER = 8'b10011001; // 4
				4'b0101: DECORDER = 8'b10010010; // 5
				4'b0110: DECORDER = 8'b10000010; // 6
				4'b0111: DECORDER = 8'b11111000; // 7
				4'b1000: DECORDER = 8'b10000000; // 8
				4'b1001: DECORDER = 8'b10010000; // 9
				default: DECORDER = 8'b11111111; // ”ñ•\Ž¦
			endcase
		end
	endfunction

endmodule
