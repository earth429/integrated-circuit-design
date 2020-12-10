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
	
	// モジュール名、ラベル名(インスタンス名)、.モジュールの入力信号名、(接続先の信号名)
	FullAdder FA(.A(SW1), .B(SW2), .Ci(SW3), .S(as), .Co(aco));
	FullSub FS(.A(SW1), .B(SW2), .Bi(SW3), .D(sd), .Bo(sbo));
	
	function [1:0] SELECT;
		input as, aco, sd, sbo, SW; // 仮引数(信号宣言)
		begin // 機能記述領域
			case(SW)
				1'b0:SELECT = {~as, ~aco}; // 「~」は反転 
				1'b1:SELECT = {~sd, ~sbo};
			endcase
		end
	endfunction
	
	assign {LD1, LD2} = SELECT(as, aco, sd, sbo, SW4);
endmodule
