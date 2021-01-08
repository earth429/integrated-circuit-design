`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:11:54 01/07/2021
// Design Name:   Switcher
// Module Name:   C:/Code/Kosen/4th/Verilog/SevenSegDev/t_Switcher.v
// Project Name:  SevenSegDev
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Switcher
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t_Switcher;

	// Inputs
	reg CLK;

	// Outputs
	wire D1;
	wire D2;
	wire D3;
	wire D4;

	// Instantiate the Unit Under Test (UUT)
	Switcher uut (
		.CLK(CLK), 
		.D1(D1), 
		.D2(D2), 
		.D3(D3), 
		.D4(D4)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always #12.5
	begin
		CLK = ~CLK;
	end
      
endmodule

