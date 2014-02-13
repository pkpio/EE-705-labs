-- Structural VHDL code for Booth Multiplier
-- Sharath Reddy B - 10d070059
-- Lab Assignment 1

library ieee;
use ieee.std_logic_1164.ALL;

----------------------------------------------------------------------------------      DFF
entity dff is 
	port( 	d_in: in bit_vector(16 downto 0);
		clock: in bit;
	q: out bit_vector(16 downto 0)
);
end dff;

architecture dff_arch of dff is
	begin
	process(clock)
		begin
			if clock'event and clock='1' then
			q<=d_in;
			end if;
	end process;
end dff_arch;
-----------------------------------------------------------------------------------    1 BIT ADDER
entity add_1_bit is 
	port ( x,y,cin: in bit; 
		sum: out bit; 
		cout: out bit 
);
 end add_1_bit;
 
architecture adder_1_arch of add_1_bit is 
	begin 
		sum <= x xor y xor cin; 
		cout <= (x and y) or (x and cin) or (y and cin);
end adder_1_arch;
-----------------------------------------------------------------------------------    8 BIT ADDER
entity adder_8 is 
	port( a,b:in bit_vector(7 downto 0);
			Cin: in bit;
			sum:out bit_vector(7 downto 0);
			Cout: out bit
);
end adder_8;

architecture adder_8_arch of adder_8 is
	signal temp: bit_vector (8 downto 0);
	component add_1_bit is 
		port ( x,y,cin: in bit; 
			sum: out bit; 
			cout: out bit 
		);
 end component add_1_bit;
	begin
           AD8_0: add_1_bit 
                port map (a(0), b(0), Cin, sum(0), temp(1));
           AD8_1: add_1_bit
                port map (a(1), b(1), temp(1), sum(1), temp(2));
           AD8_2: add_1_bit
                port map (a(2), b(2), temp(2), sum(2), temp(3));
           AD8_3: add_1_bit
                port map (a(3), b(3), temp(3), sum(3), temp(4));
		   AD8_4: add_1_bit 
                port map (a(4), b(4), temp(4), sum(4), temp(5));
           AD8_5: add_1_bit
                port map (a(5), b(5), temp(5), sum(5), temp(6));
           AD8_6: add_1_bit
                port map (a(6), b(6), temp(6), sum(6), temp(7));
           AD8_7: add_1_bit
                port map (a(7), b(7), temp(7), sum(7), temp(8));		
           Cout <= temp(8);
end adder_8_arch;
-----------------------------------------------------------------------------------   COMPLEMENT 
entity complement is 
	port(  d_in:in bit_vector(7 downto 0);
		d_out:out bit_vector(7 downto 0)
	);
end complement;

architecture comp_arch of complement is 
	component adder_8 is 
		port( a,b:in bit_vector(7 downto 0);
			Cin: in bit;
			sum:out bit_vector(7 downto 0);
			Cout: out bit
		);
	end component adder_8;

	signal temp: bit; 
	signal p: bit_vector(7 downto 0);
		begin
			p<= not d_in;
			comp:adder_8 port map (p,"00000001",'0',d_out,temp);
end comp_arch;
-----------------------------------------------------------------------------------      17 BIT ADDER
entity adder_17 is 
	port(  a_in,b_in:in bit_vector(16 downto 0);
		c_in:in bit;
		output: out bit_vector(16 downto 0);
		c_out: out bit
);
end adder_17;

architecture adder_17_arch of adder_17 is
	component adder_8 is 
		port( a,b:in bit_vector(7 downto 0);
			Cin: in bit;
			sum:out bit_vector(7 downto 0);
			Cout: out bit
		);
	end component adder_8;
	
	component add_1_bit is 
		port ( x,y,cin: in bit; 
			sum: out bit; 
			cout: out bit 
		);
	end component add_1_bit;
	
	signal temp: bit_vector(2 downto 0);
	begin
		add_17_1: adder_8 port map(a_in(7 downto 0),b_in(7 downto 0),'0',output(7 downto 0),temp(1));
		add_17_2: adder_8 port map(a_in(15 downto 8),b_in(15 downto 8),temp(1),output(15 downto 8),temp(2));
		add_17_3: add_1_bit port map(a_in(16),b_in(16),temp(2),output(16),c_out);

end adder_17_arch;
-----------------------------------------------------------------------------------      MUX 4:1
entity mux4_1 is
      port(
          a,b,c : in bit_vector(16 downto 0);
          sel : in bit_vector(1 downto 0);
          dout : out bit_vector(16 downto 0)
          );
 end mux4_1;

 architecture multiplexer4_1_arc of mux4_1 is    
 begin	
	PROCESS(sel(0), sel(1),a,b,c)
		BEGIN
			IF    ((sel(0) xor sel(1))='0') THEN
				dout <= c;
			ELSIF (sel(0)='1' AND sel(1)='0') THEN
				dout <=a;
			ELSIF (sel(0)='0' AND sel(1)='1') THEN
				dout <=b ;
			END IF;

	END PROCESS ;
 end multiplexer4_1_arc;       
-----------------------------------------------------------------------------------      MUX 2:1
entity mux2_1 is
      port(
          a,b : in bit_vector(16 downto 0);
          sel : in bit;
          dout : out bit_vector(16 downto 0)
          );
 end mux2_1;

 architecture multiplexer2_1_arc of mux2_1 is    
 begin	
	PROCESS(sel,a,b)
		BEGIN
			IF (sel='0') THEN
				dout <= a;
			ELSIF (sel='1') THEN
				dout <=b;
			END IF;

	END PROCESS ;
 end multiplexer2_1_arc;       
-----------------------------------------------------------------------------------    Booth Multiplier

entity booth_gate is
	port(	m_in: in bit_vector(7 downto 0);
		r_in: in bit_vector(7 downto 0);
		en: in bit;
		clk:in bit;
		data_out: out bit_vector(15 downto 0)
);
end booth_gate; 

architecture booth_arch_rtl of booth_gate is
	component dff is
		port( d_in:in bit_vector(16 downto 0);
			clock:in bit;
			q:out bit_vector(16 downto 0)
		);
	end component dff;

	component mux4_1 is
      port(
          a,b,c : in bit_vector(16 downto 0);
          sel : in bit_vector(1 downto 0);
          dout : out bit_vector(16 downto 0)
          );
	end component mux4_1;
	
	component mux2_1 is
      port(
          a,b: in bit_vector(16 downto 0);
          sel : in bit;
          dout : out bit_vector(16 downto 0)
          );
	end component mux2_1;
	
	component adder_17 is 
		port(  a_in,b_in:in bit_vector(16 downto 0);
			c_in:in bit;
			output: out bit_vector(16 downto 0);
			c_out: out bit
		);
	end component adder_17;
	component complement is 
	  port(  d_in:in bit_vector(7 downto 0);
		  d_out:out bit_vector(7 downto 0)
	  );
  end component;
	
	
	signal A,P,S,temp_a,temp_s,temp_p,soutput,PA,PS,output,drvr,ptemp:bit_vector(16 downto 0);
	signal neg_m:bit_vector(7 downto 0);
	signal temp:bit_vector(1 downto 0);
	begin
		comp: complement port map (m_in(7 downto 0),neg_m(7 downto 0));
		temp_a(16 downto 9)<=m_in(7 downto 0);temp_a(8 downto 0)<="000000000";
		temp_s(16 downto 9)<=neg_m(7 downto 0);temp_s(8 downto 0)<="000000000";
		temp_p(16 downto 9)<="00000000";temp_p(8 downto 1)<=r_in(7 downto 0);temp_p(0)<='0';
		arbit1: dff port map (temp_a(16 downto 0),clk,A(16 downto 0));
		arbit2: dff port map (temp_s(16 downto 0),clk,S(16 downto 0));
		arbit3: dff port map (ptemp,clk,P(16 downto 0));

		arbit4: adder_17 port map(A(16 downto 0),P(16 downto 0),'0',PA(16 downto 0),temp(0));
		arbit5: adder_17 port map(S(16 downto 0),P(16 downto 0),'0',PS(16 downto 0),temp(1));
		arbit7: mux4_1 port map(PA(16 downto 0),PS(16 downto 0),P,P(1 downto 0),output(16 downto 0));
		soutput(15 downto 0) <= output(16 downto 1);
		soutput(16) <= output(16);
		arbit8: mux2_1 port map(temp_p, soutput, en, ptemp);
		data_out <= P(16 downto 1);---------------------------------------> Final Output. Output should be checked after 8th clock cycle
		---> The output shown here is the one with 1st bit unshifted. If shifted output is needed look at soutput.
end booth_arch_rtl;
