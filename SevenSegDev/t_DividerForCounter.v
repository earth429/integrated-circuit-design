`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:57:35 01/07/2021
// Design Name:   DividerForCounter
// Module Name:   C:/Code/Kosen/4th/Verilog/SevenSegDev/t_DividerForCounter.v
// Project Name:  SevenSegDev
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DividerForCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t_DividerForCounter;

	// Inputs
	reg CLK;

	// Outputs
	wire CEOUT;

	// Instantiate the Unit Under Test (UUT)
	DividerForCounter uut (
		.CLK(CLK), 
		.CEOUT(CEOUT)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always #12.5
		CLK = ~CLK;
      
endmodule

