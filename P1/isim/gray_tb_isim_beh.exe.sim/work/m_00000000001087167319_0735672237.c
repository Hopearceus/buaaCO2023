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
static const char *ng0 = "C:/Users/123/Desktop/verilog/P1/gray.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {1U, 0U};



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 3, 0LL);
    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 3, 0LL);

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t44[8];
    char t46[8];
    char t47[8];
    char t48[8];
    char t49[8];
    char t50[8];
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
    char *t43;
    char *t45;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(41, ng0);

LAB14:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(36, ng0);

LAB13:    xsi_set_current_line(37, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB12;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(42, ng0);

LAB22:    xsi_set_current_line(43, ng0);
    t21 = (t0 + 2088);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t31 = (t28 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB24;

LAB23:    t32 = (t29 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t28) > *((unsigned int *)t29))
        goto LAB26;

LAB25:    *((unsigned int *)t30) = 1;

LAB26:    t34 = (t30 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(46, ng0);

LAB35:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB30:    goto LAB21;

LAB24:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB26;

LAB28:    xsi_set_current_line(43, ng0);

LAB31:    xsi_set_current_line(44, ng0);
    t40 = (t0 + 2088);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng5)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 3, t42, 3, t43, 3);
    t45 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t45, t44, 0, 0, 3, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 3, t5, 3, t7, 3);
    xsi_vlogtype_concat(t30, 3, 3, 1U, t44, 3);
    xsi_vlogtype_concat(t6, 4, 4, 2U, t30, 3, t2, 1);
    t8 = (t0 + 2088);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng5)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_add(t48, 3, t22, 3, t28, 3);
    xsi_vlogtype_concat(t47, 3, 3, 1U, t48, 3);
    t29 = ((char*)((ng2)));
    xsi_vlogtype_concat(t46, 4, 4, 2U, t29, 1, t47, 3);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t46);
    t11 = (t9 ^ t10);
    *((unsigned int *)t49) = t11;
    t31 = (t6 + 4);
    t32 = (t46 + 4);
    t33 = (t49 + 4);
    t12 = *((unsigned int *)t31);
    t13 = *((unsigned int *)t32);
    t14 = (t12 | t13);
    *((unsigned int *)t33) = t14;
    t15 = *((unsigned int *)t33);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB32;

LAB33:
LAB34:    t34 = ((char*)((ng5)));
    memset(t50, 0, 8);
    xsi_vlog_unsigned_rshift(t50, 4, t49, 4, t34, 1);
    t40 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t40, t50, 0, 0, 3, 0LL);
    goto LAB30;

LAB32:    t17 = *((unsigned int *)t49);
    t18 = *((unsigned int *)t33);
    *((unsigned int *)t49) = (t17 | t18);
    goto LAB34;

}


extern void work_m_00000000001087167319_0735672237_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_35_1};
	xsi_register_didat("work_m_00000000001087167319_0735672237", "isim/gray_tb_isim_beh.exe.sim/work/m_00000000001087167319_0735672237.didat");
	xsi_register_executes(pe);
}
