-- Author: Praveen Kumar Pendyala
-- Created: 13/02/2014
-- Function: 8-bit Comparator
-- Output: 1 - if A > B; 0 - if B > A

library ieee;
use ieee.std_logic_1164.ALL;

entity comparator is
	port(
		a: in bit_vector(7 downto 0);
		b: in bit_vector(7 downto 0);
		r: out bit
	);
end comparator;

architecture behavior of comparator is
	--The idea is to find A-B
	--if bit-7 == 1 => B>A
	--else A>B
	--equal will fall in one of these two and not taken care of 

	--complement finder
	component twos_complement is 
		port(
			i: in bit_vector(7 downto 0);
			o: out bit_vector(7 downto 0)
		);
	end component twos_complement;

	--8-bit adder
	component adder_8bit is
		port(
			a : in bit_vector(7 downto 0);
			b : in bit_vector(7 downto 0);
			cin: in bit;
			sum : in bit_vector(7 downto 0);
			cout : out bit
		);
	end component adder_8bit;
	
	--Internal  signals
	signal b_comp: bit_vector(7 downto 0);
	signal result: bit_vector(7 downto 0);
	signal carry: bit;

	begin
		complement: twos_complement port map(b, b_comp);
		adder: adder_8bit port map(a, b_comp, '0', result, carry);
		r <= not result(7);

end behavior;