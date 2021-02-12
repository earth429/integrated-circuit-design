`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:32:09 02/06/2021 
// Design Name: 
// Module Name:    IndexRegister 
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
module IndexRegister(CLK, R_ADDR, R_DATA, S, W_ADDR, W_DATA);
    input CLK;
    input S; // 1ÇÃÇ∆Ç´èëÇ´çûÇ›
    input [3:0]R_ADDR;
    input [3:0]W_ADDR;
    input [3:0]W_DATA;
    output [3:0]R_DATA;

    reg [3:0]register[0:15];

    assign R_DATA = register[R_ADDR];

    always @(posedge CLK) begin
        if (S == 1'b1)
        begin
            register[W_ADDR] <= W_DATA;
        end
    end
endmodule
