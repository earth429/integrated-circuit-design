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
static const char *ng0 = "C:/Code/Kosen/4th/Verilog/ALUDev/ALU.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {3U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {8U, 0U};
static unsigned int ng9[] = {9U, 0U};
static unsigned int ng10[] = {10U, 0U};
static unsigned int ng11[] = {11U, 0U};
static unsigned int ng12[] = {14U, 0U};
static unsigned int ng13[] = {13U, 0U};
static unsigned int ng14[] = {15U, 0U};



static void Always_32_0(char *t0)
{
    char t6[8];
    char t10[8];
    char t24[8];
    char t28[8];
    char t36[8];
    char t76[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
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
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB9:    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t11) != 0)
        goto LAB13;

LAB14:    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB15;

LAB16:    memcpy(t36, t10, 8);

LAB17:    t68 = (t36 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB35;

LAB34:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB37;

LAB36:    *((unsigned int *)t6) = 1;

LAB37:    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t8) != 0)
        goto LAB41;

LAB42:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB43;

LAB44:    memcpy(t36, t10, 8);

LAB45:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB63;

LAB62:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB65;

LAB64:    *((unsigned int *)t6) = 1;

LAB65:    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t8) != 0)
        goto LAB69;

LAB70:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB71;

LAB72:    memcpy(t36, t10, 8);

LAB73:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB91;

LAB90:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB91;

LAB94:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB93;

LAB92:    *((unsigned int *)t6) = 1;

LAB93:    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t8) != 0)
        goto LAB97;

LAB98:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB99;

LAB100:    memcpy(t36, t10, 8);

LAB101:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB121;

LAB120:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB121;

LAB124:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB123;

LAB122:    *((unsigned int *)t6) = 1;

LAB123:    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t8) != 0)
        goto LAB127;

LAB128:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB129;

LAB130:    memcpy(t36, t10, 8);

LAB131:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB144;

LAB145:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB152;

LAB151:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB152;

LAB155:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB154;

LAB153:    *((unsigned int *)t6) = 1;

LAB154:    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB156;

LAB157:    if (*((unsigned int *)t8) != 0)
        goto LAB158;

LAB159:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB160;

LAB161:    memcpy(t36, t10, 8);

LAB162:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB175;

LAB176:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB183;

LAB182:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB183;

LAB186:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB185;

LAB184:    *((unsigned int *)t6) = 1;

LAB185:    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB187;

LAB188:    if (*((unsigned int *)t8) != 0)
        goto LAB189;

LAB190:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB191;

LAB192:    memcpy(t36, t10, 8);

LAB193:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB206;

LAB207:
LAB208:
LAB177:
LAB146:
LAB116:
LAB88:
LAB60:
LAB32:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t10) = 1;
    goto LAB14;

LAB13:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB15:    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB19;

LAB18:    t26 = (t22 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t23) > *((unsigned int *)t22))
        goto LAB21;

LAB20:    *((unsigned int *)t24) = 1;

LAB21:    memset(t28, 0, 8);
    t29 = (t24 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t24);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t29) != 0)
        goto LAB25;

LAB26:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t10 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t27 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t28) = 1;
    goto LAB26;

LAB25:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB26;

LAB27:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t10 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB29;

LAB30:    xsi_set_current_line(36, ng0);

LAB33:    xsi_set_current_line(37, ng0);
    t74 = (t0 + 1368U);
    t75 = *((char **)t74);
    t74 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t74, t75, 0, 0, 4, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB32;

LAB35:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t10) = 1;
    goto LAB42;

LAB41:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB42;

LAB43:    t17 = (t0 + 1208U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng5)));
    memset(t24, 0, 8);
    t22 = (t18 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB47;

LAB46:    t23 = (t17 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t18) > *((unsigned int *)t17))
        goto LAB49;

LAB48:    *((unsigned int *)t24) = 1;

LAB49:    memset(t28, 0, 8);
    t26 = (t24 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t24);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t26) != 0)
        goto LAB53;

LAB54:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t10 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB45;

LAB47:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB49;

LAB51:    *((unsigned int *)t28) = 1;
    goto LAB54;

LAB53:    t27 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB54;

LAB55:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t10 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB57;

LAB58:    xsi_set_current_line(43, ng0);

LAB61:    xsi_set_current_line(44, ng0);
    t51 = (t0 + 1368U);
    t68 = *((char **)t51);
    t51 = (t0 + 1528U);
    t74 = *((char **)t51);
    memset(t76, 0, 8);
    xsi_vlog_unsigned_add(t76, 5, t68, 4, t74, 4);
    t51 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t51, t76, 0, 0, 4, 0LL);
    t75 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t75, t76, 4, 0, 1, 0LL);
    goto LAB60;

LAB63:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB65;

LAB67:    *((unsigned int *)t10) = 1;
    goto LAB70;

LAB69:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB70;

LAB71:    t17 = (t0 + 1208U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng7)));
    memset(t24, 0, 8);
    t22 = (t18 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB75;

LAB74:    t23 = (t17 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB75;

LAB78:    if (*((unsigned int *)t18) > *((unsigned int *)t17))
        goto LAB77;

LAB76:    *((unsigned int *)t24) = 1;

LAB77:    memset(t28, 0, 8);
    t26 = (t24 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t24);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t26) != 0)
        goto LAB81;

LAB82:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t10 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB73;

LAB75:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB77;

LAB79:    *((unsigned int *)t28) = 1;
    goto LAB82;

LAB81:    t27 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB82;

LAB83:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t10 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB85;

LAB86:    xsi_set_current_line(49, ng0);

LAB89:    xsi_set_current_line(50, ng0);
    t51 = (t0 + 1368U);
    t68 = *((char **)t51);
    t51 = (t0 + 1528U);
    t74 = *((char **)t51);
    memset(t76, 0, 8);
    xsi_vlog_unsigned_minus(t76, 5, t68, 4, t74, 4);
    t51 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t51, t76, 0, 0, 4, 0LL);
    t75 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t75, t76, 4, 0, 1, 0LL);
    goto LAB88;

LAB91:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB93;

LAB95:    *((unsigned int *)t10) = 1;
    goto LAB98;

LAB97:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB98;

LAB99:    t17 = (t0 + 1208U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng9)));
    memset(t24, 0, 8);
    t22 = (t18 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB103;

LAB102:    t23 = (t17 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB103;

LAB106:    if (*((unsigned int *)t18) > *((unsigned int *)t17))
        goto LAB105;

LAB104:    *((unsigned int *)t24) = 1;

LAB105:    memset(t28, 0, 8);
    t26 = (t24 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t24);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t26) != 0)
        goto LAB109;

LAB110:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t10 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB111;

LAB112:
LAB113:    goto LAB101;

LAB103:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB105;

LAB107:    *((unsigned int *)t28) = 1;
    goto LAB110;

LAB109:    t27 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB110;

LAB111:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t10 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB113;

LAB114:    xsi_set_current_line(55, ng0);

LAB117:    xsi_set_current_line(56, ng0);
    t51 = (t0 + 1368U);
    t68 = *((char **)t51);
    memset(t76, 0, 8);
    t51 = (t76 + 4);
    t74 = (t68 + 4);
    t77 = *((unsigned int *)t68);
    t78 = (~(t77));
    *((unsigned int *)t76) = t78;
    *((unsigned int *)t51) = 0;
    if (*((unsigned int *)t74) != 0)
        goto LAB119;

LAB118:    t83 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t83 & 15U);
    t84 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t84 & 15U);
    t75 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t75, t76, 0, 0, 4, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB116;

LAB119:    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t74);
    *((unsigned int *)t76) = (t79 | t80);
    t81 = *((unsigned int *)t51);
    t82 = *((unsigned int *)t74);
    *((unsigned int *)t51) = (t81 | t82);
    goto LAB118;

LAB121:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB123;

LAB125:    *((unsigned int *)t10) = 1;
    goto LAB128;

LAB127:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB128;

LAB129:    t17 = (t0 + 1208U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng11)));
    memset(t24, 0, 8);
    t22 = (t18 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB133;

LAB132:    t23 = (t17 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB133;

LAB136:    if (*((unsigned int *)t18) > *((unsigned int *)t17))
        goto LAB135;

LAB134:    *((unsigned int *)t24) = 1;

LAB135:    memset(t28, 0, 8);
    t26 = (t24 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t24);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t26) != 0)
        goto LAB139;

LAB140:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t10 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB141;

LAB142:
LAB143:    goto LAB131;

LAB133:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB135;

LAB137:    *((unsigned int *)t28) = 1;
    goto LAB140;

LAB139:    t27 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB140;

LAB141:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t10 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB143;

LAB144:    xsi_set_current_line(62, ng0);

LAB147:    xsi_set_current_line(63, ng0);
    t51 = (t0 + 1368U);
    t68 = *((char **)t51);
    t51 = (t0 + 1528U);
    t74 = *((char **)t51);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t74);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t51 = (t68 + 4);
    t75 = (t74 + 4);
    t85 = (t76 + 4);
    t80 = *((unsigned int *)t51);
    t81 = *((unsigned int *)t75);
    t82 = (t80 | t81);
    *((unsigned int *)t85) = t82;
    t83 = *((unsigned int *)t85);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB148;

LAB149:
LAB150:    t102 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t102, t76, 0, 0, 4, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB146;

LAB148:    t86 = *((unsigned int *)t76);
    t87 = *((unsigned int *)t85);
    *((unsigned int *)t76) = (t86 | t87);
    t88 = (t68 + 4);
    t89 = (t74 + 4);
    t90 = *((unsigned int *)t88);
    t91 = (~(t90));
    t92 = *((unsigned int *)t68);
    t93 = (t92 & t91);
    t94 = *((unsigned int *)t89);
    t95 = (~(t94));
    t96 = *((unsigned int *)t74);
    t97 = (t96 & t95);
    t98 = (~(t93));
    t99 = (~(t97));
    t100 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t100 & t98);
    t101 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t101 & t99);
    goto LAB150;

LAB152:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB154;

LAB156:    *((unsigned int *)t10) = 1;
    goto LAB159;

LAB158:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB159;

LAB160:    t17 = (t0 + 1208U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng13)));
    memset(t24, 0, 8);
    t22 = (t18 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB164;

LAB163:    t23 = (t17 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB164;

LAB167:    if (*((unsigned int *)t18) > *((unsigned int *)t17))
        goto LAB166;

LAB165:    *((unsigned int *)t24) = 1;

LAB166:    memset(t28, 0, 8);
    t26 = (t24 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t24);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB168;

LAB169:    if (*((unsigned int *)t26) != 0)
        goto LAB170;

LAB171:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t10 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB172;

LAB173:
LAB174:    goto LAB162;

LAB164:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB166;

LAB168:    *((unsigned int *)t28) = 1;
    goto LAB171;

LAB170:    t27 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB171;

LAB172:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t10 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB174;

LAB175:    xsi_set_current_line(69, ng0);

LAB178:    xsi_set_current_line(70, ng0);
    t51 = (t0 + 1368U);
    t68 = *((char **)t51);
    t51 = (t0 + 1528U);
    t74 = *((char **)t51);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t74);
    t79 = (t77 & t78);
    *((unsigned int *)t76) = t79;
    t51 = (t68 + 4);
    t75 = (t74 + 4);
    t85 = (t76 + 4);
    t80 = *((unsigned int *)t51);
    t81 = *((unsigned int *)t75);
    t82 = (t80 | t81);
    *((unsigned int *)t85) = t82;
    t83 = *((unsigned int *)t85);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB179;

LAB180:
LAB181:    t102 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t102, t76, 0, 0, 4, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB177;

LAB179:    t86 = *((unsigned int *)t76);
    t87 = *((unsigned int *)t85);
    *((unsigned int *)t76) = (t86 | t87);
    t88 = (t68 + 4);
    t89 = (t74 + 4);
    t90 = *((unsigned int *)t68);
    t91 = (~(t90));
    t92 = *((unsigned int *)t88);
    t94 = (~(t92));
    t95 = *((unsigned int *)t74);
    t96 = (~(t95));
    t98 = *((unsigned int *)t89);
    t99 = (~(t98));
    t93 = (t91 & t94);
    t97 = (t96 & t99);
    t100 = (~(t93));
    t101 = (~(t97));
    t103 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t103 & t100);
    t104 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t104 & t101);
    t105 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t105 & t100);
    t106 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t106 & t101);
    goto LAB181;

LAB183:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB185;

LAB187:    *((unsigned int *)t10) = 1;
    goto LAB190;

LAB189:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB190;

LAB191:    t17 = (t0 + 1208U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng14)));
    memset(t24, 0, 8);
    t22 = (t18 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB195;

LAB194:    t23 = (t17 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB195;

LAB198:    if (*((unsigned int *)t18) > *((unsigned int *)t17))
        goto LAB197;

LAB196:    *((unsigned int *)t24) = 1;

LAB197:    memset(t28, 0, 8);
    t26 = (t24 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t24);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB199;

LAB200:    if (*((unsigned int *)t26) != 0)
        goto LAB201;

LAB202:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t10 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB203;

LAB204:
LAB205:    goto LAB193;

LAB195:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB197;

LAB199:    *((unsigned int *)t28) = 1;
    goto LAB202;

LAB201:    t27 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB202;

LAB203:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t10 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB205;

LAB206:    xsi_set_current_line(76, ng0);

LAB209:    xsi_set_current_line(77, ng0);
    t51 = (t0 + 1368U);
    t68 = *((char **)t51);
    t51 = (t0 + 1528U);
    t74 = *((char **)t51);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t74);
    t79 = (t77 ^ t78);
    *((unsigned int *)t76) = t79;
    t51 = (t68 + 4);
    t75 = (t74 + 4);
    t85 = (t76 + 4);
    t80 = *((unsigned int *)t51);
    t81 = *((unsigned int *)t75);
    t82 = (t80 | t81);
    *((unsigned int *)t85) = t82;
    t83 = *((unsigned int *)t85);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB210;

LAB211:
LAB212:    t88 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t88, t76, 0, 0, 4, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB208;

LAB210:    t86 = *((unsigned int *)t76);
    t87 = *((unsigned int *)t85);
    *((unsigned int *)t76) = (t86 | t87);
    goto LAB212;

}


extern void work_m_00000000002533477800_0886308060_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000002533477800_0886308060", "isim/t_Main_isim_beh.exe.sim/work/m_00000000002533477800_0886308060.didat");
	xsi_register_executes(pe);
}
