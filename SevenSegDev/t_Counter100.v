`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:59:10 01/07/2021
// Design Name:   Counter100
// Module Name:   C:/Code/Kosen/4th/Verilog/SevenSegDev/t_Counter100.v
// Project Name:  SevenSegDev
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Counter100
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t_Counter100;

	// Inputs
	reg CE;
	reg RESET;

	// Outputs
	wire [3:0] CNT1;
	wire [3:0] CNT2;
	wire [3:0] CNT3;
	wire [3:0] CNT4;

	// Instantiate the Unit Under Test (UUT)
	Counter100 uut (
		.CE(CE), 
		.RESET(RESET), 
		.CNT1(CNT1), 
		.CNT2(CNT2), 
		.CNT3(CNT3), 
		.CNT4(CNT4)
	);

	initial begin
		// Initialize Inputs
		CE = 0;
		RESET = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus heres

	end
	
	always #500000
		CE = ~CE; 
endmodule

