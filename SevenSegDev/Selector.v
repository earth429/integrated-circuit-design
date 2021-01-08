`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:40:25 12/25/2020 
// Design Name: 
// Module Name:    Selector 
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
module Selector(S_CLK, CNT1_TMP, CNT2_TMP, CNT3_TMP, CNT4_TMP, CNT);
	input S_CLK;
	input [3:0]CNT1_TMP;
	input [3:0]CNT2_TMP;
	input [3:0]CNT3_TMP;
	input [3:0]CNT4_TMP;
	output [3:0]CNT;
	
	reg [3:0]CNT = 1'b0;
	reg [1:0]TEMP = 2'd0;
	
	always @(posedge S_CLK)
	begin
		if (TEMP == 2'd0)
		begin
			CNT <= CNT1_TMP;
		end
		else if(TEMP == 2'd1)
		begin
			CNT <= CNT2_TMP;
		end
		if (TEMP == 2'd2)
		begin
			CNT <= CNT3_TMP;
		end
		else if(TEMP == 2'd3)
		begin
			CNT <= CNT4_TMP;
		end
		
		if (TEMP == 2'd3)
			TEMP <= 2'd0;
		else
			TEMP <= TEMP + 2'd1;
	end

endmodule
