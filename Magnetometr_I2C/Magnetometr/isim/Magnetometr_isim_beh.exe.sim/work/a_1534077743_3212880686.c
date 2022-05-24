/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/pluci/Desktop/najnowszy190522/Magnetometr/Magnetometr.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1534077743_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2592U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9664);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 2792U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 9968);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 9968);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void work_a_1534077743_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB8, &&LAB10, &&LAB7, &&LAB11, &&LAB12, &&LAB13, &&LAB15, &&LAB28, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20, &&LAB21, &&LAB23, &&LAB22, &&LAB24, &&LAB25, &&LAB26, &&LAB27, &&LAB14, &&LAB9, &&LAB28};

LAB0:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 9680);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 10032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB4:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB29;

LAB31:
LAB30:    goto LAB2;

LAB8:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)25;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB2;

LAB10:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);

LAB36:    goto LAB2;

LAB13:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)24;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB14:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB38;

LAB40:
LAB39:    goto LAB2;

LAB15:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)12;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB16:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB41;

LAB43:
LAB42:    goto LAB2;

LAB17:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)14;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB18:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)15;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB19:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)16;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB20:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB44;

LAB46:
LAB45:    goto LAB2;

LAB21:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)19;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB22:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB47;

LAB49:
LAB48:    goto LAB2;

LAB23:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)20;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB24:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)21;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB25:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB50;

LAB52:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)22;
    xsi_driver_first_trans_fast(t1);

LAB51:    goto LAB2;

LAB26:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)23;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB27:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB53;

LAB55:
LAB54:    goto LAB2;

LAB28:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 10032);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB29:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 10032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB30;

LAB32:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 10032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB33;

LAB35:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 10032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB38:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 10032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)10;
    xsi_driver_first_trans_fast(t1);
    goto LAB39;

LAB41:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 10032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)13;
    xsi_driver_first_trans_fast(t1);
    goto LAB42;

LAB44:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 10032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)17;
    xsi_driver_first_trans_fast(t1);
    goto LAB45;

LAB47:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 10032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)18;
    xsi_driver_first_trans_fast(t1);
    goto LAB48;

LAB50:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 10032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)18;
    xsi_driver_first_trans_fast(t1);
    goto LAB51;

LAB53:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 10032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)17;
    xsi_driver_first_trans_fast(t1);
    goto LAB54;

}

static void work_a_1534077743_3212880686_p_2(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 2592U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9696);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(184, ng0);
    t3 = (t0 + 3592U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)5);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(185, ng0);
    t3 = (t0 + 3432U);
    t7 = *((char **)t3);
    t3 = (t0 + 10096);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 8U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB6;

}

static void work_a_1534077743_3212880686_p_3(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;

LAB0:    xsi_set_current_line(193, ng0);
    t1 = (t0 + 2592U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9712);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(194, ng0);
    t3 = (t0 + 2792U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)20);
    if (t5 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    xsi_set_current_line(195, ng0);
    t3 = (t0 + 10160);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

LAB8:    xsi_set_current_line(198, ng0);
    t1 = (t0 + 4072U);
    t4 = *((char **)t1);
    t11 = *((int *)t4);
    t6 = (t11 == 5);
    if (t6 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(201, ng0);
    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t12 = (t11 + 1);
    t1 = (t0 + 10160);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t12;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(199, ng0);
    t1 = (t0 + 10160);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

}

static void work_a_1534077743_3212880686_p_4(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 2592U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9728);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(211, ng0);
    t3 = (t0 + 3592U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)18);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(212, ng0);
    t3 = (t0 + 4072U);
    t7 = *((char **)t3);
    t8 = *((int *)t7);
    if (t8 == 0)
        goto LAB9;

LAB15:    if (t8 == 1)
        goto LAB10;

LAB16:    if (t8 == 2)
        goto LAB11;

LAB17:    if (t8 == 3)
        goto LAB12;

LAB18:    if (t8 == 4)
        goto LAB13;

LAB19:
LAB14:    xsi_set_current_line(224, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10224);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 8U);
    xsi_driver_first_trans_delta(t1, 40U, 8U, 0LL);

LAB8:    goto LAB6;

LAB9:    xsi_set_current_line(214, ng0);
    t3 = (t0 + 3432U);
    t9 = *((char **)t3);
    t3 = (t0 + 10224);
    t10 = (t3 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8U);
    xsi_driver_first_trans_delta(t3, 0U, 8U, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(216, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10224);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 8U);
    xsi_driver_first_trans_delta(t1, 8U, 8U, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(218, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10224);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 8U);
    xsi_driver_first_trans_delta(t1, 16U, 8U, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(220, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10224);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 8U);
    xsi_driver_first_trans_delta(t1, 24U, 8U, 0LL);
    goto LAB8;

LAB13:    xsi_set_current_line(222, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10224);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 8U);
    xsi_driver_first_trans_delta(t1, 32U, 8U, 0LL);
    goto LAB8;

LAB20:;
}

static void work_a_1534077743_3212880686_p_5(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(233, ng0);
    t1 = (t0 + 2592U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9744);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(234, ng0);
    t3 = (t0 + 3592U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)22);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(235, ng0);
    t3 = (t0 + 3912U);
    t7 = *((char **)t3);
    t8 = (47 - 47);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t3 = (t7 + t10);
    t11 = (t0 + 10288);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t3, 16U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(236, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t8 = (47 - 31);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t3 + t10);
    t4 = (t0 + 10352);
    t7 = (t4 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(237, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t8 = (47 - 15);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t3 + t10);
    t4 = (t0 + 10416);
    t7 = (t4 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

}

static void work_a_1534077743_3212880686_p_6(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    unsigned char t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned char t39;
    unsigned char t40;
    unsigned char t41;
    char *t42;
    char *t43;
    unsigned char t44;
    unsigned char t45;
    char *t46;
    unsigned char t47;
    unsigned char t48;
    char *t49;
    unsigned char t50;
    unsigned char t51;
    char *t52;
    unsigned char t53;
    unsigned char t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;

LAB0:    xsi_set_current_line(245, ng0);
    t8 = (t0 + 3592U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB23;

LAB24:    t8 = (t0 + 3752U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)1);
    t7 = t14;

LAB25:    if (t7 == 1)
        goto LAB20;

LAB21:    t8 = (t0 + 3592U);
    t15 = *((char **)t8);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)9);
    t6 = t17;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t8 = (t0 + 3752U);
    t18 = *((char **)t8);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)9);
    t5 = t20;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t8 = (t0 + 3592U);
    t21 = *((char **)t8);
    t22 = *((unsigned char *)t21);
    t23 = (t22 == (unsigned char)11);
    t4 = t23;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t8 = (t0 + 3752U);
    t24 = *((char **)t8);
    t25 = *((unsigned char *)t24);
    t26 = (t25 == (unsigned char)11);
    t3 = t26;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t8 = (t0 + 3592U);
    t27 = *((char **)t8);
    t28 = *((unsigned char *)t27);
    t29 = (t28 == (unsigned char)15);
    t2 = t29;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 3752U);
    t30 = *((char **)t8);
    t31 = *((unsigned char *)t30);
    t32 = (t31 == (unsigned char)15);
    t1 = t32;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t42 = (t0 + 3592U);
    t43 = *((char **)t42);
    t44 = *((unsigned char *)t43);
    t45 = (t44 == (unsigned char)4);
    if (t45 == 1)
        goto LAB34;

LAB35:    t42 = (t0 + 3752U);
    t46 = *((char **)t42);
    t47 = *((unsigned char *)t46);
    t48 = (t47 == (unsigned char)4);
    t41 = t48;

LAB36:    if (t41 == 1)
        goto LAB31;

LAB32:    t42 = (t0 + 3592U);
    t49 = *((char **)t42);
    t50 = *((unsigned char *)t49);
    t51 = (t50 == (unsigned char)17);
    t40 = t51;

LAB33:    if (t40 == 1)
        goto LAB28;

LAB29:    t42 = (t0 + 3752U);
    t52 = *((char **)t42);
    t53 = *((unsigned char *)t52);
    t54 = (t53 == (unsigned char)17);
    t39 = t54;

LAB30:    if (t39 != 0)
        goto LAB26;

LAB27:
LAB2:    t61 = (t0 + 9760);
    *((int *)t61) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 16456);
    t34 = (t0 + 10480);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t8, 8U);
    xsi_driver_first_trans_fast_port(t34);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t6 = (unsigned char)1;
    goto LAB22;

LAB23:    t7 = (unsigned char)1;
    goto LAB25;

LAB26:    t42 = (t0 + 16464);
    t56 = (t0 + 10480);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memcpy(t60, t42, 8U);
    xsi_driver_first_trans_fast_port(t56);
    goto LAB2;

LAB28:    t39 = (unsigned char)1;
    goto LAB30;

LAB31:    t40 = (unsigned char)1;
    goto LAB33;

LAB34:    t41 = (unsigned char)1;
    goto LAB36;

}

static void work_a_1534077743_3212880686_p_7(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned char t43;
    char *t44;
    char *t45;
    unsigned char t46;
    unsigned char t47;
    char *t48;
    unsigned char t49;
    unsigned char t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned char t57;
    char *t58;
    char *t59;
    unsigned char t60;
    unsigned char t61;
    char *t62;
    unsigned char t63;
    unsigned char t64;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;

LAB0:    xsi_set_current_line(252, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 3752U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t16 = (t0 + 3752U);
    t17 = *((char **)t16);
    t18 = *((unsigned char *)t17);
    t19 = (t18 == (unsigned char)9);
    if (t19 == 1)
        goto LAB10;

LAB11:    t16 = (t0 + 3592U);
    t20 = *((char **)t16);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)9);
    t15 = t22;

LAB12:    if (t15 != 0)
        goto LAB8;

LAB9:    t30 = (t0 + 3752U);
    t31 = *((char **)t30);
    t32 = *((unsigned char *)t31);
    t33 = (t32 == (unsigned char)10);
    if (t33 == 1)
        goto LAB15;

LAB16:    t30 = (t0 + 3592U);
    t34 = *((char **)t30);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)10);
    t29 = t36;

LAB17:    if (t29 != 0)
        goto LAB13;

LAB14:    t44 = (t0 + 3752U);
    t45 = *((char **)t44);
    t46 = *((unsigned char *)t45);
    t47 = (t46 == (unsigned char)13);
    if (t47 == 1)
        goto LAB20;

LAB21:    t44 = (t0 + 3592U);
    t48 = *((char **)t44);
    t49 = *((unsigned char *)t48);
    t50 = (t49 == (unsigned char)13);
    t43 = t50;

LAB22:    if (t43 != 0)
        goto LAB18;

LAB19:    t58 = (t0 + 3752U);
    t59 = *((char **)t58);
    t60 = *((unsigned char *)t59);
    t61 = (t60 == (unsigned char)14);
    if (t61 == 1)
        goto LAB25;

LAB26:    t58 = (t0 + 3592U);
    t62 = *((char **)t58);
    t63 = *((unsigned char *)t62);
    t64 = (t63 == (unsigned char)14);
    t57 = t64;

LAB27:    if (t57 != 0)
        goto LAB23;

LAB24:
LAB2:    t71 = (t0 + 9776);
    *((int *)t71) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 16472);
    t10 = (t0 + 10544);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t16 = (t0 + 16480);
    t24 = (t0 + 10544);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t16, 8U);
    xsi_driver_first_trans_fast_port(t24);
    goto LAB2;

LAB10:    t15 = (unsigned char)1;
    goto LAB12;

LAB13:    t30 = (t0 + 16488);
    t38 = (t0 + 10544);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t30, 8U);
    xsi_driver_first_trans_fast_port(t38);
    goto LAB2;

LAB15:    t29 = (unsigned char)1;
    goto LAB17;

LAB18:    t44 = (t0 + 16496);
    t52 = (t0 + 10544);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memcpy(t56, t44, 8U);
    xsi_driver_first_trans_fast_port(t52);
    goto LAB2;

LAB20:    t43 = (unsigned char)1;
    goto LAB22;

LAB23:    t58 = (t0 + 16504);
    t66 = (t0 + 10544);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memcpy(t70, t58, 8U);
    xsi_driver_first_trans_fast_port(t66);
    goto LAB2;

LAB25:    t57 = (unsigned char)1;
    goto LAB27;

}

static void work_a_1534077743_3212880686_p_8(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(258, ng0);
    t5 = (t0 + 3592U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)1);
    if (t8 == 1)
        goto LAB14;

LAB15:    t5 = (t0 + 3592U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)9);
    t4 = t11;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t5 = (t0 + 3592U);
    t12 = *((char **)t5);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)10);
    t3 = t14;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t5 = (t0 + 3592U);
    t15 = *((char **)t5);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)13);
    t2 = t17;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t5 = (t0 + 3592U);
    t18 = *((char **)t5);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)14);
    t1 = t20;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB17:    t25 = (t0 + 10608);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t25);

LAB2:    t30 = (t0 + 9792);
    *((int *)t30) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 10608);
    t21 = (t5 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB18:    goto LAB2;

}

static void work_a_1534077743_3212880686_p_9(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    xsi_set_current_line(261, ng0);
    t8 = (t0 + 3592U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB23;

LAB24:    t8 = (t0 + 3592U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t7 = t14;

LAB25:    if (t7 == 1)
        goto LAB20;

LAB21:    t8 = (t0 + 3592U);
    t15 = *((char **)t8);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)4);
    t6 = t17;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t8 = (t0 + 3592U);
    t18 = *((char **)t8);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)9);
    t5 = t20;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t8 = (t0 + 3592U);
    t21 = *((char **)t8);
    t22 = *((unsigned char *)t21);
    t23 = (t22 == (unsigned char)10);
    t4 = t23;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t8 = (t0 + 3592U);
    t24 = *((char **)t8);
    t25 = *((unsigned char *)t24);
    t26 = (t25 == (unsigned char)11);
    t3 = t26;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t8 = (t0 + 3592U);
    t27 = *((char **)t8);
    t28 = *((unsigned char *)t27);
    t29 = (t28 == (unsigned char)15);
    t2 = t29;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 3592U);
    t30 = *((char **)t8);
    t31 = *((unsigned char *)t30);
    t32 = (t31 == (unsigned char)17);
    t1 = t32;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB26:    t37 = (t0 + 10672);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    *((unsigned char *)t41) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t37);

LAB2:    t42 = (t0 + 9808);
    *((int *)t42) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 10672);
    t33 = (t8 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t6 = (unsigned char)1;
    goto LAB22;

LAB23:    t7 = (unsigned char)1;
    goto LAB25;

LAB27:    goto LAB2;

}

static void work_a_1534077743_3212880686_p_10(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(264, ng0);
    t4 = (t0 + 3592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)4);
    if (t7 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 3752U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)4);
    t3 = t10;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 3592U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)17);
    t2 = t13;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 3752U);
    t14 = *((char **)t4);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)17);
    t1 = t16;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB2:    t23 = (t0 + 9824);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 16512);
    t18 = (t0 + 10736);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t4, 4U);
    xsi_driver_first_trans_fast_port(t18);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

}

static void work_a_1534077743_3212880686_p_11(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(267, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)7);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 3592U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)20);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 10800);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 9840);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 10800);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_1534077743_3212880686_p_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(270, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 10864);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 9856);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1534077743_3212880686_p_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(271, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t1 = (t0 + 10928);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 9872);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1534077743_3212880686_p_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(272, ng0);

LAB3:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t1 = (t0 + 10992);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 9888);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1534077743_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1534077743_3212880686_p_0,(void *)work_a_1534077743_3212880686_p_1,(void *)work_a_1534077743_3212880686_p_2,(void *)work_a_1534077743_3212880686_p_3,(void *)work_a_1534077743_3212880686_p_4,(void *)work_a_1534077743_3212880686_p_5,(void *)work_a_1534077743_3212880686_p_6,(void *)work_a_1534077743_3212880686_p_7,(void *)work_a_1534077743_3212880686_p_8,(void *)work_a_1534077743_3212880686_p_9,(void *)work_a_1534077743_3212880686_p_10,(void *)work_a_1534077743_3212880686_p_11,(void *)work_a_1534077743_3212880686_p_12,(void *)work_a_1534077743_3212880686_p_13,(void *)work_a_1534077743_3212880686_p_14};
	xsi_register_didat("work_a_1534077743_3212880686", "isim/Magnetometr_isim_beh.exe.sim/work/a_1534077743_3212880686.didat");
	xsi_register_executes(pe);
}
