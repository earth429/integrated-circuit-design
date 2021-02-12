--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:11:56 02/10/2021
-- Design Name:   
-- Module Name:   C:/Code/Kosen/4th/Verilog/ALUDev/t_Main.vhd
-- Project Name:  ALUDev
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Main
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY t_Main IS
END t_Main;
 
ARCHITECTURE behavior OF t_Main IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Main
    PORT(
         CLK : IN  std_logic;
         SW_START : IN  std_logic;
         SW_INST : IN  std_logic_vector(7 downto 0);
         SW_SEL : IN  std_logic_vector(1 downto 0);
         SEG_DIGIT : OUT  std_logic_vector(1 downto 0);
         SEG_PATTERN : OUT  std_logic_vector(7 downto 0);
         LED : OUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal SW_START : std_logic := '0';
   signal SW_INST : std_logic_vector(7 downto 0) := (others => '0');
   signal SW_SEL : std_logic_vector(1 downto 0) := (others => '0');

 	--Outputs
   signal SEG_DIGIT : std_logic_vector(1 downto 0);
   signal SEG_PATTERN : std_logic_vector(7 downto 0);
   signal LED : std_logic_vector(1 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Main PORT MAP (
          CLK => CLK,
          SW_START => SW_START,
          SW_INST => SW_INST,
          SW_SEL => SW_SEL,
          SEG_DIGIT => SEG_DIGIT,
          SEG_PATTERN => SEG_PATTERN,
          LED => LED
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
