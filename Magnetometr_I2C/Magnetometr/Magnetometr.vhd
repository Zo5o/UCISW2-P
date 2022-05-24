----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:55:27 03/24/2022 
-- Design Name: 
-- Module Name:    Magnetometr - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Magnetometr is
	Port(
	ID_A : out STD_LOGIC_VECTOR ( 7 downto 0 );
	DO_X : out  STD_LOGIC_VECTOR (15 downto 0);
	DO_Y : out  STD_LOGIC_VECTOR (15 downto 0);
	DO_Z : out  STD_LOGIC_VECTOR (15 downto 0);
	
	I2C_Go : out STD_LOGIC;
	I2C_Address : out STD_LOGIC_VECTOR ( 7 downto 0 ); -- adres urzadzenia do komunikacji z i2c
	I2C_ReadCnt : out STD_LOGIC_VECTOR (3 downto 0);
	I2C_FIFO_Pop : out STD_LOGIC;
	I2C_FIFO_Push : out STD_LOGIC;
	I2C_FIFO_DI : out STD_LOGIC_VECTOR (7 downto 0);
	
	CLK_50Mhz : in STD_LOGIC := '0';
	Reset : in STD_LOGIC := '0';
	I2C_FIFO_Empty : in  STD_LOGIC;
   I2C_FIFO_Full : in  STD_LOGIC;
	I2C_Busy : in  STD_LOGIC;
	I2C_FIFO_DO : in  STD_LOGIC_VECTOR (7 downto 0)
	);
end Magnetometr;

architecture Behavioral of Magnetometr is

type states is (qInit, qWriteAddress, qInputID, qGoID, qGetID, qReadID, qBusyID, qClearID, qCheckID,
					 qConfigMode, qConfigRate, qSetConfig, qBusyConfig, qGoRegMode, qConfigRegMode, qSetRegMode, qBusyRegMode,
					 qGetMeasure, qReadMeasure, qBusyMeasure,
					 qClearMeasure, qCheckMeasure, qLoadMeasure, qLoadBusy, qModeBusy, qBusy1ID, qBusy2ID, qWaitID);

signal state, next_state : states;

signal measure : STD_LOGIC_VECTOR (47 downto 0);
   
signal counter : integer range 0 to 5 := 0;

signal ID : STD_LOGIC_VECTOR ( 7 downto 0 );
signal DRX : STD_LOGIC_VECTOR (15 downto 0);
signal DRY : STD_LOGIC_VECTOR (15 downto 0);
signal DRZ : STD_LOGIC_VECTOR (15 downto 0);

begin
	clk_process : process(CLK_50Mhz)
		begin
			if rising_edge(CLK_50Mhz) then 
				if  Reset = '1' then
					state <= qInit;
				else
					state <= next_state;
				end if;
			end if;
		end process clk_process;
	
	main : process(CLK_50Mhz, I2C_FIFO_Empty, I2C_Busy)
		begin
			case state is
			
				-- ID_A checking:
			
				when qInit =>
					next_state <= qWriteAddress;
				when qWriteAddress =>
					next_state <= qInputID;
				when qInputID =>
					next_state <= qWaitID;
				when qWaitID =>
					next_state <= qGoID;
				when qGoID =>
					next_state <= qBusyID;
				when qBusyID =>
					if I2C_Busy = '0' then
						next_state <= qGetID;
					end if;
				when qGetID =>
					next_state <= qBusy1ID;
				when qBusy1ID =>
					if I2C_Busy = '0' then
						next_state <= qReadID;
					end if;
				when qReadID =>
					next_state <= qClearID;
				when qClearID =>
					next_state <= qCheckID;
				when qCheckID =>
					if I2C_FIFO_Empty = '0' then 
						next_state <= qClearID;
					else
						next_state <= qConfigMode;
					end if;
					
				-- setting measure modes
				
				when qConfigMode =>
					next_state <= qModeBusy;
				when qModeBusy =>
					if I2C_Busy = '0' then
						next_state <= qConfigRate;
					end if;
				when qConfigRate =>
					next_state <= qBusyConfig;
				when qBusyConfig =>
					if I2C_Busy = '0' then
						next_state <= qGoRegMode;
					end if;
				when qGoRegMode =>
					next_state <= qConfigRegMode;
				when qConfigRegMode =>
					next_state <= qSetRegMode;
				when qSetRegMode =>
					next_state <= qBusyRegMode;
				when qBusyRegMode =>
					if I2C_Busy = '0' then
						next_state <= qGetMeasure;
					end if;
				
				-- measuring
				
				when qGetMeasure =>
					next_state <= qBusyMeasure;
				when qBusyMeasure =>
					if I2C_Busy = '0' then
						next_state <= qReadMeasure;
					end if;
					
				-- reading measures
				
				when qReadMeasure =>
					next_state <= qClearMeasure;
				when qClearMeasure =>
					next_state <= qCheckMeasure;
				when qCheckMeasure =>
					if I2C_FIFO_Empty = '0' then 
						next_state <= qReadMeasure;
					else
						next_state <= qLoadMeasure;
					end if;
				when qLoadMeasure =>
					next_state <= qLoadBusy;
				
				when qLoadBusy =>
					if I2C_Busy = '0' then
						next_state <= qGetMeasure;
					end if;
					
				when others =>
					next_state <= qInit;
				
			end case;
		end process main;
		
	--read id process
	id_read_process : process(CLK_50Mhz)
		begin
			if rising_edge(CLK_50Mhz) then
				if state = qReadID then
					ID_A <= I2C_FIFO_DO;
				end if;
			end if;
		end process id_read_process;
		
	--byte counter process
	byte_counter : process(CLK_50Mhz)
	begin
		if rising_edge(CLK_50Mhz) then
			if Reset = '1' then
				counter <= 0;
			end if;
			if state = qClearMeasure then
				if counter = 5 then
					counter <= 0;
				else
					counter <= counter + 1;
				end if;
			end if;
		end if;
	end process byte_counter;
	
	--measurement storage process
	store_measure : process(CLK_50Mhz, state, next_state)
	begin
	   if rising_edge(CLK_50Mhz) then
			if state = qReadMeasure then
            case counter is
               when 0 =>
                  measure(47 downto 40) <= I2C_FIFO_DO;
               when 1 =>
                  measure(39 downto 32) <= I2C_FIFO_DO;
               when 2 =>
                  measure(31 downto 24) <= I2C_FIFO_DO;
               when 3 =>
                  measure(23 downto 16) <= I2C_FIFO_DO;
               when 4 =>
                  measure(15 downto 8) <= I2C_FIFO_DO;
               when 5 =>
                  measure(7 downto 0) <= I2C_FIFO_DO;
            end case;
			end if;
		end if;
	end process store_measure;
	
	--measurement sending process
	output_sync : process(CLK_50Mhz, state, next_state)
	begin
	   if rising_edge(CLK_50Mhz) then
			if state = qLoadMeasure then
				DRX <= measure(47 downto 32);
				DRZ <= measure(31 downto 16);
				DRY <= measure(15 downto 0);
			end if;
		end if;
	end process output_sync;
	
	
-- Output registers

		I2C_Address <= X"3C" when state = qInputID or next_state = qWriteAddress or
										  state = qConfigMode or next_state = qConfigMode or
										  state = qSetConfig or next_state = qSetConfig or 
										  state = qSetRegMode or next_state = qSetRegMode else
							X"3D" when state = qGetID or next_state = qGetID or
										  state = qGetMeasure or next_state = qGetMeasure;
		
		I2C_FIFO_DI <= X"0A" when state = qWriteAddress or next_state = qInputID else
							X"00" when next_state = qConfigMode or state = qConfigMode else
							"00010000" when next_state = qConfigRate or state = qConfigRate else
							X"02" when next_state = qGoRegMode or state = qGoRegMode else
							X"00" when next_state = qConfigRegMode or state = qConfigRegMode;
		
		I2C_FIFO_Push <= '1' when state = qWriteAddress or state = qConfigMode or state = qConfigRate 
									or state = qGoRegMode or state = qConfigRegMode else '0';
		
		I2C_Go <= '1' when state = qInputID or state = qGoID or state = qGetID or state = qConfigMode or state = qConfigRate or state = qSetConfig
									or state = qSetRegMode or state = qGetMeasure else '0';

		I2C_ReadCnt <= "0001" when state = qGetID or next_state = qGetID or
											state = qGetMeasure or next_state = qGetMeasure;
		
		I2C_FIFO_Pop <=	'1' when state = qClearID or state = qClearMeasure else
								'0';
		
		DO_X <= DRX;
		DO_Y <= DRY;
		DO_Z <= DRZ;
		
end Behavioral;

-- co jest czym:
-- main - glowny proces naszego programu, czyli maszyna stanow
-- id_read_process - proces odpowiedzialny za wrzucenie ID_A do outputu

-- co powinno sie dziac, jesli wszystko jest git:
-- (patrz main)
-- rozpoczynamy czytanie ID, wysylajac nastepne komendy:
-- ustawiamy '3C' na I2C, zeby ustawic magnetometr na tryb "write"
-- wysylamy '0A', zeby ustawic addres pointer na register 10 (tam bedzie nasze ID)
-- wysylamy '1' zeby wywolac FIFO_Push i '1' zeby wywolac GO w I2C
-- ustawiamy '3D	' na I2C, zeby ustawic magnetometr na tryb "read"
-- wywoljemy qReadID i w tym momencie nasz magnetometr powinien wyslac do I2C nasz ID_A, a ten wrzucic go do I2C_FIFO_DO

-- (patrz id_read_process)
-- gdy jestesmy w stanie qReadID, powinno wrzucic to co znajduje sie w I2C_FIFO_DO do ID_A
-- powinno to dzialac
-- w nastepnym kroku trzeba bedzie zdjac z FIFO ten adres i pewnie zaczac grzebac w trybach mierzenia