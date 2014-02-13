-- Author: Praveen Kumar Pendyala
-- Created: 13/02/2014
-- Function: 1bit adder

library ieee;
use ieee.std_logic_1164.ALL;

entity adder_1bit is
	port(
		a: in bit;
		b: in bit;
		cin: in bit;
		cout: out bit;
		sum: out bit
	);
end adder_1bit;

architecture behavior of adder_1bit is
	begin
		sum <= a xor b xor cin;
		cout <= (a and b) or (b and cin) or (cin and a);
end behavior;
