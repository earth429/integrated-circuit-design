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
static const char *ng0 = "C:/Code/Kosen/4th/Verilog/ALUDev/t_Main.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {17U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {83U, 0U};
static unsigned int ng7[] = {115U, 0U};
static unsigned int ng8[] = {143U, 15U};
static unsigned int ng9[] = {153U, 0U};
static unsigned int ng10[] = {179U, 0U};
static unsigned int ng11[] = {217U, 0U};
static unsigned int ng12[] = {216U, 0U};
static unsigned int ng13[] = {48U, 0U};
static unsigned int ng14[] = {64U, 0U};
static unsigned int ng15[] = {96U, 0U};
static unsigned int ng16[] = {63U, 0U};
static unsigned int ng17[] = {175U, 0U};
static unsigned int ng18[] = {192U, 0U};
static unsigned int ng19[] = {239U, 0U};



static void Initial_27_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);

LAB4:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(130, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(150, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB44:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB46:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB47:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB48:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB49:    xsi_set_current_line(164, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB50:    xsi_set_current_line(166, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB52:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB53:    xsi_set_current_line(174, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    xsi_set_current_line(176, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB55:    xsi_set_current_line(178, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB56:    xsi_set_current_line(181, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB57:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB58:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB59:    xsi_set_current_line(188, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB60:    xsi_set_current_line(190, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB61:    xsi_set_current_line(193, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB62:    xsi_set_current_line(195, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB63:    xsi_set_current_line(198, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB64:    xsi_set_current_line(200, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB65:    xsi_set_current_line(202, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB66:    xsi_set_current_line(205, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB67:    xsi_set_current_line(207, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB68:    xsi_set_current_line(210, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB69:    xsi_set_current_line(212, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB70:    xsi_set_current_line(214, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB71:    xsi_set_current_line(217, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}

static void Always_220_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 3224);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(221, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}


extern void work_m_00000000001846029727_3270986134_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Always_220_1};
	xsi_register_didat("work_m_00000000001846029727_3270986134", "isim/t_Main_isim_beh.exe.sim/work/m_00000000001846029727_3270986134.didat");
	xsi_register_executes(pe);
}
