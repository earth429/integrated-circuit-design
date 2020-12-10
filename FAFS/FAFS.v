`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:05:40 12/09/2020 
// Design Name: 
// Module Name:    FAFS 
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
module FAFS(SW1, SW2, SW3, SW4, LD1, LD2);
	input SW1, SW2, SW3, SW4;
	output LD1, LD2;
	
	wire as, aco;
	wire sd, sbo;
	
	// ���W���[�����A���x����(�C���X�^���X��)�A.���W���[���̓��͐M�����A(�ڑ���̐M����)
	FullAdder FA(.A(SW1), .B(SW2), .Ci(SW3), .S(as), .Co(aco));
	FullSub FS(.A(SW1), .B(SW2), .Bi(SW3), .D(sd), .Bo(sbo));
	
	function [1:0] SELECT;
		input as, aco, sd, sbo, SW; // ������(�M���錾)
		begin // �@�\�L�q�̈�
			case(SW)
				1'b0:SELECT = {~as, ~aco}; // �u~�v�͔��] 
				1'b1:SELECT = {~sd, ~sbo};
			endcase
		end
	endfunction
	
	assign {LD1, LD2} = SELECT(as, aco, sd, sbo, SW4);
endmodule
