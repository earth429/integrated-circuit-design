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
		SW_INST = 8'b0001_0001; // �A�L�������[�^�ւ̑��l�i�[ (1�����̂܂ܑ���C��ʂ�0001�͑��������Ė���)
		SW_START = 1'b1;		
		#10000000
		SW_SEL = 2'b11; // SW18��SW22��ON   (�X�e�[�^�X���W�X�^�ƃA�L�������[�^��\���C�X�e�[�^�X��0�C�A�L�������[�^��1)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0101_0011; // �A�L�������[�^�Ƒ��l�̉��Z (1 + 3)
		#10000000
		SW_SEL = 2'b11; // SW18��SW22��ON   (�X�e�[�^�X���W�X�^�ƃA�L�������[�^��\���C�X�e�[�^�X��0�C�A�L�������[�^��4)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0111_0011; // �A�L�������[�^�Ƒ��l�̌��Z (4 - 1)
		#10000000
		SW_SEL = 2'b11; // SW18��SW22��ON   (�X�e�[�^�X���W�X�^�ƃA�L�������[�^��\���C�X�e�[�^�X��0�C�A�L�������[�^��1)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1000_xxxx; // �A�L�������[�^�̘_�����] (0001 -> 1110)
		#10000000
		SW_SEL = 2'b11; // SW18��SW22��ON   (�X�e�[�^�X���W�X�^�ƃA�L�������[�^��\��)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1001_1001; // ���l�̘_�����] (0110�ɂȂ�΂悢)
		SW_SEL = 2'b11; // SW18��SW22��ON   (�X�e�[�^�X���W�X�^�ƃA�L�������[�^��\��)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)	
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1011_0011; // �A�L�������[�^�Ƒ��l�̘_���a (1110 OR 0011 -> 1111)
		SW_SEL = 2'b11; // SW18��SW22��ON   (�X�e�[�^�X���W�X�^�ƃA�L�������[�^��\��)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)	
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1101_1001; // �A�L�������[�^�Ƒ��l�̘_���� (1111 AND 1001 -> 1001)
		SW_SEL = 2'b11; // SW18��SW22��ON   (�X�e�[�^�X���W�X�^�ƃA�L�������[�^��\��)
		
		
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)	
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1101_1000; // �A�L�������[�^�Ƒ��l�̔r���I�_���a (1001 XOR 1001 -> 0001)
		SW_SEL = 2'b11; // SW18��SW22��ON   (�X�e�[�^�X���W�X�^�ƃA�L�������[�^��\��)
		
		
		// �C���f�b�N�X���W�X�^�ɂ��Ă̌v�Z
		
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0011_0000; // �C���f�b�N�X���W�X�^�փA�L�������[�^����i�[
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(�C���f�b�N�X���W�X�^��������)
		#10000000
		SW_SEL = 2'b11; // SW18��SW22��ON (�A�L�������[�^��������)
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0100_0000; // �C���f�b�N�X���W�X�^�ƃA�L�������[�^�̉��Z
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(�C���f�b�N�X���W�X�^��������)
		#10000000
		SW_SEL = 2'b11; // SW18��SW22��ON (�A�L�������[�^��������)
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0110_0000; // �C���f�b�N�X���W�X�^�ƃA�L�������[�^�̌��Z
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(�C���f�b�N�X���W�X�^��������)
		#10000000
		SW_SEL = 2'b11; // SW18��SW22��ON (�A�L�������[�^��������)
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0011_1111; // �C���f�b�N�X���W�X�^�փA�L�������[�^����i�[
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(�C���f�b�N�X���W�X�^��������)
		#10000000
		SW_SEL = 2'b11; // SW18��SW22��ON (�A�L�������[�^��������)
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b0100_0000; // �C���f�b�N�X���W�X�^����A�L�������[�^�֊i�[
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(�C���f�b�N�X���W�X�^��������)
		#10000000
		SW_SEL = 2'b11; // SW18��SW22��ON (�A�L�������[�^��������)
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1010_1111; // �A�L�������[�^�ƃC���f�b�N�X���W�X�^�̘_���a
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(�C���f�b�N�X���W�X�^��������)
		#10000000
		SW_SEL = 2'b11; // SW18��SW22��ON (�A�L�������[�^��������)
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1100_0000; // �A�L�������[�^�ƃC���f�b�N�X���W�X�^�̘_����
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(�C���f�b�N�X���W�X�^��������)
		#10000000
		SW_SEL = 2'b11; // SW18��SW22��ON (�A�L�������[�^��������)
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)
		
		#10000000
		SW_START = 1'b0;
		#10000000
		SW_START = 1'b1;
		SW_INST = 8'b1110_1111; // �A�L�������[�^�ƃC���f�b�N�X���W�X�^�̔r���I�_���a
		#10000000
		SW_SEL = 2'b01; // SW18ON, SW22OFF(�C���f�b�N�X���W�X�^��������)
		#10000000
		SW_SEL = 2'b11; // SW18��SW22��ON (�A�L�������[�^��������)
		#10000000
		SW_SEL = 2'b00; // SW18��SW22��OFF (�C���X�g���N�V������\��)

		#10000000
		$stop;
	end
	
	always #10
		CLK = ~CLK;
      
endmodule