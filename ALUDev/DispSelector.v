`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:36:10 02/06/2021 
// Design Name: 
// Module Name:    DispSelector 
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
module DispSelector(SEG, S_CLK, DISP);
    input [7:0]SEG;
    input S_CLK;
    output [3:0]DISP;

    function [3:0]sel;
        input [7:0]seg;
        input s_clk;
        begin
            case (s_clk)
                1'b1:sel = seg[3:0];
                1'b0:sel = seg[7:4];
            endcase
        end
    endfunction

    assign DISP = sel(SEG, S_CLK);
endmodule
