`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:00:13 01/08/2021
// Design Name:   Watch100
// Module Name:   C:/Code/Kosen/4th/Verilog/SevenSegDev/t_Watch100.v
// Project Name:  SevenSegDev
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Watch100
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t_Watch100;

	// Inputs
	reg CLK;
	reg RESET;

	// Outputs
	wire [7:0] DOUT;
	wire D1;
	wire D2;
	wire D3;
	wire D4;

	// Instantiate the Unit Under Test (UUT)
	Watch100 uut (
		.CLK(CLK), 
		.RESET(RESET), 
		.DOUT(DOUT), 
		.D1(D1), 
		.D2(D2), 
		.D3(D3), 
		.D4(D4)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		RESET = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always #12.5
	begin
		CLK = ~CLK;
	end
      
endmodule

