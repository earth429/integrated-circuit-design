`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:21:12 12/25/2020 
// Design Name: 
// Module Name:    DividerForCounter 
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
module DividerForCounter(CLK, CEOUT);
	input CLK;
	output CEOUT;
	reg [25:0] CNT = 26'b00_0000_0000_0000_0000_0000_0000;
	reg CEOUT = 1'b0;
	
	always @(posedge CLK)
	begin 
		if(CNT == 20000000)
		begin 
			CEOUT <= ~CEOUT;
			CNT <= 26'b00_0000_0000_0000_0000_0000_0000;
		end
		else
		begin
			CNT <= CNT + 26'b00_0000_0000_0000_0000_0000_0001;
		end
	end
	
endmodule
