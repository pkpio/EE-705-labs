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
static const char *ng0 = "E:/Dropbox/Works and collections/Elec/EE-705-labs/Assignment 5/RunLengthEncoder/FIFO.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_27_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);
    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);
    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_33_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    int t43;
    char *t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4624);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(34, ng0);

LAB13:    xsi_set_current_line(35, ng0);
    t28 = (t0 + 1848U);
    t29 = *((char **)t28);
    t28 = (t0 + 2568);
    t32 = (t0 + 2568);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2568);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 2888);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_convert_array_indices(t30, t31, t34, t37, 2, 1, t40, 5, 2);
    t41 = (t30 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t31 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t43 && t46);
    if (t47 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 5, t5, 32);
    t7 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 5, 0LL);
    goto LAB12;

LAB14:    t48 = *((unsigned int *)t30);
    t49 = *((unsigned int *)t31);
    t50 = (t48 - t49);
    t51 = (t50 + 1);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, *((unsigned int *)t31), t51, 0LL);
    goto LAB15;

}

static void Always_40_2(char *t0)
{
    char t10[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2888);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB7;

LAB6:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t9))
        goto LAB9;

LAB8:    *((unsigned int *)t10) = 1;

LAB9:    t14 = (t10 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t10);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(45, ng0);

LAB15:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB13:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t10, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t2);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t22 = (t18 ^ t19);
    t23 = (t17 | t22);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t5);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB19;

LAB16:    if (t26 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t10) = 1;

LAB19:    t7 = (t10 + 4);
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t10);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB7:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(42, ng0);

LAB14:    xsi_set_current_line(43, ng0);
    t20 = ((char*)((ng2)));
    t21 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 1, 0LL);
    goto LAB13;

LAB18:    t6 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(49, ng0);

LAB23:    xsi_set_current_line(50, ng0);
    t8 = (t0 + 2568);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t0 + 2568);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t20 = (t0 + 2568);
    t21 = (t20 + 64U);
    t35 = *((char **)t21);
    t36 = (t0 + 2728);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t34, 8, t11, t14, t35, 2, 1, t38, 5, 2);
    t39 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t39, t34, 0, 0, 8, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB25;

LAB24:    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB26;

LAB27:    t12 = (t10 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    t17 = *((unsigned int *)t10);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB22;

LAB25:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB27;

LAB26:    *((unsigned int *)t10) = 1;
    goto LAB27;

LAB29:    xsi_set_current_line(51, ng0);

LAB32:    xsi_set_current_line(52, ng0);
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t20 = *((char **)t14);
    t21 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t20, 5, t21, 32);
    t35 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 5, 0LL);
    goto LAB31;

}


extern void work_m_00000000000659340879_0236360315_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Always_33_1,(void *)Always_40_2};
	xsi_register_didat("work_m_00000000000659340879_0236360315", "isim/test_bench_isim_beh.exe.sim/work/m_00000000000659340879_0236360315.didat");
	xsi_register_executes(pe);
}
