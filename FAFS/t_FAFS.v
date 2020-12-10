`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:29:41 12/09/2020
// Design Name:   FAFS
// Module Name:   C:/Code/Kosen/4th/Verilog/FAFS/t_FAFS.v
// Project Name:  FAFS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FAFS
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t_FAFS;

	// Inputs
	reg SW1, SW2, SW3, SW4;

	// Outputs
	wire LD1, LD2;

	// Instantiate the Unit Under Test (UUT)
	FAFS uut (
		.SW1(SW1), 
		.SW2(SW2), 
		.SW3(SW3), 
		.SW4(SW4), 
		.LD1(LD1), 
		.LD2(LD2)
	);

	initial begin
		// Initialize Inputs
		{SW4,SW1,SW2,SW3}=4'b0000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		{SW4,SW1,SW2,SW3}=4'b0001;
		#100 {SW4,SW1,SW2,SW3}=4'b0010;
		#100 {SW4,SW1,SW2,SW3}=4'b0011;
		#100 {SW4,SW1,SW2,SW3}=4'b0100;
		#100 {SW4,SW1,SW2,SW3}=4'b0101;
		#100 {SW4,SW1,SW2,SW3}=4'b0110;
		#100 {SW4,SW1,SW2,SW3}=4'b0111;
		#100 {SW4,SW1,SW2,SW3}=4'b1000;
		#100 {SW4,SW1,SW2,SW3}=4'b1001;
		#100 {SW4,SW1,SW2,SW3}=4'b1010;
		#100 {SW4,SW1,SW2,SW3}=4'b1011;
		#100 {SW4,SW1,SW2,SW3}=4'b1100;
		#100 {SW4,SW1,SW2,SW3}=4'b1101;
		#100 {SW4,SW1,SW2,SW3}=4'b1110;
		#100 {SW4,SW1,SW2,SW3}=4'b1111;

	end
      
endmodule

