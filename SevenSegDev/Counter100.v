`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:39:02 12/25/2020 
// Design Name: 
// Module Name:    Counter100 
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
module Counter100(CE, RESET, CNT1, CNT2, CNT3, CNT4);
	input CE;
	input RESET;
	output [3:0]CNT1;
	output [3:0]CNT2;
	output [3:0]CNT3;
	output [3:0]CNT4;
	
	reg [13:0]CNT = 14'd0;
	
	// CNT1Ç™1ÇÃà ÅACNT2Ç™10ÅACNT3Ç™100ÅACNT4Ç™1000
	reg [3:0]CNT1 = 4'd0;
	reg [3:0]CNT2 = 4'd0;
	reg [3:0]CNT3 = 4'd0;
	reg [3:0]CNT4 = 4'd0;
	
	always @(posedge CE)
	begin
		CNT <= CNT + 14'd1;
		
		if (RESET == 1)
		begin
			CNT <= 14'd0;
		end
		
		CNT4 <= CNT / 10'd1000;
		CNT3 <= (CNT / 7'd100) % 4'd10;
		CNT2 <= (CNT / 4'd10) % 4'd10;
		CNT1 <= CNT % 4'd10;
	end
	
endmodule
