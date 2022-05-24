<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="Reset" />
        <signal name="Clk" />
        <signal name="NACK" />
        <signal name="ID_A(7:0)" />
        <signal name="SDA" />
        <signal name="SCL" />
        <signal name="DO_X(15:0)" />
        <signal name="DO_Y(15:0)" />
        <signal name="DO_Z(15:0)" />
        <signal name="XLXN_45" />
        <signal name="XLXN_46(7:0)" />
        <signal name="XLXN_47(3:0)" />
        <signal name="XLXN_48" />
        <signal name="XLXN_49" />
        <signal name="XLXN_57(7:0)" />
        <signal name="XLXN_58(7:0)" />
        <signal name="XLXN_59" />
        <signal name="XLXN_60" />
        <signal name="XLXN_61" />
        <port polarity="Input" name="Reset" />
        <port polarity="Input" name="Clk" />
        <port polarity="Output" name="NACK" />
        <port polarity="Output" name="ID_A(7:0)" />
        <port polarity="BiDirectional" name="SDA" />
        <port polarity="BiDirectional" name="SCL" />
        <port polarity="Output" name="DO_X(15:0)" />
        <port polarity="Output" name="DO_Y(15:0)" />
        <port polarity="Output" name="DO_Z(15:0)" />
        <blockdef name="I2C_Master">
            <timestamp>2022-3-24T11:47:3</timestamp>
            <rect width="336" x="64" y="-512" height="572" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <rect width="64" x="0" y="-428" height="24" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-364" height="24" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="464" y1="-480" y2="-480" x1="400" />
            <line x2="464" y1="-416" y2="-416" x1="400" />
            <line x2="0" y1="-256" y2="-256" x1="64" />
            <line x2="0" y1="-192" y2="-192" x1="64" />
            <rect width="64" x="0" y="-140" height="24" />
            <line x2="0" y1="-128" y2="-128" x1="64" />
            <line x2="464" y1="-256" y2="-256" x1="400" />
            <line x2="464" y1="-192" y2="-192" x1="400" />
            <rect width="64" x="400" y="-140" height="24" />
            <line x2="464" y1="-128" y2="-128" x1="400" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <line x2="464" y1="-32" y2="-32" x1="400" />
            <line x2="464" y1="32" y2="32" x1="400" />
        </blockdef>
        <blockdef name="Magnetometr">
            <timestamp>2022-5-14T11:55:3</timestamp>
            <line x2="0" y1="224" y2="224" x1="64" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <line x2="0" y1="96" y2="96" x1="64" />
            <line x2="0" y1="160" y2="160" x1="64" />
            <rect width="64" x="464" y="20" height="24" />
            <line x2="528" y1="32" y2="32" x1="464" />
            <rect width="64" x="464" y="84" height="24" />
            <line x2="528" y1="96" y2="96" x1="464" />
            <rect width="64" x="464" y="148" height="24" />
            <line x2="528" y1="160" y2="160" x1="464" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="528" y1="-416" y2="-416" x1="464" />
            <line x2="528" y1="-352" y2="-352" x1="464" />
            <line x2="528" y1="-288" y2="-288" x1="464" />
            <rect width="64" x="464" y="-236" height="24" />
            <line x2="528" y1="-224" y2="-224" x1="464" />
            <rect width="64" x="464" y="-172" height="24" />
            <line x2="528" y1="-160" y2="-160" x1="464" />
            <rect width="64" x="464" y="-108" height="24" />
            <line x2="528" y1="-96" y2="-96" x1="464" />
            <rect width="64" x="464" y="-44" height="24" />
            <line x2="528" y1="-32" y2="-32" x1="464" />
            <rect width="400" x="64" y="-448" height="704" />
        </blockdef>
        <block symbolname="I2C_Master" name="XLXI_11">
            <blockpin signalname="XLXN_45" name="Go" />
            <blockpin signalname="XLXN_46(7:0)" name="Address(7:0)" />
            <blockpin signalname="XLXN_47(3:0)" name="ReadCnt(3:0)" />
            <blockpin signalname="SDA" name="SDA" />
            <blockpin signalname="SCL" name="SCL" />
            <blockpin signalname="XLXN_48" name="FIFO_Pop" />
            <blockpin signalname="XLXN_49" name="FIFO_Push" />
            <blockpin signalname="XLXN_58(7:0)" name="FIFO_DI(7:0)" />
            <blockpin signalname="XLXN_61" name="FIFO_Empty" />
            <blockpin signalname="XLXN_60" name="FIFO_Full" />
            <blockpin signalname="XLXN_57(7:0)" name="FIFO_DO(7:0)" />
            <blockpin signalname="Reset" name="Reset" />
            <blockpin signalname="Clk" name="Clk" />
            <blockpin signalname="XLXN_59" name="Busy" />
            <blockpin signalname="NACK" name="NACK" />
        </block>
        <block symbolname="Magnetometr" name="XLXI_14">
            <blockpin signalname="Clk" name="CLK_50Mhz" />
            <blockpin signalname="Reset" name="Reset" />
            <blockpin name="DRDY" />
            <blockpin signalname="XLXN_61" name="I2C_FIFO_Empty" />
            <blockpin signalname="XLXN_60" name="I2C_FIFO_Full" />
            <blockpin signalname="XLXN_59" name="I2C_Busy" />
            <blockpin signalname="XLXN_57(7:0)" name="I2C_FIFO_DO(7:0)" />
            <blockpin signalname="XLXN_45" name="I2C_Go" />
            <blockpin signalname="XLXN_48" name="I2C_FIFO_Pop" />
            <blockpin signalname="XLXN_49" name="I2C_FIFO_Push" />
            <blockpin signalname="ID_A(7:0)" name="ID_A(7:0)" />
            <blockpin signalname="DO_X(15:0)" name="DO_X(15:0)" />
            <blockpin signalname="DO_Y(15:0)" name="DO_Y(15:0)" />
            <blockpin signalname="DO_Z(15:0)" name="DO_Z(15:0)" />
            <blockpin signalname="XLXN_46(7:0)" name="I2C_Address(7:0)" />
            <blockpin signalname="XLXN_47(3:0)" name="I2C_ReadCnt(3:0)" />
            <blockpin signalname="XLXN_58(7:0)" name="I2C_FIFO_DI(7:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <branch name="Clk">
            <wire x2="256" y1="240" y2="240" x1="112" />
            <wire x2="448" y1="240" y2="240" x1="256" />
            <wire x2="256" y1="240" y2="1104" x1="256" />
            <wire x2="1280" y1="1104" y2="1104" x1="256" />
            <wire x2="1280" y1="896" y2="1104" x1="1280" />
        </branch>
        <branch name="NACK">
            <wire x2="1872" y1="896" y2="896" x1="1744" />
        </branch>
        <branch name="SDA">
            <wire x2="1776" y1="384" y2="384" x1="1744" />
        </branch>
        <branch name="SCL">
            <wire x2="1776" y1="448" y2="448" x1="1744" />
        </branch>
        <iomarker fontsize="28" x="1776" y="448" name="SCL" orien="R0" />
        <iomarker fontsize="28" x="1776" y="384" name="SDA" orien="R0" />
        <instance x="1280" y="864" name="XLXI_11" orien="R0">
        </instance>
        <instance x="448" y="656" name="XLXI_14" orien="R0">
        </instance>
        <branch name="DO_X(15:0)">
            <wire x2="1056" y1="688" y2="688" x1="976" />
            <wire x2="1056" y1="112" y2="688" x1="1056" />
            <wire x2="1120" y1="112" y2="112" x1="1056" />
        </branch>
        <branch name="DO_Y(15:0)">
            <wire x2="1072" y1="752" y2="752" x1="976" />
            <wire x2="1072" y1="176" y2="752" x1="1072" />
            <wire x2="1120" y1="176" y2="176" x1="1072" />
        </branch>
        <branch name="DO_Z(15:0)">
            <wire x2="1088" y1="816" y2="816" x1="976" />
            <wire x2="1088" y1="240" y2="816" x1="1088" />
            <wire x2="1120" y1="240" y2="240" x1="1088" />
        </branch>
        <branch name="ID_A(7:0)">
            <wire x2="1024" y1="432" y2="432" x1="976" />
            <wire x2="1120" y1="32" y2="32" x1="1024" />
            <wire x2="1024" y1="32" y2="432" x1="1024" />
        </branch>
        <iomarker fontsize="28" x="1120" y="32" name="ID_A(7:0)" orien="R0" />
        <iomarker fontsize="28" x="1120" y="240" name="DO_Z(15:0)" orien="R0" />
        <iomarker fontsize="28" x="1120" y="176" name="DO_Y(15:0)" orien="R0" />
        <iomarker fontsize="28" x="1120" y="112" name="DO_X(15:0)" orien="R0" />
        <iomarker fontsize="28" x="1872" y="896" name="NACK" orien="R0" />
        <branch name="XLXN_45">
            <wire x2="1040" y1="240" y2="240" x1="976" />
            <wire x2="1040" y1="240" y2="384" x1="1040" />
            <wire x2="1280" y1="384" y2="384" x1="1040" />
        </branch>
        <branch name="XLXN_46(7:0)">
            <wire x2="1120" y1="496" y2="496" x1="976" />
            <wire x2="1120" y1="448" y2="496" x1="1120" />
            <wire x2="1280" y1="448" y2="448" x1="1120" />
        </branch>
        <branch name="Reset">
            <wire x2="288" y1="432" y2="432" x1="144" />
            <wire x2="288" y1="432" y2="1072" x1="288" />
            <wire x2="1248" y1="1072" y2="1072" x1="288" />
            <wire x2="448" y1="432" y2="432" x1="288" />
            <wire x2="1280" y1="832" y2="832" x1="1248" />
            <wire x2="1248" y1="832" y2="1072" x1="1248" />
        </branch>
        <branch name="XLXN_47(3:0)">
            <wire x2="1120" y1="560" y2="560" x1="976" />
            <wire x2="1120" y1="512" y2="560" x1="1120" />
            <wire x2="1280" y1="512" y2="512" x1="1120" />
        </branch>
        <branch name="XLXN_48">
            <wire x2="1104" y1="304" y2="304" x1="976" />
            <wire x2="1104" y1="304" y2="608" x1="1104" />
            <wire x2="1280" y1="608" y2="608" x1="1104" />
        </branch>
        <branch name="XLXN_49">
            <wire x2="1136" y1="368" y2="368" x1="976" />
            <wire x2="1136" y1="368" y2="672" x1="1136" />
            <wire x2="1280" y1="672" y2="672" x1="1136" />
        </branch>
        <branch name="XLXN_57(7:0)">
            <wire x2="448" y1="624" y2="624" x1="352" />
            <wire x2="352" y1="624" y2="1040" x1="352" />
            <wire x2="1824" y1="1040" y2="1040" x1="352" />
            <wire x2="1824" y1="736" y2="736" x1="1744" />
            <wire x2="1824" y1="736" y2="1040" x1="1824" />
        </branch>
        <branch name="XLXN_58(7:0)">
            <wire x2="1120" y1="624" y2="624" x1="976" />
            <wire x2="1120" y1="624" y2="736" x1="1120" />
            <wire x2="1280" y1="736" y2="736" x1="1120" />
        </branch>
        <branch name="XLXN_59">
            <wire x2="448" y1="816" y2="1008" x1="448" />
            <wire x2="1792" y1="1008" y2="1008" x1="448" />
            <wire x2="1792" y1="832" y2="832" x1="1744" />
            <wire x2="1792" y1="832" y2="1008" x1="1792" />
        </branch>
        <branch name="XLXN_60">
            <wire x2="448" y1="752" y2="752" x1="416" />
            <wire x2="416" y1="752" y2="976" x1="416" />
            <wire x2="1808" y1="976" y2="976" x1="416" />
            <wire x2="1808" y1="672" y2="672" x1="1744" />
            <wire x2="1808" y1="672" y2="976" x1="1808" />
        </branch>
        <branch name="XLXN_61">
            <wire x2="448" y1="688" y2="688" x1="384" />
            <wire x2="384" y1="688" y2="944" x1="384" />
            <wire x2="1776" y1="944" y2="944" x1="384" />
            <wire x2="1776" y1="608" y2="608" x1="1744" />
            <wire x2="1776" y1="608" y2="944" x1="1776" />
        </branch>
        <iomarker fontsize="28" x="112" y="240" name="Clk" orien="R180" />
        <iomarker fontsize="28" x="144" y="432" name="Reset" orien="R180" />
    </sheet>
</drawing>