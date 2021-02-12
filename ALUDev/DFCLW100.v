`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:34:42 02/06/2021 
// Design Name: 
// Module Name:    DFCLW100 
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
module DFCLW100(CLK, S_CLK);
    input CLK;
    output S_CLK;

    reg S_CLK = 1'b0;
    reg [25:0]CEOUT = 16'd1;

    always @(posedge CLK) begin
        if (CEOUT == 15'd20000)
        begin
            CEOUT <= 15'd1;
            S_CLK <= ~S_CLK; // check
        end
        else
        begin
            CEOUT <= CEOUT + 15'd1;
        end
    end
endmodule
