-- Testbench for booth multiplier--
-- Sharath Reddy B - 10d070059
-- Lab Assignment 1

library ieee;
use ieee.std_logic_1164.ALL;

entity booth_multiplier is
end booth_multiplier;

architecture booth_arch of booth_multiplier is
           
component booth_gate
port(	
  m_in: in bit_vector(7 downto 0);
	r_in: in bit_vector(7 downto 0);
	en: in bit;
	clk: in bit;
	data_out: out bit_vector(15 downto 0)
);
end component;

signal m_in: bit_vector(7 downto 0):="00001000";----------------------->Input values can be changed here
signal r_in: bit_vector(7 downto 0):="00000100";
signal en, clk: bit;
signal data_out: bit_vector(15 downto 0);

begin
  booth_1: booth_gate
	port map (m_in, r_in, en, clk, data_out);
	

process
  begin
	  clk <= '0';
	  en <= '0';
	  wait for 20 ns;

    clk <= not clk;
	  wait for 20 ns;
	  en <= '1';
	  clk <= not clk;
	  wait for 20 ns;
	  clk <= not clk;
	  wait for 20 ns;  
    clk <= not clk;
	  wait for 20 ns;
	  clk <= not clk;
	  wait for 20 ns;
	  clk <= not clk;
	  wait for 20 ns;  
    clk <= not clk;
	  wait for 20 ns;
	  clk <= not clk;
	  wait for 20 ns;
    clk <= not clk;
	  wait for 20 ns;
	  clk <= not clk;
	  wait for 20 ns;
	  clk <= not clk;
	  wait for 20 ns;  
    clk <= not clk;
	  wait for 20 ns;
	  clk <= not clk;
	  wait for 20 ns;
	  clk <= not clk;
	  wait for 20 ns;  
    clk <= not clk;
	  wait for 20 ns;
	  clk <= not clk;
	  wait for 20 ns;
    clk <= not clk;
	  wait for 20 ns;
	  clk <= not clk;
	  wait for 20 ns;  
    clk <= not clk;
	  wait for 20 ns;
	  clk <= not clk;
	  wait for 20 ns;
    clk <= not clk;
	  wait for 20 ns;
	  clk <= not clk;
	  wait for 20 ns;  
    clk <= not clk;
	  wait for 20 ns;
	  clk <= not clk;
	  wait for 20 ns;  

	  wait;

end process;


end booth_arch;

