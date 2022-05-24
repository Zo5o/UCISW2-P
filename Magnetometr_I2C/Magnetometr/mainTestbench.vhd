LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
use ieee.std_logic_textio.all;

LIBRARY UNISIM;
USE UNISIM.Vcomponents.ALL;

LIBRARY std;
use std.textio.all;

ENTITY MagnetoSchematic_MagnetoSchematic_sch_tb IS
END MagnetoSchematic_MagnetoSchematic_sch_tb;
ARCHITECTURE behavioral OF MagnetoSchematic_MagnetoSchematic_sch_tb IS 

   COMPONENT MagnetoSchematic
   PORT( Clk	:	IN	STD_LOGIC; 
          Reset	:	IN	STD_LOGIC; 
          ID_A	:	OUT	STD_LOGIC_VECTOR (7 DOWNTO 0); 
          SDA	:	INOUT	STD_LOGIC; 
          SCL	:	INOUT	STD_LOGIC);
   END COMPONENT;

   SIGNAL Clk	:	STD_LOGIC;
   SIGNAL Reset	:	STD_LOGIC;
   SIGNAL ID_A	:	STD_LOGIC_VECTOR (7 DOWNTO 0);
   SIGNAL SDA	:	STD_LOGIC;
   SIGNAL SCL	:	STD_LOGIC;
	
	-- Clock period definitions
   constant Clk_period : time := 20 ns;

BEGIN

   UUT: MagnetoSchematic PORT MAP(
		Clk => Clk, 
		Reset => Reset, 
		ID_A => ID_A, 
		SDA => SDA, 
		SCL => SCL
   );

-- *** Test Bench - User Defined Section ***
   tb : PROCESS
   BEGIN
      Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   END PROCESS;
-- *** End Test Bench - User Defined Section ***








   --------------------------------------------------------------------
   --------------------------------------------------------------------
	-- I2C bus behaviour
   SDA <= 'H';
   SCL <= 'H';
   process
      variable bAddr  : std_logic_vector( 7 downto 0 );             -- I2C adress received as the first byte
      variable bWrite : std_logic_vector( 7 downto 0 );             -- byte received in write transfers
      variable bRead  : std_logic_vector( 7 downto 0 ) := X"00";    -- byte transmitted in read transfers
      variable Ack : std_logic;
      variable L: line;	-- simulation messages (textio)
   begin
      SDA <= 'Z';
      loop
         -- wait for start condition
         wait until falling_edge( SDA ) and SCL /= '0';
         -- Report
         write( L, "[I2C " ); write( L, now, UNIT => us ); write( L, "] START condition" );
         writeline( output, L );

         -- 8 bits of address
         for i in 0 to 8 loop
            wait until falling_edge( SCL );
            bAddr := bAddr( 6 downto 0 ) & SDA;
         end loop;
         -- Report
         write( L, "[I2C " ); write( L, now, UNIT => us ); write( L, "] address byte: " ); hwrite( L, bAddr );
         writeline( output, L );
         
         -- pull down ACK for address byte
         wait for 2.5 us / 4;
         SDA <= '0';
         wait for 2.5 us;
         SDA <= 'Z';
         
         if bAddr( 0 ) = '0' then

            -- Master is writing
            loop
               -- Be prepared for Stop condition
               wait until rising_edge( SCL ); 
               wait until rising_edge( SDA ) or falling_edge( SCL );
               if rising_edge( SDA ) then
                  write( L, "[I2C " ); write( L, now, UNIT => us ); write( L, "] STOP condition" );
                  writeline( output, L );
                  exit;
               end if;
               
               -- Another byte write, first bit (MSB)
               bWrite( 0 ) := SDA;
               
               -- another 7 bits of the write
               for i in 1 to 7 loop
                  wait until falling_edge( SCL );
                  bWrite := bWrite( 6 downto 0 ) & SDA;
               end loop;
               
               -- Report
               write( L, "[I2C " ); write( L, now, UNIT => us ); write( L, "] byte received: " ); hwrite( L, bWrite );
               writeline( output, L );

               -- pull down for ACK the write
               wait for 2.5 us / 4;
               SDA <= '0';
               wait for 2.5 us;
               SDA <= 'Z';
             end loop;

         else

            -- Master is reading
            loop
               for i in 7 downto 0 loop
                  if bRead( i ) = '1' then
                     SDA <= 'Z';
                  else
                     SDA <= '0';
                  end if;
                  wait until falling_edge( SCL );
                  wait for 2.5 us / 4;
               end loop;
               SDA <= 'Z';
               
               -- Read ACK
               wait until rising_edge( SCL );
               wait for 2.5 us / 4;
               Ack := SDA;
               wait for 2.5 us / 2;
               
               -- Report
               write( L, "[I2C " ); write( L, now, UNIT => us ); write( L, "] byte transmitted: " ); hwrite( L, bRead );
               if Ack = '0' then
                  write( L, " with positive ACK" );
               else
                  write( L, ", NACK in response" );
               end if;
               writeline( output, L );

               exit when Ack /= '0';

               -- Increment byte to be transmitted in the next read slot
               bRead := std_logic_vector( unsigned( bRead ) + 1 );
            end loop;

         end if;
         
      end loop;
   end process;
   --------------------------------------------------------------------
   --------------------------------------------------------------------

END;
