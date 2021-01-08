`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:41:05 12/25/2020 
// Design Name: 
// Module Name:    Switcher 
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
module Switcher(CLK, D1, D2, D3, D4);
	input CLK;
	output D1, D2, D3, D4;
	
	reg D1 = 1'b0;
	reg D2 = 1'b0;
	reg D3 = 1'b0;
	reg D4 = 1'b0;
	reg [1:0]COUNT = 2'd0;
	
	always @(posedge CLK)
	begin
		if (COUNT == 2'd0)
		begin
			D1 <= 1'b1;
			D4 <= 1'b0;
		end
		else if (COUNT == 2'd1)
		begin
			D2 <= 1'b1;
			D1 <= 1'b0;
		end
		else if (COUNT == 2'd2)
		begin
			D3 <= 1'b1;
			D2 <= 1'b0;
		end
		else
		begin
			D4 <= 1'b1;
			D3 <= 1'b0;
		end
			
		if (COUNT == 2'd3)
			COUNT <= 2'd0;
		else
			COUNT <= COUNT + 2'd1;
	end

endmodule
