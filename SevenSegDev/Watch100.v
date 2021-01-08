`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:28:18 01/07/2021 
// Design Name: 
// Module Name:    Watch100 
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
module Watch100(CLK, RESET, DOUT, D1, D2, D3, D4);
	input CLK, RESET;
	output [7:0]DOUT;
	output D1, D2, D3, D4;

	wire CE_TMP, S_TMP;
	wire [3:0]CNT;
	wire [3:0]CNT1_TMP;
	wire [3:0]CNT2_TMP;
	wire [3:0]CNT3_TMP;
	wire [3:0]CNT4_TMP;
	
	DividerForCounter DFC(.CLK(CLK), .CEOUT(CE_TMP));
	DividerForDynamicLighting DFDL(.CLK(CLK), .CEOUT(S_CLK));
	Counter100 C100(.CE(CE_TMP), .RESET(RESET), .CNT1(CNT1_TMP), .CNT2(CNT2_TMP), .CNT3(CNT3_TMP), .CNT4(CNT4_TMP));
	Selector SEL(.S_CLK(S_CLK), .CNT1_TMP(CNT1_TMP), .CNT2_TMP(CNT2_TMP), .CNT3_TMP(CNT3_TMP), .CNT4_TMP(CNT4_TMP), .CNT(CNT));
	Decoder8 DEC(.DIN(CNT), .DOUT(DOUT));
	Switcher SW(.CLK(S_CLK), .D1(D1), .D2(D2), .D3(D3), .D4(D4));
	
endmodule
