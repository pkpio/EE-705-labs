-- Author: Praveen Kumar Pendyala
-- Created: 12/02/2014
-- Function: Testbench for GCD finder 

library ieee;
use ieee.std_logic_1164.ALL;

entity test_bench is
end test_bench;

architecture behavior of test_bench is

	component gcd
		port(	
		  	a: in bit_vector(7 downto 0);
			b: in bit_vector(7 downto 0);
			gcd_val: out bit_vector(7 downto 0)
		);
	end component gcd;

	signal a: bit_vector(7 downto 0):="10101010";
	signal b: bit_vector(7 downto 0):="00001111";
	signal gcd_val: bit_vector(7 downto 0);
	signal en, clk: bit;

	begin
	  gcd1: gcd
		port map (a, b, gcd_val);
		

	process
		-- Generating clock
		variable CLK_PERIOD: time:= 20 ns;
		variable MAX_SIM_TIME: time:= 100 ns;
		variable CUR_TIME: time:= 0 ns;

	  	begin
	  		-- Issue enable after a few manula clock cycles
	  		en <= '0';
	  		clk <= '0';
	  		wait for CLK_PERIOD/2;
	  		clk <= not clk;
	  		wait for CLK_PERIOD/2;
	  		en <= '1';

	  		-- Continue clock generation is a loop
		  	while CUR_TIME < MAX_SIM_TIME loop
		  		clk <= not clk;
		  		CUR_TIME := CUR_TIME + CLK_PERIOD/2;
		  		wait for CLK_PERIOD/2;
		  	end loop ;

		  	wait;
	end process;

end behavior;