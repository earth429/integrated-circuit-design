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
static const char *ng0 = "C:/Code/Kosen/4th/Verilog/ALUDev/Selector.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};



static int sp_sel(char *t1, char *t2)
{
    char t8[8];
    char t14[8];
    char t28[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    t0 = 1;
    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    t3 = (t1 + 3160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB10;

LAB11:
LAB12:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(40, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t1 + 3320);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t8, 10, 10, 2U, t12, 8, t9, 2);
    t13 = (t1 + 3000);
    xsi_vlogvar_assign_value(t13, t8, 0, 0, 10);
    goto LAB12;

LAB6:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 3320);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t8, 10, 10, 2U, t10, 8, t4, 2);
    t11 = (t1 + 3000);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 10);
    goto LAB12;

LAB8:    xsi_set_current_line(42, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 3480);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlogtype_concat(t8, 10, 10, 3U, t11, 4, t10, 4, t4, 2);
    t12 = (t1 + 3000);
    xsi_vlogvar_assign_value(t12, t8, 0, 0, 10);
    goto LAB12;

LAB10:    xsi_set_current_line(43, ng0);
    t4 = (t1 + 3960);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    memset(t14, 0, 8);
    t10 = (t9 + 4);
    t15 = *((unsigned int *)t10);
    t16 = (~(t15));
    t17 = *((unsigned int *)t9);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t10) == 0)
        goto LAB13;

LAB15:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;

LAB16:    t12 = (t14 + 4);
    t13 = (t9 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (~(t20));
    *((unsigned int *)t14) = t21;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB18;

LAB17:    t26 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t26 & 1U);
    t27 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t27 & 1U);
    t29 = (t1 + 3800);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t28, 0, 8);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t32) == 0)
        goto LAB19;

LAB21:    t38 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t38) = 1;

LAB22:    t39 = (t28 + 4);
    t40 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = (~(t41));
    *((unsigned int *)t28) = t42;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB24;

LAB23:    t47 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t47 & 1U);
    t48 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t48 & 1U);
    t49 = (t1 + 3640);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng1)));
    xsi_vlogtype_concat(t8, 10, 10, 4U, t52, 4, t51, 4, t28, 1, t14, 1);
    t53 = (t1 + 3000);
    xsi_vlogvar_assign_value(t53, t8, 0, 0, 10);
    goto LAB12;

LAB13:    *((unsigned int *)t14) = 1;
    goto LAB16;

LAB18:    t22 = *((unsigned int *)t14);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t14) = (t22 | t23);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t24 | t25);
    goto LAB17;

LAB19:    *((unsigned int *)t28) = 1;
    goto LAB22;

LAB24:    t43 = *((unsigned int *)t28);
    t44 = *((unsigned int *)t40);
    *((unsigned int *)t28) = (t43 | t44);
    t45 = *((unsigned int *)t39);
    t46 = *((unsigned int *)t40);
    *((unsigned int *)t39) = (t45 | t46);
    goto LAB23;

}

static void Cont_48_0(char *t0)
{
    char t29[8];
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
    char *t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 4880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1640U);
    t4 = *((char **)t2);
    t2 = (t0 + 1800U);
    t5 = *((char **)t2);
    t2 = (t0 + 1960U);
    t6 = *((char **)t2);
    t2 = (t0 + 2120U);
    t7 = *((char **)t2);
    t2 = (t0 + 2280U);
    t8 = *((char **)t2);
    t2 = (t0 + 4688);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t2, 0, t0, t9, 0, 0);
    t11 = (t0 + 3160);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 2);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3480);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 4);
    t14 = (t0 + 3640);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 4);
    t15 = (t0 + 3800);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 1);
    t16 = (t0 + 3960);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 1);

LAB4:    t17 = (t0 + 4784);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t25 != 0)
        goto LAB6;

LAB5:    t18 = (t0 + 4784);
    t26 = *((char **)t18);
    t18 = (t0 + 3000);
    t27 = (t18 + 56U);
    t28 = *((char **)t27);
    memcpy(t29, t28, 8);
    t30 = (t0 + 848);
    t31 = (t0 + 4688);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    t33 = (t0 + 5344);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t37, 0, 8);
    t38 = 3U;
    t39 = t38;
    t40 = (t29 + 4);
    t41 = *((unsigned int *)t29);
    t38 = (t38 & t41);
    t42 = *((unsigned int *)t40);
    t39 = (t39 & t42);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 | t38);
    t45 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t45 | t39);
    xsi_driver_vfirst_trans(t33, 0, 1);
    t46 = (t0 + 5280);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t50, 0, 8);
    t51 = 1020U;
    t52 = t51;
    t53 = (t29 + 4);
    t54 = *((unsigned int *)t29);
    t51 = (t51 & t54);
    t55 = *((unsigned int *)t53);
    t52 = (t52 & t55);
    t51 = (t51 >> 2);
    t52 = (t52 >> 2);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 | t51);
    t58 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t58 | t52);
    xsi_driver_vfirst_trans(t46, 0, 7);
    t59 = (t0 + 5200);
    *((int *)t59) = 1;

LAB1:    return;
LAB6:    t17 = (t0 + 4880U);
    *((char **)t17) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000000698343267_3642967255_init()
{
	static char *pe[] = {(void *)Cont_48_0};
	static char *se[] = {(void *)sp_sel};
	xsi_register_didat("work_m_00000000000698343267_3642967255", "isim/t_Main_isim_beh.exe.sim/work/m_00000000000698343267_3642967255.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
