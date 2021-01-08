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
static const char *ng0 = "C:/Code/Kosen/4th/Verilog/SevenSegDev/Decoder8.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {192U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {249U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {164U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {176U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {153U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {146U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {130U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {248U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {128U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {144U, 0U};
static unsigned int ng21[] = {255U, 0U};



static int sp_DECORDER(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t3 = (t1 + 2200);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng15)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng17)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng19)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t1 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);

LAB26:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(31, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 2040);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    goto LAB26;

LAB6:    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 2040);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB26;

LAB8:    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 2040);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB26;

LAB10:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 2040);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB26;

LAB12:    xsi_set_current_line(35, ng0);
    t4 = ((char*)((ng10)));
    t6 = (t1 + 2040);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB26;

LAB14:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng12)));
    t6 = (t1 + 2040);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB26;

LAB16:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng14)));
    t6 = (t1 + 2040);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB26;

LAB18:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng16)));
    t6 = (t1 + 2040);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB26;

LAB20:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng18)));
    t6 = (t1 + 2040);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB26;

LAB22:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng20)));
    t6 = (t1 + 2040);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB26;

}

static void Cont_25_0(char *t0)
{
    char t19[8];
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
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 3120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 2928);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    t6 = (t0 + 2200);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 4);

LAB4:    t7 = (t0 + 3024);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);
    if (t15 != 0)
        goto LAB6;

LAB5:    t8 = (t0 + 3024);
    t16 = *((char **)t8);
    t8 = (t0 + 2040);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    t20 = (t0 + 848);
    t21 = (t0 + 2928);
    t22 = 0;
    xsi_delete_subprogram_invocation(t20, t16, t0, t21, t22);
    t23 = (t0 + 3520);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 255U;
    t29 = t28;
    t30 = (t19 + 4);
    t31 = *((unsigned int *)t19);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 7);
    t36 = (t0 + 3440);
    *((int *)t36) = 1;

LAB1:    return;
LAB6:    t7 = (t0 + 3120U);
    *((char **)t7) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000003549275105_4260226045_init()
{
	static char *pe[] = {(void *)Cont_25_0};
	static char *se[] = {(void *)sp_DECORDER};
	xsi_register_didat("work_m_00000000003549275105_4260226045", "isim/t_Decoder8_isim_beh.exe.sim/work/m_00000000003549275105_4260226045.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
