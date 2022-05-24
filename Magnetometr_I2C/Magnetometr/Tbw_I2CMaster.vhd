LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
use ieee.std_logic_textio.all;   -- extra libraires as required by Tbw_I2Cslave

LIBRARY std;
use std.textio.all;
 
ENTITY Tbw_I2CMaster IS
END Tbw_I2CMaster;
 
ARCHITECTURE behavior OF Tbw_I2CMaster IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT I2C_Master
    PORT(
         SDA : INOUT  std_logic;
         SCL : INOUT  std_logic;
         Clk : IN  std_logic;
         NACK : OUT  std_logic;
         FIFO_Pop : IN  std_logic;
         Reset : IN  std_logic;
         Go : IN  std_logic;
         Busy : OUT  std_logic;
         FIFO_Empty : OUT  std_logic;
         FIFO_Push : IN  std_logic;
         FIFO_Full : OUT  std_logic;
         FIFO_DO : OUT  std_logic_vector(7 downto 0);
         Address : IN  std_logic_vector(7 downto 0);
         FIFO_DI : IN  std_logic_vector(7 downto 0);
         ReadCnt : IN  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Clk : std_logic := '0';
   signal FIFO_Pop : std_logic := '0';
   signal Reset : std_logic := '0';
   signal Go : std_logic := '0';
   signal FIFO_Push : std_logic := '0';
   signal Address : std_logic_vector(7 downto 0) := (others => '0');
   signal FIFO_DI : std_logic_vector(7 downto 0) := (others => '0');
   signal ReadCnt : std_logic_vector(3 downto 0) := (others => '0');

	--BiDirs
   signal SDA : std_logic;
   signal SCL : std_logic;

 	--Outputs
   signal NACK : std_logic;
   signal Busy : std_logic;
   signal FIFO_Empty : std_logic;
   signal FIFO_Full : std_logic;
   signal FIFO_DO : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant Clk_period : time := 20 ns;   -- 50MHz must be properly simulated
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: I2C_Master PORT MAP (
          SDA => SDA,
          SCL => SCL,
          Clk => Clk,
          NACK => NACK,
          FIFO_Pop => FIFO_Pop,
          Reset => Reset,
          Go => Go,
          Busy => Busy,
          FIFO_Empty => FIFO_Empty,
          FIFO_Push => FIFO_Push,
          FIFO_Full => FIFO_Full,
          FIFO_DO => FIFO_DO,
          Address => Address,
          FIFO_DI => FIFO_DI,
          ReadCnt => ReadCnt
        );

   -- Clock definitions
   Clk <= not Clk after Clk_period / 2;

   -- Stimulus process
   stim_proc: process

      -- Deivce address (example):  X"80" for writes, X"81" for reads
      constant I2C_Address : std_logic_vector := B"1000_000";

   begin		
      -- hold reset state for 100 Tclk, plus small extra offset after Clk rising edge
      wait for 100.6 * Clk_period;

      -- Test 1: write 4 bytes X"A1", X"B2", X"C3", X"D4"
      Address   <= I2C_Address & '0';
      FIFO_Push <= '1', '0' after 4 * Clk_period;
      FIFO_DI   <= X"A1", X"B2" after Clk_period, X"C3" after 2*Clk_period, X"D4" after 3*Clk_period;
      Go        <= '1';
      wait for Clk_period;
      Go        <= '0';

      -- wait for completion (~117us) + 100 Tclk
      wait until rising_edge( Clk ) and Busy = '0';
      wait for 100.1 * Clk_period;
      
      -- Test 2: read 4 bytes
      Address <= I2C_Address & '1';
      ReadCnt <= X"4";
      Go      <= '1';
      wait for Clk_period;
      Go      <= '0';

      -- wait for completion (~117us), then generate FIFO_POP for 4 Tclk
      wait until rising_edge( Clk ) and Busy = '0';
      wait for 0.1 * Clk_period;
      FIFO_POP <= '1', '0' after 4 * Clk_period;

      wait; -- that's it
   end process;


   --------------------------------------------------------------------
   --------------------------------------------------------------------
	-- Tbw_I2Cslave.zip: simulating responses from I2C bus
   SDA <= 'H'; -- pull-ups
   SCL <= 'H';
   process
      variable bAddr  : std_logic_vector( 7 downto 0 );             -- I2C adress received as the first byte
      variable bWrite : std_logic_vector( 7 downto 0 );             -- byte received in write transfers
      variable bRead  : std_logic_vector( 7 downto 0 ) := X"F0";    -- byte transmitted in read transfers
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
