-- Author: Praveen Kumar Pendyala
-- Created: 13/02/2014
-- Function: 8-bit 2s complement finder 

library ieee;
use ieee.std_logic_1164.ALL;

entity twos_complement is
	port(
		i: in bit_vector(7 downto 0);
		o: out bit_vector(7 downto 0)
	);
end twos_complement;

architecture behaviour of twos_complement is

	-- an 8-bit adder
	component adder_8bit is 
		port(
			a : in bit_vector(7 downto 0);
			b : in bit_vector(7 downto 0);
			cin: in bit;
			sum : out bit_vector(7 downto 0);
			cout : out bit
		);

	end component adder_8bit;

	--internal signals
	signal carry: bit;
	signal not_i: bit_vector(7 downto 0);
	signal temp_o: bit_vector(7 downto 0);

	--2's complement(number) = not(numvber) + 1;
	begin
		not_i <= not i;
		adder: adder_8bit port map (not_i, "00000001", '0', temp_o, carry);
		o <= temp_o;
end behaviour;
