--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : MagnetoSchematic.vhf
-- /___/   /\     Timestamp : 05/23/2022 20:09:31
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -intstyle ise -family spartan3e -flat -suppress -vhdl C:/Users/pluci/Desktop/najnowszy190522/Magnetometr/MagnetoSchematic.vhf -w C:/Users/pluci/Desktop/najnowszy190522/Magnetometr/MagnetoSchematic.sch
--Design Name: MagnetoSchematic
--Device: spartan3e
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity MagnetoSchematic is
   port ( Clk   : in    std_logic; 
          Reset : in    std_logic; 
          DO_X  : out   std_logic_vector (15 downto 0); 
          DO_Y  : out   std_logic_vector (15 downto 0); 
          DO_Z  : out   std_logic_vector (15 downto 0); 
          ID_A  : out   std_logic_vector (7 downto 0); 
          NACK  : out   std_logic; 
          SCL   : inout std_logic; 
          SDA   : inout std_logic);
end MagnetoSchematic;

architecture BEHAVIORAL of MagnetoSchematic is
   signal XLXN_45                 : std_logic;
   signal XLXN_46                 : std_logic_vector (7 downto 0);
   signal XLXN_47                 : std_logic_vector (3 downto 0);
   signal XLXN_48                 : std_logic;
   signal XLXN_49                 : std_logic;
   signal XLXN_57                 : std_logic_vector (7 downto 0);
   signal XLXN_58                 : std_logic_vector (7 downto 0);
   signal XLXN_59                 : std_logic;
   signal XLXN_60                 : std_logic;
   signal XLXN_61                 : std_logic;
   signal XLXI_14_DRDY_openSignal : std_logic;
   component I2C_Master
      port ( Go         : in    std_logic; 
             Address    : in    std_logic_vector (7 downto 0); 
             ReadCnt    : in    std_logic_vector (3 downto 0); 
             SDA        : inout std_logic; 
             SCL        : inout std_logic; 
             FIFO_Pop   : in    std_logic; 
             FIFO_Push  : in    std_logic; 
             FIFO_DI    : in    std_logic_vector (7 downto 0); 
             FIFO_Empty : out   std_logic; 
             FIFO_Full  : out   std_logic; 
             FIFO_DO    : out   std_logic_vector (7 downto 0); 
             Reset      : in    std_logic; 
             Clk        : in    std_logic; 
             Busy       : out   std_logic; 
             NACK       : out   std_logic);
   end component;
   
   component Magnetometr
      port ( CLK_50Mhz      : in    std_logic; 
             Reset          : in    std_logic;
             I2C_FIFO_Empty : in    std_logic; 
             I2C_FIFO_Full  : in    std_logic; 
             I2C_Busy       : in    std_logic; 
             I2C_FIFO_DO    : in    std_logic_vector (7 downto 0); 
             I2C_Go         : out   std_logic; 
             I2C_FIFO_Pop   : out   std_logic; 
             I2C_FIFO_Push  : out   std_logic; 
             ID_A           : out   std_logic_vector (7 downto 0); 
             DO_X           : out   std_logic_vector (15 downto 0); 
             DO_Y           : out   std_logic_vector (15 downto 0); 
             DO_Z           : out   std_logic_vector (15 downto 0); 
             I2C_Address    : out   std_logic_vector (7 downto 0); 
             I2C_ReadCnt    : out   std_logic_vector (3 downto 0); 
             I2C_FIFO_DI    : out   std_logic_vector (7 downto 0));
   end component;
   
begin
   XLXI_11 : I2C_Master
      port map (Address(7 downto 0)=>XLXN_46(7 downto 0),
                Clk=>Clk,
                FIFO_DI(7 downto 0)=>XLXN_58(7 downto 0),
                FIFO_Pop=>XLXN_48,
                FIFO_Push=>XLXN_49,
                Go=>XLXN_45,
                ReadCnt(3 downto 0)=>XLXN_47(3 downto 0),
                Reset=>Reset,
                Busy=>XLXN_59,
                FIFO_DO(7 downto 0)=>XLXN_57(7 downto 0),
                FIFO_Empty=>XLXN_61,
                FIFO_Full=>XLXN_60,
                NACK=>NACK,
                SCL=>SCL,
                SDA=>SDA);
   
   XLXI_14 : Magnetometr
      port map (CLK_50Mhz=>Clk,
                I2C_Busy=>XLXN_59,
                I2C_FIFO_DO(7 downto 0)=>XLXN_57(7 downto 0),
                I2C_FIFO_Empty=>XLXN_61,
                I2C_FIFO_Full=>XLXN_60,
                Reset=>Reset,
                DO_X(15 downto 0)=>DO_X(15 downto 0),
                DO_Y(15 downto 0)=>DO_Y(15 downto 0),
                DO_Z(15 downto 0)=>DO_Z(15 downto 0),
                ID_A(7 downto 0)=>ID_A(7 downto 0),
                I2C_Address(7 downto 0)=>XLXN_46(7 downto 0),
                I2C_FIFO_DI(7 downto 0)=>XLXN_58(7 downto 0),
                I2C_FIFO_Pop=>XLXN_48,
                I2C_FIFO_Push=>XLXN_49,
                I2C_Go=>XLXN_45,
                I2C_ReadCnt(3 downto 0)=>XLXN_47(3 downto 0));
   
end BEHAVIORAL;


