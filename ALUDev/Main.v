`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:37:35 02/06/2021 
// Design Name: 
// Module Name:    Main 
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
module Main(CLK, SW_START, SW_INST, SW_SEL, SEG_DIGIT, SEG_PATTERN, LED);
    input CLK; // ���U��
    input SW_START; // SW17
    input [7:0]SW_INST; // SW1~8
    input [1:0]SW_SEL; // SW18,22
    output [1:0]SEG_DIGIT; // 7�Z�O�̐���
    output [7:0]SEG_PATTERN; // 7�Z�O�̕\��
    output [1:0]LED; // �X�e�[�^�X

    wire [7:0]inst; // ����
    wire alu_clk; // ALU����
    wire dec_clk; // Decoder����
    wire wri_clk; // Write����

    wire [3:0]ar_data; // �A�L�������[�^�̏o�͒l
    wire [3:0] ir_data; // �C���f�b�N�X���W�X�^�̏o�͒l
    wire as; // �A�L�������[�^�̐���
    wire is; // �C���f�b�N�X���W�X�^�̐���

    wire [3:0]in_data1; // ALU�ւ̓���
    wire [3:0]in_data2;
    wire [3:0]addr; // ���Z���ʂ̏o�͐�
    wire [3:0]out_data; // ALU�̏o��(���Z����)
    wire ic; // �L����
    wire c; // �L�����t���O
    wire z; // �[���t���O

    wire [7:0]seg; // �\������l(2��)
    wire s_slk; // �_�C�i�~�b�N�_���p�N���b�N
    wire [3:0]disp; // �\������l(1��)

    // �A�L�������[�^
    Accumulator accumulator(.CLK(wri_clk), .S(as), .R_DATA(ar_data), .W_DATA(out_data));
    // �C���f�b�N�X���W�X�^
    IndexRegister indexregister(.CLK(wri_clk), .R_ADDR(SW_INST[3:0]), .R_DATA(ir_data), .S(is), .W_ADDR(addr), .W_DATA(out_data));
    // �����fecth
    CLKCounter clkcounter(.CLK(CLK), .SW17(SW_START), .SW_INST(SW_INST), .INST(inst), .DEC_CLK(dec_clk), .ALU_CLK(alu_clk), .WRI_CLK(wri_clk), .ST_INST());
    InstructionDecoder instructiondecoder(.CLK(dec_clk), .INST(inst), .ACC(ar_data), .INDEX(ir_data), .DATA1(in_data1), .DATA2(in_data2), .IW_ADDR(addr), .IS(is), .AS(as));
    ALU alu(.CLK(alu_clk), .INST(inst[7:4]), .IN_DATA1(in_data1), .IN_DATA2(in_data2), .OUT_DATA(out_data), .C(ic));
    StatusRegister statusregister(.CLK(wri_clk), .IC(ic), .DATA(out_data), .C(c), .Z(z));
    // �\��
    Selector selector(.SW_SEL(SW_SEL), .INST(SW_INST), .INDEX(ir_data), .ACC(ar_data), .C(c),.Z(z), .SEG(seg), .LED(LED));
    DFCLW100 dfclw100(.CLK(CLK), .S_CLK(s_clk));
    Switcher switcher(.S_CLK(s_clk), .D(SEG_DIGIT));
    DispSelector dispselector(.SEG(seg), .S_CLK(s_clk), .DISP(disp));
    Decoder8 decorder8(.CNT(disp), .DOUT(SEG_PATTERN));
endmodule
