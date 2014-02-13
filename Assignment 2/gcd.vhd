-- Author: Praveen Kumar Pendyala
-- Created: 13/02/2014
-- Function: GCD finder
-- Approach: GCD(A, B) = GCD(A-B, B).
--           Iterate this until one of the operands is 0.
--           Then the non-zero operand is the GCD

library ieee;
use ieee.std_logic_1164.ALL;

entity gcd is
	port(
		a: in bit_vector(7 downto 0);
		b: in bit_vector(7 downto 0);
		gcd_val: out bit_vector(7 downto 0)
	);
end gcd;

architecture behavior of gcd is

	
	-- 2's complement module
	component twos_complement is
		port(
			i: in bit_vector(7 downto 0);
			o: out bit_vector(7 downto 0)
		);
	end component twos_complement;


	-- 8-bit adder
	component adder_8bit is
		port(
			a : in bit_vector(7 downto 0);
			b : in bit_vector(7 downto 0);
			cin: in bit;
			sum : in bit_vector(7 downto 0);
			cout : out bit
		);
	end component adder_8bit;


	-- 8-bit comparator
	component comparator is
		port(
			a: in bit_vector(7 downto 0);
			b: in bit_vector(7 downto 0);
			r: out bit
		);
	end component comparator;

	------------------------------------------
	--Internal signals
	------------------------------------------
	--Input operand 2s complements
	signal comp_a: bit_vector(7 downto 0);
	signal comp_b: bit_vector(7 downto 0);

	--Signals that will hold operands as we iterate GCD computation
	signal opA: bit_vector(7 downto 0);
	signal opB: bit_vector(7 downto 0);

	--2s complements for signal operands
	signal comp_opA: bit_vector(7 downto 0);
	signal comp_opB: bit_vector(7 downto 0);

	--To ensure signals are loaded from port only on forst iteration
	signal is_loaded_already: bit := '0';

	--Sign status of input operands
	signal is_pos_a: bit;
	signal is_pos_b: bit;

	--To find which of the two operands is greater. 1 => A>B
	signal is_opA_greater: bit;

	--New GCD operands
	signal a_min_b: bit_vector(7 downto 0);
	signal b_min_a: bit_vector(7 downto 0);

	--Dummy carry holders
	signal c1: bit;
	signal c2: bit;

	--To cache output once computed
	signal gcd_value: bit_vector(7 downto 0);

	--For state about if ouput is computed
	signal output_done:bit := '0';


	begin
		
	--Compute 2s complements of both inputs
	inputs_complementer_a: twos_complement
		port map(a, comp_a);
	inputs_complementer_b: twos_complement
		port map(b, comp_b);

	--Check which input operands are positive
	inputs_comparator_a: comparator
		port map(a, "00000000", is_pos_a);
	inputs_comparator_b: comparator
		port map(b, "00000000", is_pos_b);		

	--Compute signal operand 2s complements
	signal_complementer_opA: twos_complement
		port map(opA, comp_opA);
	signal_complementer_opB: twos_complement
		port map(opB, comp_opB);

	--Compute both A-B and B-A for signal operands
	opA_min_opB: adder_8bit
		port map(opA, comp_opB, '0', a_min_b, c1);
	opB_min_opA: adder_8bit
		port map(opB, comp_opA, '0', b_min_a, c2);

	--Check which of the two signal operands is great
	signal_ops_comparator: comparator
		port map(a_min_b, "00000000", is_opA_greater);

	process
		begin

		--Load signal operands with inputs or their complements if negative
		if(is_loaded_already = '0') then
			if(is_pos_a = '1') then
				opA <= a;
			else
				opA <= comp_a;
			end if;

			if(is_pos_b = '1') then
				opB <= b;
			else
				opB <= comp_b;
			end if;

			is_loaded_already <= '1';
			output_done <= '0';

		end if;

		--Find the new operands based of comparision between A and B
		if(is_opA_greater = '1') then
			opA <= a_min_b;
			opB <= opB;
		else 
			opA <= opA;
			opB <= b_min_a;
		end if;

		--Load to gcd_value if one of the operands is 0
		if(opA = "00000000") then
			gcd_val <= opB;
			output_done <= '1';
		end if;

		if(opB = "00000000") then
			gcd_val <= opA;
			output_done <= '1';
		end if;

		wait;
	end process;

end behavior;