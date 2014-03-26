-- Author: Praveen Kumar Pendyala
-- Created: 02/03/2014
-- Function: lift system controller module

library ieee;
use ieee.std_logic_1164.ALL;


entity controller is
	port(
				reset: in bit;
				lift_cur_floor: in integer;
				lift_cur_dir: out integer;

				floor_req_floor: in bit_vector(3 downto 0);
				floor_req_dir: in bit_vector(3 downto 0);

				lift_next_dir: out integer;
	);

	TYPE state IS (RESET, NO_REQUESTS, PROCESS_REQUEST);
	TYPE direction IS (UP, DOWN, HALT);
end controller;


architecture behaviour of controller is
	signal cur_state, next_state: state;
	Signal pending_reqs: integer;

	begin
		

	process (clk, reset)
	begin
 	if (reset='1') then
  	cur_state <= RESET;  			--default state on reset.
	elsif (rising_edge(clk)) then
  	cur_state <= next_state;	--state change.
	end if;


	process(reset)
		begin

		case cur_state is
			when RESET =>
				-- Initialize variables if required



			when NO_REQUESTS =>
				-- No requests. Keep checking for requests



			when PROCESS_REQUEST =>
				-- Process a request.
				if(lift_cur_dir)


		end case;

	end process;
		

end behaviour;

