`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:24:50 01/07/2021
// Design Name:   Selector
// Module Name:   C:/Code/Kosen/4th/Verilog/SevenSegDev/t_Selector.v
// Project Name:  SevenSegDev
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Selector
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t_Selector;

	// Inputs
	reg S_CLK;
	reg [3:0] CNT1_TMP;
	reg [3:0] CNT2_TMP;
	reg [3:0] CNT3_TMP;
	reg [3:0] CNT4_TMP;

	// Outputs
	wire [3:0] CNT;

	// Instantiate the Unit Under Test (UUT)
	Selector uut (
		.S_CLK(S_CLK), 
		.CNT1_TMP(CNT1_TMP), 
		.CNT2_TMP(CNT2_TMP), 
		.CNT3_TMP(CNT3_TMP), 
		.CNT4_TMP(CNT4_TMP), 
		.CNT(CNT)
	);

	initial begin
		// Initialize Inputs
		S_CLK = 0;
		CNT1_TMP = 4'd1;
		CNT2_TMP = 4'd2;
		CNT3_TMP = 4'd3;
		CNT4_TMP = 4'd4;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always #500000
      S_CLK = ~S_CLK;
		
endmodule

