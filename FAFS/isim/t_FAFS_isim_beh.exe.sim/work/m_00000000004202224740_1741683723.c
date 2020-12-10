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
static const char *ng0 = "C:/Code/Kosen/4th/Verilog/report/FAFS/t_FAFS.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {13U, 0U};
static unsigned int ng15[] = {14U, 0U};
static unsigned int ng16[] = {15U, 0U};



static void Initial_43_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2088);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2088);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 1, 0, 1);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t3, 2, 0, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t3, 3, 0, 1);
    goto LAB1;

}


extern void work_m_00000000004202224740_1741683723_init()
{
	static char *pe[] = {(void *)Initial_43_0};
	xsi_register_didat("work_m_00000000004202224740_1741683723", "isim/t_FAFS_isim_beh.exe.sim/work/m_00000000004202224740_1741683723.didat");
	xsi_register_executes(pe);
}
