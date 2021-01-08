`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:08:56 01/07/2021
// Design Name:   DividerForDynamicLighting
// Module Name:   C:/Code/Kosen/4th/Verilog/SevenSegDev/t_DividerForDynamicLighting.v
// Project Name:  SevenSegDev
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DividerForDynamicLighting
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t_DividerForDynamicLighting;

	// Inputs
	reg CLK;

	// Outputs
	wire CEOUT;

	// Instantiate the Unit Under Test (UUT)
	DividerForDynamicLighting uut (
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

