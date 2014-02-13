-- Author: Praveen Kumar Pendyala
-- Created: 12/02/2014
-- Function: Testbench for dff testing 

library ieee;
use ieee.std_logic_1164.ALL;

entity test_bench is
end test_bench;

architecture test_bench_arc of test_bench is

	component dff
		port(	
		  	d: in bit;
			clk: in bit;
			en: in bit;
			q: out bit
		);
	end component;

	signal d: bit:='1';
	signal q: bit;
	signal en, clk: bit;

	begin
	  dff1: dff
		port map (d, clk, en, q);
		

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

end test_bench_arc;