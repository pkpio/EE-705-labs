-- Author: Praveen Kumar Pendyala
-- Created: 02/03/2014
-- Function: lift system module

library ieee;
use ieee.std_logic_1164.ALL;


entity lift is
	port(
				reset: in bit;
				clk: in bit;

				next_dir: in integer;

				cur_floor: out integer;
				cur_dir: out integer;
	);

	TYPE state IS (RESET, MOTION_HALT, MOTION_UP, MOTION_DOWN);
	TYPE direction IS (UP, DOWN, HALT);
end lift;


architecture behaviour of controller is
	signal cur_state, next_state: state;
	signal lift_floor: integer;

	begin	
	

	process (clk, reset)
	begin
 		if (reset='1') then
  		cur_state <= MOTION_RESET;  	--default state on reset.
		else if (rising_edge(clk)) then
  		cur_state <= next_state;			--state change.
	end if;


	process(reset)
	begin

		case cur_state is


			when RESET =>
				lift_floor <= 0;
				cur_floor <= 0;
				cur_dir <= 0;

				-- Goto Halt state to continue
				next_state <= MOTION_HALT;



			when MOTION_HALT =>
				cur_floor <= lift_floor;
				cur_dir <= '0';

				-- Decide next state
				if(next_dir = 0) then
					next_state <= MOTION_HALT;
				else if(next_dir = 1) then
					next_state <= MOTION_UP;
				else if(next_dir = -1) then
					next_state <= MOTION_DOWN;
				else
					next_state <= RESET;
				end if



			when MOTION_UP =>
				cur_floor <= lift_floor;
				cur_dir_up <= '1';
				cur_dir_down <= '0';
				cur_dir_halt <= '0';
				lift_floor <= lift_floor + 1;

				-- Decide next state
				if(next_dir = 0) then
					next_state <= MOTION_HALT;
				else if(next_dir = 1) then
					next_state <= MOTION_UP;
				else if(next_dir = -1) then
					next_state <= MOTION_DOWN;
				else
					next_state <= RESET;
				end if



			when MOTION_DOWN =>
				cur_floor <= lift_floor;
				cur_dir_up <= '0';
				cur_dir_down <= '1';
				cur_dir_halt <= '0';
				lift_floor <= lift_floor - 1;

				-- Decide next state
				if(next_dir = 0) then
					next_state <= MOTION_HALT;
				else if(next_dir = 1) then
					next_state <= MOTION_UP;
				else if(next_dir = -1) then
					next_state <= MOTION_DOWN;
				else
					next_state <= RESET;
				end if



			end case;
				
	end process;
		

end behaviour;

