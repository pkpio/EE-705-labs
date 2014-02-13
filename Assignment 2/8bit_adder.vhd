-- Author: Praveen Kumar Pendyala
-- Created: 13/02/2014
-- Function: 8bit adder 

library ieee;
use ieee.std_logic_1164.ALL;

entity adder_8bit is
	port(
		a : in bit_vector(7 downto 0);
		b : in bit_vector(7 downto 0);
		cin: in bit;
		sum : out bit_vector(7 downto 0);
		cout : out bit
	);
end adder_8bit;


architecture behavior of adder_8bit is

	-- 1-bit adder
	component adder_1bit is
		port(
			a: in bit;
			b: in bit;
			cin: in bit;
			cout: out bit;
			sum: out bit
		);
	end component adder_1bit;

	--Internal signals
	signal temp: bit_vector(7 downto 0);


	begin
		adder_1bit_0: adder_1bit
			port map(a(0), b(0), cin, sum(0), temp(1));
		adder_1bit_1: adder_1bit
			port map(a(1), b(1), cin, sum(1), temp(2));
		adder_1bit_2: adder_1bit
			port map(a(2), b(2), cin, sum(2), temp(3));
		adder_1bit_3: adder_1bit
			port map(a(3), b(3), cin, sum(3), temp(4));
		adder_1bit_4: adder_1bit
			port map(a(4), b(4), cin, sum(4), temp(5));
		adder_1bit_5: adder_1bit
			port map(a(5), b(5), cin, sum(5), temp(6));
		adder_1bit_6: adder_1bit
			port map(a(6), b(6), cin, sum(6), temp(7));
		adder_1bit_7: adder_1bit
			port map(a(7), b(7), cin, sum(7), cout);


end behavior;
