`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:37:04 12/25/2020 
// Design Name: 
// Module Name:    DividerForDynamicLighting 
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
module DividerForDynamicLighting(CLK, CEOUT);
	input CLK;
	output CEOUT;
	reg CEOUT = 1'b0;
	reg [14:0]COUNT = 15'd0;
	
	always @(posedge CLK)
	begin
		if (COUNT == 15'd20000)
		begin
			CEOUT <= ~CEOUT;
			COUNT <= 15'd0;
		end
		else
		begin
			COUNT <= COUNT + 1'b1;
		end
	end

endmodule
