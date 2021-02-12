`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:20:23 02/06/2021 
// Design Name: 
// Module Name:    ALU 
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
module ALU(CLK, INST, IN_DATA1, IN_DATA2, OUT_DATA, C);
    input CLK; // �N���b�N
    input [3:0]INST; // ���ߎ��
    input [3:0]IN_DATA1; // ���Z�킩��̓���
    input [3:0]IN_DATA2;
    output [3:0]OUT_DATA; // ���Z�킩��̏o��
    output C; // �L�����t���O

    reg [3:0]OUT_DATA;
    reg C;

    always @(posedge CLK) begin

        // �l�i�[
        if (INST >= 4'b0001 && INST <= 4'b0011)
        begin
            OUT_DATA <= IN_DATA1;
            C <= 0;
        end

        // �A�L�������[�^�Ƃ̉��Z
        else if (INST >= 4'b0100 && INST <= 4'b0101)
        begin
            {C, OUT_DATA} <= IN_DATA1 + IN_DATA2;
        end 
        
        // �A�L�������[�^����̌��Z
        else if (INST >= 4'b0110 && INST <= 4'b0111)
        begin
            {C, OUT_DATA} <= IN_DATA1 - IN_DATA2;
        end
            
        // �_�����]
        else if (INST >= 4'b1000 && INST <= 4'b1001)
        begin
            OUT_DATA <= ~IN_DATA1;
            C <= 0;
        end

        // �_���a
        else if (INST >= 4'b1010 && INST <= 4'b1011)
        begin
            OUT_DATA <= IN_DATA1 | IN_DATA2;
            C <= 0;
        end

        // �_����
        else if (INST >= 4'b1110 && INST <= 4'b1101)
        begin
            OUT_DATA <= IN_DATA1 & IN_DATA2;
            C <= 0;
        end

        // �r���I�_���a
        else if (INST >= 4'b1110 && INST <= 4'b1111)
        begin
            OUT_DATA <= IN_DATA1 ^ IN_DATA2;
            C <= 0;
        end
    end
endmodule
