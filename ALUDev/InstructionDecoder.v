`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:15:53 02/06/2021 
// Design Name: 
// Module Name:    InstructionDecoder 
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
module InstructionDecoder(CLK, INST, ACC, INDEX, DATA1, DATA2, IW_ADDR, IS, AS);
	input CLK; // �N���b�N
	input [7:0]INST; // ����
	input [3:0]ACC; // �A�L�������[�^�̒l
	input [3:0]INDEX; // �C���f�b�N�X���W�X�^�̒l
	output [3:0]DATA1; // ���Z��ւ̓���
	output [3:0]DATA2;
	output [3:0]IW_ADDR; // �C���f�b�N�X���W�X�^�̃��W�X�^�ԍ�
	output IS; // �C���f�b�N�X���W�X�^�̓��͐���
	output AS; // �A�L�������[�^�̓��͐���

	reg [3:0]DATA1;
	reg [3:0]DATA2;
	reg [3:0]IW_ADDR;
	reg IS;
	reg AS;

	always @(posedge CLK) begin

		 // �A�L�������[�^�֑��l�i�[
		 if (INST[7:4] == 4'b0001)
		 begin
			  DATA1 <= INST[3:0]; // ����4�r�b�g�����l�ɂȂ�
			  DATA2 <= 4'bzzzz;
			  IW_ADDR <= 4'bzzzz;
			  IS <= 0;
			  AS <= 1; // �i�[��̓A�L�������[�^�Ƃ���
		 end

		 // �C���f�b�N�X���W�X�^����A�L�������[�^�֊i�[
		 if (INST[7:4] == 4'b0010)
		 begin
			  DATA1 <= INDEX; // �C���f�b�N�X���W�X�^�̒l
			  DATA2 <= 4'bzzzz;
			  IW_ADDR <= 4'bzzzz;
			  IS <= 0;
			  AS <= 1; // �i�[��̓A�L�������[�^
		 end

		 // �A�L�������[�^����C���f�b�N�X���W�X�^�֊i�[
		 if (INST[7:4] == 4'b0011)
		 begin
			  DATA1 <= ACC; // �A�L�������[�^�̒l
			  DATA2 <= 4'bzzzz;
			  IW_ADDR <= INST[3:0]; // ����4�r�b�g���C���f�b�N�X���W�X�^�̃A�h���X
			  IS <= 1; // �i�[��̓C���f�b�N�X���W�X�^
			  AS <= 0;
		 end

		 // �A�L�������[�^����C���f�b�N�X���W�X�^�ւ̉��Z�A���Z�A�_���a�A�_���ρA�r���I�_���a
		 if (INST[7:4] == 4'b0100 || INST[7:4] == 4'b0110 || INST[7:4] == 4'b1010 || INST[7:4] == 4'b1100 || INST[7:4] == 4'b1110) 
		 begin
			  DATA1 <= INDEX;
			  DATA2 <= ACC;
			  IW_ADDR <= 4'bzzzz;
			  IS <= 0;
			  AS <= 1; // �i�[��̓A�L�������[�^
		 end

		 // �A�L�������[�^���瑦�l�ւ̉��Z�A���Z�A�_���a�A�_���ρA�r���I�_���a
		 if (INST[7:4] == 4'b0101 || INST[7:4] == 4'b0111 || INST[7:4] == 4'b1011 || INST[7:4] == 4'b1101 || INST[7:4] == 4'b1111)
		 begin
			  DATA1 <= ACC;
			  DATA2 <= INST[3:0]; // ����4�r�b�g�����l
			  IW_ADDR <= 4'bzzzz;
			  IS <= 0;
			  AS <= 1; // �i�[��̓A�L�������[�^
		 end

		 // �A�L�������[�^�̘_�����]
		 if (INST[7:4] == 4'b1000)
		 begin
			  DATA1 <= ACC; // �A�L�������[�^�̒l
			  DATA2 <= 4'bzzzz;
			  IW_ADDR <= 4'bzzzz;
			  IS <= 0;
			  AS <= 1; // �i�[��̓A�L�������[�^
		 end

		 // ���l�̘_�����]
		 if (INST[7:4] == 4'b1001)
		 begin
			  DATA1 <= INST[3:0]; // ����4�r�b�g�����l
			  DATA2 <= 4'bzzzz;
			  IW_ADDR <= 4'bzzzz;
			  IS <= 0;
			  AS <= 1; // �i�[��̓A�L�������[�^
		 end
	end
endmodule
