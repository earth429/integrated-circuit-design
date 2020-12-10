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
static const char *ng0 = "C:/Code/Kosen/4th/Verilog/report/FAFS/FAFS.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static int sp_SELECT(char *t1, char *t2)
{
    char t8[8];
    char t9[8];
    char t30[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t0 = 1;
    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    t3 = (t1 + 4120);
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
LAB4:    xsi_set_current_line(36, ng0);
    t10 = (t1 + 3640);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t9, 0, 8);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t13) == 0)
        goto LAB9;

LAB11:    t19 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t19) = 1;

LAB12:    t20 = (t9 + 4);
    t21 = (t12 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    *((unsigned int *)t9) = t23;
    *((unsigned int *)t20) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB14;

LAB13:    t28 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t28 & 1U);
    t29 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t29 & 1U);
    t31 = (t1 + 3480);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t34) == 0)
        goto LAB15;

LAB17:    t40 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t40) = 1;

LAB18:    t41 = (t30 + 4);
    t42 = (t33 + 4);
    t43 = *((unsigned int *)t33);
    t44 = (~(t43));
    *((unsigned int *)t30) = t44;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB20;

LAB19:    t49 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t49 & 1U);
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 & 1U);
    xsi_vlogtype_concat(t8, 2, 2, 2U, t30, 1, t9, 1);
    t51 = (t1 + 3320);
    xsi_vlogvar_assign_value(t51, t8, 0, 0, 2);
    goto LAB8;

LAB6:    xsi_set_current_line(37, ng0);
    t4 = (t1 + 3960);
    t6 = (t4 + 56U);
    t10 = *((char **)t6);
    memset(t9, 0, 8);
    t11 = (t10 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (~(t14));
    t16 = *((unsigned int *)t10);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t11) == 0)
        goto LAB21;

LAB23:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;

LAB24:    t13 = (t9 + 4);
    t19 = (t10 + 4);
    t22 = *((unsigned int *)t10);
    t23 = (~(t22));
    *((unsigned int *)t9) = t23;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB26;

LAB25:    t28 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t28 & 1U);
    t29 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t29 & 1U);
    t20 = (t1 + 3800);
    t21 = (t20 + 56U);
    t31 = *((char **)t21);
    memset(t30, 0, 8);
    t32 = (t31 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (~(t35));
    t37 = *((unsigned int *)t31);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t32) == 0)
        goto LAB27;

LAB29:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;

LAB30:    t34 = (t30 + 4);
    t40 = (t31 + 4);
    t43 = *((unsigned int *)t31);
    t44 = (~(t43));
    *((unsigned int *)t30) = t44;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB32;

LAB31:    t49 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t49 & 1U);
    t50 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t50 & 1U);
    xsi_vlogtype_concat(t8, 2, 2, 2U, t30, 1, t9, 1);
    t41 = (t1 + 3320);
    xsi_vlogvar_assign_value(t41, t8, 0, 0, 2);
    goto LAB8;

LAB9:    *((unsigned int *)t9) = 1;
    goto LAB12;

LAB14:    t24 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t21);
    *((unsigned int *)t9) = (t24 | t25);
    t26 = *((unsigned int *)t20);
    t27 = *((unsigned int *)t21);
    *((unsigned int *)t20) = (t26 | t27);
    goto LAB13;

LAB15:    *((unsigned int *)t30) = 1;
    goto LAB18;

LAB20:    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t42);
    *((unsigned int *)t30) = (t45 | t46);
    t47 = *((unsigned int *)t41);
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t47 | t48);
    goto LAB19;

LAB21:    *((unsigned int *)t9) = 1;
    goto LAB24;

LAB26:    t24 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t9) = (t24 | t25);
    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t26 | t27);
    goto LAB25;

LAB27:    *((unsigned int *)t30) = 1;
    goto LAB30;

LAB32:    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t40);
    *((unsigned int *)t30) = (t45 | t46);
    t47 = *((unsigned int *)t34);
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t47 | t48);
    goto LAB31;

}

static void Cont_42_0(char *t0)
{
    char t27[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 5040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2440U);
    t3 = *((char **)t2);
    t2 = (t0 + 2600U);
    t4 = *((char **)t2);
    t2 = (t0 + 2760U);
    t5 = *((char **)t2);
    t2 = (t0 + 2920U);
    t6 = *((char **)t2);
    t2 = (t0 + 1960U);
    t7 = *((char **)t2);
    t2 = (t0 + 4848);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    t10 = (t0 + 3480);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 3640);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 3800);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 1);
    t13 = (t0 + 3960);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);
    t14 = (t0 + 4120);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 1);

LAB4:    t15 = (t0 + 4944);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t23 != 0)
        goto LAB6;

LAB5:    t16 = (t0 + 4944);
    t24 = *((char **)t16);
    t16 = (t0 + 3320);
    t25 = (t16 + 56U);
    t26 = *((char **)t25);
    memcpy(t27, t26, 8);
    t28 = (t0 + 848);
    t29 = (t0 + 4848);
    t30 = 0;
    xsi_delete_subprogram_invocation(t28, t24, t0, t29, t30);
    t31 = (t0 + 5504);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t27 + 4);
    t39 = *((unsigned int *)t27);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 5440);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 2U;
    t50 = t49;
    t51 = (t27 + 4);
    t52 = *((unsigned int *)t27);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t49 = (t49 >> 1);
    t50 = (t50 >> 1);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 5360);
    *((int *)t57) = 1;

LAB1:    return;
LAB6:    t15 = (t0 + 5040U);
    *((char **)t15) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000002707763810_0335847308_init()
{
	static char *pe[] = {(void *)Cont_42_0};
	static char *se[] = {(void *)sp_SELECT};
	xsi_register_didat("work_m_00000000002707763810_0335847308", "isim/t_FAFS_isim_beh.exe.sim/work/m_00000000002707763810_0335847308.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
