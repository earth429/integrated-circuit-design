`timescale 1ns / 1ps

module t_Main;

	// Inputs
	reg CLK;
	reg SW_START;
	reg [7:0] SW_INST;
	reg [1:0] SW_SEL;

	// Outputs
	wire [1:0] SEG_DIGIT;
	wire [7:0] SEG_PATTERN;
	wire [1:0] LED;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.CLK(CLK), 
		.SW_START(SW_START), 
		.SW_INST(SW_INST), 
		.SW_SEL(SW_SEL), 
		.SEG_DIGIT(SEG_DIGIT), 
		.SEG_PATTERN(SEG_PATTERN), 
		.LED(LED)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		SW_START = 0;
		SW_INST = 0;
		SW_SEL = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		SW_INST = 8'b0001_0001; // アキュムレータへの即値格納 (1をそのまま代入，上位の0001は代入するって命令)
		SW_START = 1'b1;		
		#10000000
		SW_SEL = 2'b11; // SW18とSW22をON   (ステータスレジスタとアキュムレータを表示，ステータスは0，アキュムレータは1)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0101_0011; // アキュムレータと即値の加算 (1 + 3)
		#10000000
		SW_SEL = 2'b11; // SW18とSW22をON   (ステータスレジスタとアキュムレータを表示，ステータスは0，アキュムレータは4)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0111_0011; // アキュムレータと即値の減算 (4 - 1)
		#10000000
		SW_SEL = 2'b11; // SW18とSW22をON   (ステータスレジスタとアキュムレータを表示，ステータスは0，アキュムレータは1)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1000_xxxx; // アキュムレータの論理反転 (0001 -> 1110)
		#10000000
		SW_SEL = 2'b11; // SW18とSW22をON   (ステータスレジスタとアキュムレータを表示)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1001_1001; // 即値の論理反転 (0110になればよい)
		SW_SEL = 2'b11; // SW18とSW22をON   (ステータスレジスタとアキュムレータを表示)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)	
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1011_0011; // アキュムレータと即値の論理和 (1110 OR 0011 -> 1111)
		SW_SEL = 2'b11; // SW18とSW22をON   (ステータスレジスタとアキュムレータを表示)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)	
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1101_1001; // アキュムレータと即値の論理積 (1111 AND 1001 -> 1001)
		SW_SEL = 2'b11; // SW18とSW22をON   (ステータスレジスタとアキュムレータを表示)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)	
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1101_1000; // アキュムレータと即値の排他的論理和 (1001 XOR 1001 -> 0001)
		SW_SEL = 2'b11; // SW18とSW22をON   (ステータスレジスタとアキュムレータを表示)
		
		
		// インデックスレジスタについての計算
		
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0011_0000; // インデックスレジスタへアキュムレータから格納
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(インデックスレジスタを見たい)
		#10000000
		SW_SEL = 2'b11; // SW18とSW22をON (アキュムレータを見たい)
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0100_0000; // インデックスレジスタとアキュムレータの加算
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(インデックスレジスタを見たい)
		#10000000
		SW_SEL = 2'b11; // SW18とSW22をON (アキュムレータを見たい)
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0110_0000; // インデックスレジスタとアキュムレータの減算
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(インデックスレジスタを見たい)
		#10000000
		SW_SEL = 2'b11; // SW18とSW22をON (アキュムレータを見たい)
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0011_1111; // インデックスレジスタへアキュムレータから格納
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(インデックスレジスタを見たい)
		#10000000
		SW_SEL = 2'b11; // SW18とSW22をON (アキュムレータを見たい)
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0100_0000; // インデックスレジスタからアキュムレータへ格納
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(インデックスレジスタを見たい)
		#10000000
		SW_SEL = 2'b11; // SW18とSW22をON (アキュムレータを見たい)
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1010_1111; // アキュムレータとインデックスレジスタの論理和
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(インデックスレジスタを見たい)
		#10000000
		SW_SEL = 2'b11; // SW18とSW22をON (アキュムレータを見たい)
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1100_0000; // アキュムレータとインデックスレジスタの論理積
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(インデックスレジスタを見たい)
		#10000000
		SW_SEL = 2'b11; // SW18とSW22をON (アキュムレータを見たい)
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1110_1111; // アキュムレータとインデックスレジスタの排他的論理和
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(インデックスレジスタを見たい)
		#10000000
		SW_SEL = 2'b11; // SW18とSW22をON (アキュムレータを見たい)
		#10000000
		SW_SEL = 2'b00; // SW18とSW22をOFF (インストラクションを表示)

		#10000000
		$stop;
	end
	
	always #10
		CLK = ~CLK;
      
endmodule