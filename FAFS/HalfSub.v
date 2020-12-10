`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:02:23 12/09/2020 
// Design Name: 
// Module Name:    HalfSub 
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
module HalfSub(A, B, D, Bo);
	input A, B;
	output D, Bo;
	
	assign D = A ^ B;
	assign Bo = ~A & B;
endmodule
