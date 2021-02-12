`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:53:37 02/05/2021 
// Design Name: 
// Module Name:    CLKCounter 
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
module CLKCounter(CLK, SW17, SW_INST, INST, DEC_CLK, ALU_CLK, WRI_CLK, ST_INST);
	input CLK; // ���U��
	input SW17;
	input [7:0]SW_INST; // SW1~SW8
	output [7:0]INST; // ����
	output ALU_CLK; // ALU����p
	output DEC_CLK; // Decoder����p
	output WRI_CLK; // Write����p
	output ST_INST;

	reg [7:0]INST = 8'b0;
	reg ALU_CLK = 1'b0;
	reg DEC_CLK = 1'b0;
	reg WRI_CLK = 1'b0;
	reg ST_INST = 1'b0;

	reg [1:0]cnt = 2'b00;
	reg sw_status = 1'b0;
	
	always @(posedge CLK) begin
		 if (SW17 == 1'b1) // fetch
		 begin
			  if (sw_status == 1'b0) // SW17�������オ�����Ƃ���x����fetch
			  begin
					ST_INST <= 1'b1;
					INST  <= SW_INST;
					sw_status <= 1'b1;
			  end
		 end
		 else
			  sw_status <= 1'b0;

		 if (ST_INST == 1'b1)
		 begin
			  if (cnt == 2'b00) // decode
			  begin
					cnt <= cnt + 1;
					DEC_CLK <= 1; // decode�J�n
			  end
			  else if (cnt == 2'b01) // execute
			  begin
					cnt <= cnt + 1;
					DEC_CLK <= 0;
					ALU_CLK <= 1; // ALU�X�^�[�g
			  end
			  else if (cnt == 2'b10) // write
			  begin
					cnt <= cnt + 1;
					ALU_CLK <= 0;
					WRI_CLK <= 1; // write�J�n
			  end
			  else if (cnt == 2'b11) // �I��
			  begin
					cnt <= 2'b00;
					ST_INST <= 0;
					WRI_CLK <= 0;
			  end
		 end
	 end
endmodule
