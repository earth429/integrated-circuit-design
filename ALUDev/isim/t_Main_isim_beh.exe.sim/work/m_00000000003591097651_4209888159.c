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
static const char *ng0 = "C:/Code/Kosen/4th/Verilog/ALUDev/DispSelector.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};



static int sp_sel(char *t1, char *t2)
{
    char t8[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t0 = 1;
    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t3 = (t1 + 2520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 1, t6, 1);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 1, t3, 1);
    if (t7 == 1)
        goto LAB6;

LAB7:
LAB8:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(31, ng0);
    t9 = (t1 + 2360);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t8, 0, 8);
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 0);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 15U);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = (t1 + 2200);
    xsi_vlogvar_assign_value(t20, t8, 0, 0, 4);
    goto LAB8;

LAB6:    xsi_set_current_line(32, ng0);
    t4 = (t1 + 2360);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    memset(t8, 0, 8);
    t10 = (t8 + 4);
    t11 = (t9 + 4);
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 4);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t11);
    t17 = (t16 >> 4);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 15U);
    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 & 15U);
    t12 = (t1 + 2200);
    xsi_vlogvar_assign_value(t12, t8, 0, 0, 4);
    goto LAB8;

}

static void Cont_37_0(char *t0)
{
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 3440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1640U);
    t4 = *((char **)t2);
    t2 = (t0 + 3248);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t2, 0, t0, t5, 0, 0);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 8);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);

LAB4:    t9 = (t0 + 3344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB6;

LAB5:    t10 = (t0 + 3344);
    t18 = *((char **)t10);
    t10 = (t0 + 2200);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 848);
    t23 = (t0 + 3248);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 3840);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t29, 0, 8);
    t30 = 15U;
    t31 = t30;
    t32 = (t21 + 4);
    t33 = *((unsigned int *)t21);
    t30 = (t30 & t33);
    t34 = *((unsigned int *)t32);
    t31 = (t31 & t34);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 | t30);
    t37 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t37 | t31);
    xsi_driver_vfirst_trans(t25, 0, 3);
    t38 = (t0 + 3760);
    *((int *)t38) = 1;

LAB1:    return;
LAB6:    t9 = (t0 + 3440U);
    *((char **)t9) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000003591097651_4209888159_init()
{
	static char *pe[] = {(void *)Cont_37_0};
	static char *se[] = {(void *)sp_sel};
	xsi_register_didat("work_m_00000000003591097651_4209888159", "isim/t_Main_isim_beh.exe.sim/work/m_00000000003591097651_4209888159.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
