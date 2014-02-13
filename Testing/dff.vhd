-- Author: Praveen Kumar Pendyala
-- Created: 12/02/2014
-- Function: 1-bit dff

library ieee;
use ieee.std_logic_1164.ALL;

----------------------------------------------------------------------------------      DFF
entity dff is 
	port(
		d: in bit;
		clk: in bit;
		en: in bit;
		q: out bit
	);
end dff;

architecture dff_arc of dff is
	begin
	process(clk)
		begin
			if clk'event and clk='1' and en='1' then
				q <= d;
			end if;
	end process;
end dff_arc;