`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:23:45 02/06/2021 
// Design Name: 
// Module Name:    Accumulator 
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
module Accumulator(CLK, S, R_DATA, W_DATA);
    input CLK;
    input S; // 1Ç≈èëÇ´çûÇ›ÇçsÇ§
    input [3:0]W_DATA;
    output [3:0]R_DATA;

    reg [3:0]register = 4'b0000;
    
    assign R_DATA = register;

    always @(posedge CLK) begin
        if (S == 1'b1)
        begin
            register <= W_DATA;
        end
    end
endmodule
