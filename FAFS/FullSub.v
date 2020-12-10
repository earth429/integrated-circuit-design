`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:04:21 12/09/2020 
// Design Name: 
// Module Name:    FullSub 
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
module FullSub(A, B, Bi, D, Bo);
	input A, B, Bi; // Biは前ビットから借りたかどうか
	output D, Bo;
	
	wire B1, B2;
	wire D1, D2;
	
	// A - B
	HalfSub HS1(.A(A), .B(B), .D(D1), .Bo(B1));
	// A - B - Bi
	HalfSub HS2(.A(D1), .B(Bi), .D(D2), .Bo(B2));
	
	assign D = D2;
	assign Bo = B1 | B2;
endmodule
