`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:40:06 01/07/2021
// Design Name:   Decoder8
// Module Name:   C:/Code/Kosen/4th/Verilog/SevenSegDev/t_Decoder8.v
// Project Name:  SevenSegDev
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Decoder8
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t_Decoder8;

	// Inputs
	reg [3:0] DIN;

	// Outputs
	wire [7:0] DOUT;

	// Instantiate the Unit Under Test (UUT)
	Decoder8 uut (
		.DIN(DIN), 
		.DOUT(DOUT)
	);

	initial begin
		// Initialize Inputs
		DIN = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always #1000000
	begin
		DIN = DIN + 1;
		if (DIN == 9)
			DIN = 0;
	end
      
endmodule

