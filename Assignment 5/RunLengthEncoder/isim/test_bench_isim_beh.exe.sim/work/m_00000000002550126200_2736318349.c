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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Dropbox/Works and collections/Elec/EE-705-labs/Assignment 5/RunLengthEncoder/RunLengthEncoder.v";
static int ng1[] = {0, 0};
static int ng2[] = {3, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {255, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {27U, 0U};
static int ng7[] = {2, 0};



static void Initial_55_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(55, ng0);

LAB2:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t1, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 2, 0LL);

LAB1:    return;
}

static void Always_61_1(char *t0)
{
    char t11[8];
    char t35[8];
    char t49[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;

LAB0:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5992);
    *((int *)t2) = 1;
    t3 = (t0 + 5456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 2816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(63, ng0);

LAB12:    xsi_set_current_line(64, ng0);
    t7 = (t0 + 1936U);
    t10 = *((char **)t7);
    t7 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 8, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB11;

LAB9:    xsi_set_current_line(69, ng0);

LAB13:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1936U);
    t4 = *((char **)t2);
    t2 = (t0 + 3456);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t11, 0, 8);
    t8 = (t4 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB17;

LAB14:    if (t21 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t11) = 1;

LAB17:    t25 = (t11 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(95, ng0);

LAB32:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3776);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3936);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB20:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB36;

LAB33:    if (t21 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t11) = 1;

LAB36:    t8 = (t11 + 4);
    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(112, ng0);

LAB41:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB39:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB45;

LAB42:    if (t21 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t11) = 1;

LAB45:    t24 = (t11 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB46;

LAB47:
LAB48:    goto LAB11;

LAB16:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(72, ng0);

LAB21:    xsi_set_current_line(74, ng0);
    t31 = (t0 + 3616);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng4)));
    memset(t35, 0, 8);
    t36 = (t33 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB23;

LAB22:    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t33) < *((unsigned int *)t34))
        goto LAB24;

LAB25:    t39 = (t35 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t35);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(81, ng0);

LAB31:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3776);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3936);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB29:    goto LAB20;

LAB23:    t38 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t35) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(74, ng0);

LAB30:    xsi_set_current_line(75, ng0);
    t45 = (t0 + 3616);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng5)));
    memset(t49, 0, 8);
    xsi_vlog_unsigned_add(t49, 32, t47, 8, t48, 32);
    t50 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t50, t49, 0, 0, 8, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB29;

LAB35:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(109, ng0);

LAB40:    xsi_set_current_line(110, ng0);
    t10 = ((char*)((ng5)));
    t24 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t24, t10, 0, 0, 1, 0LL);
    goto LAB39;

LAB44:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(116, ng0);

LAB49:    xsi_set_current_line(117, ng0);
    t25 = (t0 + 2096U);
    t31 = *((char **)t25);
    t25 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t25, t31, 0, 0, 8, 0LL);
    goto LAB48;

}

static void Always_128_2(char *t0)
{
    char t8[8];
    char t32[8];
    char t48[8];
    char t64[8];
    char t80[8];
    char t88[8];
    char t130[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;

LAB0:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 6008);
    *((int *)t2) = 1;
    t3 = (t0 + 5704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(128, ng0);

LAB5:    xsi_set_current_line(129, ng0);
    t4 = (t0 + 4256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 2, t7, 32);
    t9 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 2, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB9;

LAB6:    if (t19 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(132, ng0);

LAB13:    xsi_set_current_line(135, ng0);
    t28 = (t0 + 3936);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng5)));
    memset(t32, 0, 8);
    t33 = (t30 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB17;

LAB14:    if (t44 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t32) = 1;

LAB17:    memset(t48, 0, 8);
    t49 = (t32 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t32);
    t53 = (t52 & t51);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t49) != 0)
        goto LAB20;

LAB21:    t56 = (t48 + 4);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t56);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB22;

LAB23:    memcpy(t88, t48, 8);

LAB24:    t120 = (t88 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (~(t121));
    t123 = *((unsigned int *)t88);
    t124 = (t123 & t122);
    t125 = (t124 != 0);
    if (t125 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB59;

LAB56:    if (t19 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t8) = 1;

LAB59:    memset(t32, 0, 8);
    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t22) != 0)
        goto LAB62;

LAB63:    t29 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB64;

LAB65:    memcpy(t80, t32, 8);

LAB66:    t79 = (t80 + 4);
    t99 = *((unsigned int *)t79);
    t100 = (~(t99));
    t101 = *((unsigned int *)t80);
    t104 = (t101 & t100);
    t105 = (t104 != 0);
    if (t105 > 0)
        goto LAB78;

LAB79:
LAB80:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 3936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB107;

LAB106:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB107;

LAB110:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB108;

LAB109:    memset(t32, 0, 8);
    t22 = (t8 + 4);
    t10 = *((unsigned int *)t22);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t22) != 0)
        goto LAB113;

LAB114:    t29 = (t32 + 4);
    t15 = *((unsigned int *)t32);
    t16 = (!(t15));
    t17 = *((unsigned int *)t29);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB115;

LAB116:    memcpy(t80, t32, 8);

LAB117:    t79 = (t80 + 4);
    t76 = *((unsigned int *)t79);
    t77 = (~(t76));
    t78 = *((unsigned int *)t80);
    t82 = (t78 & t77);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB129;

LAB130:
LAB131:    goto LAB12;

LAB16:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t48) = 1;
    goto LAB21;

LAB20:    t55 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB21;

LAB22:    t60 = (t0 + 3776);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t63 = ((char*)((ng6)));
    memset(t64, 0, 8);
    t65 = (t62 + 4);
    t66 = (t63 + 4);
    t67 = *((unsigned int *)t62);
    t68 = *((unsigned int *)t63);
    t69 = (t67 ^ t68);
    t70 = *((unsigned int *)t65);
    t71 = *((unsigned int *)t66);
    t72 = (t70 ^ t71);
    t73 = (t69 | t72);
    t74 = *((unsigned int *)t65);
    t75 = *((unsigned int *)t66);
    t76 = (t74 | t75);
    t77 = (~(t76));
    t78 = (t73 & t77);
    if (t78 != 0)
        goto LAB26;

LAB25:    if (t76 != 0)
        goto LAB27;

LAB28:    memset(t80, 0, 8);
    t81 = (t64 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t64);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t81) != 0)
        goto LAB31;

LAB32:    t89 = *((unsigned int *)t48);
    t90 = *((unsigned int *)t80);
    t91 = (t89 & t90);
    *((unsigned int *)t88) = t91;
    t92 = (t48 + 4);
    t93 = (t80 + 4);
    t94 = (t88 + 4);
    t95 = *((unsigned int *)t92);
    t96 = *((unsigned int *)t93);
    t97 = (t95 | t96);
    *((unsigned int *)t94) = t97;
    t98 = *((unsigned int *)t94);
    t99 = (t98 != 0);
    if (t99 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB26:    *((unsigned int *)t64) = 1;
    goto LAB28;

LAB27:    t79 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t80) = 1;
    goto LAB32;

LAB31:    t87 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB32;

LAB33:    t100 = *((unsigned int *)t88);
    t101 = *((unsigned int *)t94);
    *((unsigned int *)t88) = (t100 | t101);
    t102 = (t48 + 4);
    t103 = (t80 + 4);
    t104 = *((unsigned int *)t48);
    t105 = (~(t104));
    t106 = *((unsigned int *)t102);
    t107 = (~(t106));
    t108 = *((unsigned int *)t80);
    t109 = (~(t108));
    t110 = *((unsigned int *)t103);
    t111 = (~(t110));
    t112 = (t105 & t107);
    t113 = (t109 & t111);
    t114 = (~(t112));
    t115 = (~(t113));
    t116 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t116 & t114);
    t117 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t117 & t115);
    t118 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t118 & t114);
    t119 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t119 & t115);
    goto LAB35;

LAB36:    xsi_set_current_line(135, ng0);

LAB39:    xsi_set_current_line(136, ng0);
    t126 = (t0 + 4256);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    t129 = ((char*)((ng1)));
    memset(t130, 0, 8);
    t131 = (t128 + 4);
    t132 = (t129 + 4);
    t133 = *((unsigned int *)t128);
    t134 = *((unsigned int *)t129);
    t135 = (t133 ^ t134);
    t136 = *((unsigned int *)t131);
    t137 = *((unsigned int *)t132);
    t138 = (t136 ^ t137);
    t139 = (t135 | t138);
    t140 = *((unsigned int *)t131);
    t141 = *((unsigned int *)t132);
    t142 = (t140 | t141);
    t143 = (~(t142));
    t144 = (t139 & t143);
    if (t144 != 0)
        goto LAB43;

LAB40:    if (t142 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t130) = 1;

LAB43:    t146 = (t130 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t130);
    t150 = (t149 & t148);
    t151 = (t150 != 0);
    if (t151 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB51;

LAB48:    if (t19 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t8) = 1;

LAB51:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB52;

LAB53:
LAB54:
LAB46:    goto LAB38;

LAB42:    t145 = (t130 + 4);
    *((unsigned int *)t130) = 1;
    *((unsigned int *)t145) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(136, ng0);

LAB47:    xsi_set_current_line(137, ng0);
    t152 = ((char*)((ng5)));
    t153 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t153, t152, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    goto LAB46;

LAB50:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(140, ng0);

LAB55:    xsi_set_current_line(141, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB54;

LAB58:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t32) = 1;
    goto LAB63;

LAB62:    t28 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB63;

LAB64:    t30 = (t0 + 3776);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng6)));
    memset(t48, 0, 8);
    t47 = (t33 + 4);
    t49 = (t34 + 4);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t47);
    t42 = *((unsigned int *)t49);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t47);
    t46 = *((unsigned int *)t49);
    t50 = (t45 | t46);
    t51 = (~(t50));
    t52 = (t44 & t51);
    if (t52 != 0)
        goto LAB68;

LAB67:    if (t50 != 0)
        goto LAB69;

LAB70:    memset(t64, 0, 8);
    t56 = (t48 + 4);
    t53 = *((unsigned int *)t56);
    t54 = (~(t53));
    t57 = *((unsigned int *)t48);
    t58 = (t57 & t54);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t56) != 0)
        goto LAB73;

LAB74:    t67 = *((unsigned int *)t32);
    t68 = *((unsigned int *)t64);
    t69 = (t67 & t68);
    *((unsigned int *)t80) = t69;
    t61 = (t32 + 4);
    t62 = (t64 + 4);
    t63 = (t80 + 4);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t62);
    t72 = (t70 | t71);
    *((unsigned int *)t63) = t72;
    t73 = *((unsigned int *)t63);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB66;

LAB68:    *((unsigned int *)t48) = 1;
    goto LAB70;

LAB69:    t55 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t64) = 1;
    goto LAB74;

LAB73:    t60 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB74;

LAB75:    t75 = *((unsigned int *)t80);
    t76 = *((unsigned int *)t63);
    *((unsigned int *)t80) = (t75 | t76);
    t65 = (t32 + 4);
    t66 = (t64 + 4);
    t77 = *((unsigned int *)t32);
    t78 = (~(t77));
    t82 = *((unsigned int *)t65);
    t83 = (~(t82));
    t84 = *((unsigned int *)t64);
    t85 = (~(t84));
    t86 = *((unsigned int *)t66);
    t89 = (~(t86));
    t112 = (t78 & t83);
    t113 = (t85 & t89);
    t90 = (~(t112));
    t91 = (~(t113));
    t95 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t95 & t90);
    t96 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t96 & t91);
    t97 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t97 & t90);
    t98 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t98 & t91);
    goto LAB77;

LAB78:    xsi_set_current_line(146, ng0);

LAB81:    xsi_set_current_line(147, ng0);
    t81 = (t0 + 4256);
    t87 = (t81 + 56U);
    t92 = *((char **)t87);
    t93 = ((char*)((ng1)));
    memset(t88, 0, 8);
    t94 = (t92 + 4);
    t102 = (t93 + 4);
    t106 = *((unsigned int *)t92);
    t107 = *((unsigned int *)t93);
    t108 = (t106 ^ t107);
    t109 = *((unsigned int *)t94);
    t110 = *((unsigned int *)t102);
    t111 = (t109 ^ t110);
    t114 = (t108 | t111);
    t115 = *((unsigned int *)t94);
    t116 = *((unsigned int *)t102);
    t117 = (t115 | t116);
    t118 = (~(t117));
    t119 = (t114 & t118);
    if (t119 != 0)
        goto LAB85;

LAB82:    if (t117 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t88) = 1;

LAB85:    t120 = (t88 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (~(t121));
    t123 = *((unsigned int *)t88);
    t124 = (t123 & t122);
    t125 = (t124 != 0);
    if (t125 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB93;

LAB90:    if (t19 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t8) = 1;

LAB93:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB101;

LAB98:    if (t19 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t8) = 1;

LAB101:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB102;

LAB103:
LAB104:
LAB96:
LAB88:    goto LAB80;

LAB84:    t103 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(147, ng0);

LAB89:    xsi_set_current_line(148, ng0);
    t126 = ((char*)((ng5)));
    t127 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t127, t126, 0, 0, 1, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    goto LAB88;

LAB92:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(151, ng0);

LAB97:    xsi_set_current_line(152, ng0);
    t28 = (t0 + 3776);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    goto LAB96;

LAB100:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(154, ng0);

LAB105:    xsi_set_current_line(155, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB104;

LAB107:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB109;

LAB108:    *((unsigned int *)t8) = 1;
    goto LAB109;

LAB111:    *((unsigned int *)t32) = 1;
    goto LAB114;

LAB113:    t28 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB114;

LAB115:    t30 = (t0 + 3776);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng6)));
    memset(t48, 0, 8);
    t47 = (t33 + 4);
    t49 = (t34 + 4);
    t19 = *((unsigned int *)t33);
    t20 = *((unsigned int *)t34);
    t21 = (t19 ^ t20);
    t23 = *((unsigned int *)t47);
    t24 = *((unsigned int *)t49);
    t25 = (t23 ^ t24);
    t26 = (t21 | t25);
    t27 = *((unsigned int *)t47);
    t35 = *((unsigned int *)t49);
    t36 = (t27 | t35);
    t37 = (~(t36));
    t38 = (t26 & t37);
    if (t38 != 0)
        goto LAB121;

LAB118:    if (t36 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t48) = 1;

LAB121:    memset(t64, 0, 8);
    t56 = (t48 + 4);
    t39 = *((unsigned int *)t56);
    t40 = (~(t39));
    t41 = *((unsigned int *)t48);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t56) != 0)
        goto LAB124;

LAB125:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t64);
    t46 = (t44 | t45);
    *((unsigned int *)t80) = t46;
    t61 = (t32 + 4);
    t62 = (t64 + 4);
    t63 = (t80 + 4);
    t50 = *((unsigned int *)t61);
    t51 = *((unsigned int *)t62);
    t52 = (t50 | t51);
    *((unsigned int *)t63) = t52;
    t53 = *((unsigned int *)t63);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB126;

LAB127:
LAB128:    goto LAB117;

LAB120:    t55 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB121;

LAB122:    *((unsigned int *)t64) = 1;
    goto LAB125;

LAB124:    t60 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB125;

LAB126:    t57 = *((unsigned int *)t80);
    t58 = *((unsigned int *)t63);
    *((unsigned int *)t80) = (t57 | t58);
    t65 = (t32 + 4);
    t66 = (t64 + 4);
    t59 = *((unsigned int *)t65);
    t67 = (~(t59));
    t68 = *((unsigned int *)t32);
    t112 = (t68 & t67);
    t69 = *((unsigned int *)t66);
    t70 = (~(t69));
    t71 = *((unsigned int *)t64);
    t113 = (t71 & t70);
    t72 = (~(t112));
    t73 = (~(t113));
    t74 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t74 & t72);
    t75 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t75 & t73);
    goto LAB128;

LAB129:    xsi_set_current_line(160, ng0);

LAB132:    xsi_set_current_line(161, ng0);
    t81 = (t0 + 4256);
    t87 = (t81 + 56U);
    t92 = *((char **)t87);
    t93 = ((char*)((ng1)));
    memset(t88, 0, 8);
    t94 = (t92 + 4);
    t102 = (t93 + 4);
    t84 = *((unsigned int *)t92);
    t85 = *((unsigned int *)t93);
    t86 = (t84 ^ t85);
    t89 = *((unsigned int *)t94);
    t90 = *((unsigned int *)t102);
    t91 = (t89 ^ t90);
    t95 = (t86 | t91);
    t96 = *((unsigned int *)t94);
    t97 = *((unsigned int *)t102);
    t98 = (t96 | t97);
    t99 = (~(t98));
    t100 = (t95 & t99);
    if (t100 != 0)
        goto LAB136;

LAB133:    if (t98 != 0)
        goto LAB135;

LAB134:    *((unsigned int *)t88) = 1;

LAB136:    t120 = (t88 + 4);
    t101 = *((unsigned int *)t120);
    t104 = (~(t101));
    t105 = *((unsigned int *)t88);
    t106 = (t105 & t104);
    t107 = (t106 != 0);
    if (t107 > 0)
        goto LAB137;

LAB138:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB144;

LAB141:    if (t19 != 0)
        goto LAB143;

LAB142:    *((unsigned int *)t8) = 1;

LAB144:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB145;

LAB146:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB152;

LAB149:    if (t19 != 0)
        goto LAB151;

LAB150:    *((unsigned int *)t8) = 1;

LAB152:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB153;

LAB154:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB160;

LAB157:    if (t19 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t8) = 1;

LAB160:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB161;

LAB162:
LAB163:
LAB155:
LAB147:
LAB139:    goto LAB131;

LAB135:    t103 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB136;

LAB137:    xsi_set_current_line(161, ng0);

LAB140:    xsi_set_current_line(162, ng0);
    t126 = ((char*)((ng5)));
    t127 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t127, t126, 0, 0, 1, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB139;

LAB143:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB144;

LAB145:    xsi_set_current_line(165, ng0);

LAB148:    xsi_set_current_line(166, ng0);
    t28 = (t0 + 3936);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    goto LAB147;

LAB151:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB152;

LAB153:    xsi_set_current_line(168, ng0);

LAB156:    xsi_set_current_line(169, ng0);
    t28 = (t0 + 3776);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    goto LAB155;

LAB159:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB160;

LAB161:    xsi_set_current_line(171, ng0);

LAB164:    xsi_set_current_line(172, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB163;

}


extern void work_m_00000000002550126200_2736318349_init()
{
	static char *pe[] = {(void *)Initial_55_0,(void *)Always_61_1,(void *)Always_128_2};
	xsi_register_didat("work_m_00000000002550126200_2736318349", "isim/test_bench_isim_beh.exe.sim/work/m_00000000002550126200_2736318349.didat");
	xsi_register_executes(pe);
}
