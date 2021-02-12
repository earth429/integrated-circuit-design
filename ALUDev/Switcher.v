`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:35:25 02/06/2021 
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
module Switcher(S_CLK, D);
    input S_CLK;
    output [1:0]D;

    function [1:0]sw;
        input s_clk;
        begin
            case (s_clk)
                1'b0:sw = 2'b01;
                1'b1:sw = 2'b10;
            endcase
        end
    endfunction

    assign D = sw(S_CLK);
endmodule
