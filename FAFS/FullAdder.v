`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:01:55 12/09/2020 
// Design Name: 
// Module Name:    FullAdder 
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
module FullAdder(A, B, Ci, S, Co);
	input A, B, Ci;
	output S, Co;
	
	wire C1, C2;
	wire S1, S2;
	
	// A+B
	HalfAdder HA1(.A(A), .B(B), .S(S1), .C(C1));
	// ŒJ‚èã‚ª‚è‚ğA+B‚É‘«‚·
	HalfAdder HA2(.A(Ci), .B(S1), .S(S2), .C(C2));
	
	assign S = S2;
	assign Co = C1 | C2; // ŒJ‚èã‚ª‚è‚ÍOR‚ğ‚Æ‚é
endmodule
