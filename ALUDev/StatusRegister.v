`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:32:55 02/06/2021 
// Design Name: 
// Module Name:    StatusRegister 
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
module StatusRegister(CLK, IC, DATA, C, Z);
    input CLK;
    input IC;
    input [3:0]DATA;
    output C;
    output Z;

    reg Z;
    reg C;

    always @(posedge CLK) begin
        C <= IC;
        if (DATA == 4'b0000)
        begin
            Z <= 1;
        end
        else
        begin
            Z <= 0;
        end
    end
endmodule
