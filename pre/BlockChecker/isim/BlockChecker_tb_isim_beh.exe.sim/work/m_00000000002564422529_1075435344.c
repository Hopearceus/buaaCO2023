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
static const char *ng0 = "C:/Users/123/Desktop/verilog/BlockChecker/BlockChecker.v";
static unsigned int ng1[] = {0U, 0U, 0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {6U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {2, 0};
static int ng7[] = {3, 0};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {1U, 0U, 0U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {11U, 0U};
static int ng14[] = {32, 0};
static int ng15[] = {98, 0};
static int ng16[] = {66, 0};
static int ng17[] = {101, 0};
static int ng18[] = {69, 0};
static unsigned int ng19[] = {8U, 0U};
static unsigned int ng20[] = {3U, 0U};
static int ng21[] = {103, 0};
static int ng22[] = {71, 0};
static unsigned int ng23[] = {4U, 0U};
static int ng24[] = {105, 0};
static int ng25[] = {73, 0};
static unsigned int ng26[] = {5U, 0U};
static int ng27[] = {110, 0};
static int ng28[] = {78, 0};
static unsigned int ng29[] = {9U, 0U};
static int ng30[] = {100, 0};
static int ng31[] = {68, 0};



static void Initial_46_0(char *t0)
{
    char t5[8];
    char t15[8];
    char t27[8];
    char t28[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t29;
    char *t31;

LAB0:    xsi_set_current_line(46, ng0);

LAB2:    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(53, ng0);
    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2728);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB6:    xsi_set_current_line(54, ng0);
    t12 = (t0 + 1928);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t0 + 2888);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2888);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng7)));
    t23 = ((char*)((ng6)));
    t24 = (t0 + 2728);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    xsi_vlog_signed_multiply(t27, 32, t23, 32, t26, 32);
    memset(t28, 0, 8);
    xsi_vlog_signed_minus(t28, 32, t22, 32, t27, 32);
    t29 = ((char*)((ng6)));
    xsi_vlog_get_indexed_partselect(t15, 2, t18, ((int*)(t21)), 2, t28, 32, 1, t29, 32, 1, 0);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 2, t14, 2, t15, 2);
    t31 = (t0 + 1928);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 2);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng8)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

}

static void Always_57_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5120);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 64);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB2;

}

static void Always_64_2(char *t0)
{
    char t13[8];
    char t32[8];
    char t58[16];
    char t60[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
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
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5136);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB8:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB28;

LAB25:    if (t18 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t13) = 1;

LAB28:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t13) = 1;

LAB43:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB63;

LAB60:    if (t18 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t13) = 1;

LAB63:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB64;

LAB65:
LAB66:
LAB46:
LAB31:
LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(65, ng0);

LAB9:    xsi_set_current_line(66, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 64, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(71, ng0);

LAB17:    xsi_set_current_line(72, ng0);
    t28 = (t0 + 2568);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
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
        goto LAB21;

LAB18:    if (t44 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t32) = 1;

LAB21:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB16;

LAB20:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(72, ng0);
    t54 = (t0 + 2408);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng9)));
    xsi_vlog_unsigned_add(t58, 64, t56, 64, t57, 64);
    t59 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t59, t58, 0, 0, 64, 0LL);
    goto LAB24;

LAB27:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(73, ng0);

LAB32:    xsi_set_current_line(74, ng0);
    t28 = (t0 + 2568);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
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
        goto LAB36;

LAB33:    if (t44 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t32) = 1;

LAB36:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB31;

LAB35:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(74, ng0);
    t54 = (t0 + 2408);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng9)));
    xsi_vlog_unsigned_minus(t58, 64, t56, 64, t57, 64);
    t59 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t59, t58, 0, 0, 64, 0LL);
    goto LAB39;

LAB42:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(75, ng0);

LAB47:    xsi_set_current_line(76, ng0);
    t28 = (t0 + 2408);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng1)));
    xsi_vlog_unsigned_greater(t58, 64, t30, 64, t31, 64);
    t33 = (t58 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (~(t35));
    t37 = *((unsigned int *)t58);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(78, ng0);

LAB52:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB56;

LAB53:    if (t18 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t13) = 1;

LAB56:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB59:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);

LAB50:    goto LAB46;

LAB48:    xsi_set_current_line(76, ng0);

LAB51:    xsi_set_current_line(77, ng0);
    t34 = (t0 + 2408);
    t47 = (t34 + 56U);
    t48 = *((char **)t47);
    t54 = ((char*)((ng9)));
    xsi_vlog_unsigned_minus(t60, 64, t48, 64, t54, 64);
    t55 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t55, t60, 0, 0, 64, 0LL);
    goto LAB50;

LAB55:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(79, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    goto LAB59;

LAB62:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(83, ng0);

LAB67:    xsi_set_current_line(85, ng0);
    t28 = (t0 + 2568);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
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
        goto LAB71;

LAB68:    if (t44 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t32) = 1;

LAB71:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(86, ng0);

LAB75:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB79;

LAB76:    if (t18 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t13) = 1;

LAB79:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB82:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);

LAB74:    goto LAB66;

LAB70:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(85, ng0);
    t54 = (t0 + 2408);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng9)));
    xsi_vlog_unsigned_add(t58, 64, t56, 64, t57, 64);
    t59 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t59, t58, 0, 0, 64, 0LL);
    goto LAB74;

LAB78:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(87, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    goto LAB82;

}

static void Always_95_3(char *t0)
{
    char t11[8];
    char t35[8];
    char t40[8];
    char t54[8];
    char t62[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
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
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5152);
    *((int *)t2) = 1;
    t3 = (t0 + 4584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng26)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng29)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(97, ng0);

LAB32:    xsi_set_current_line(98, ng0);
    t9 = (t0 + 1368U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng14)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB36;

LAB33:    if (t23 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t11) = 1;

LAB36:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB39:    goto LAB31;

LAB9:    xsi_set_current_line(101, ng0);

LAB40:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng15)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB44;

LAB41:    if (t23 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t11) = 1;

LAB44:    memset(t35, 0, 8);
    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t10) != 0)
        goto LAB47;

LAB48:    t13 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = *((unsigned int *)t13);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB49;

LAB50:    memcpy(t62, t35, 8);

LAB51:    t90 = (t62 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t62);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB69;

LAB66:    if (t23 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t11) = 1;

LAB69:    memset(t35, 0, 8);
    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t9) != 0)
        goto LAB72;

LAB73:    t12 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = *((unsigned int *)t12);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB74;

LAB75:    memcpy(t62, t35, 8);

LAB76:    t77 = (t62 + 4);
    t91 = *((unsigned int *)t77);
    t92 = (~(t91));
    t93 = *((unsigned int *)t62);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB94;

LAB91:    if (t23 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t11) = 1;

LAB94:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB97:
LAB90:
LAB65:    goto LAB31;

LAB11:    xsi_set_current_line(107, ng0);

LAB98:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng17)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB102;

LAB99:    if (t23 != 0)
        goto LAB101;

LAB100:    *((unsigned int *)t11) = 1;

LAB102:    memset(t35, 0, 8);
    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t10) != 0)
        goto LAB105;

LAB106:    t13 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = *((unsigned int *)t13);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB107;

LAB108:    memcpy(t62, t35, 8);

LAB109:    t90 = (t62 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t62);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB121;

LAB122:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB123:    goto LAB31;

LAB13:    xsi_set_current_line(111, ng0);

LAB124:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng21)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB128;

LAB125:    if (t23 != 0)
        goto LAB127;

LAB126:    *((unsigned int *)t11) = 1;

LAB128:    memset(t35, 0, 8);
    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t10) != 0)
        goto LAB131;

LAB132:    t13 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = *((unsigned int *)t13);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB133;

LAB134:    memcpy(t62, t35, 8);

LAB135:    t90 = (t62 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t62);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB147;

LAB148:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB149:    goto LAB31;

LAB15:    xsi_set_current_line(115, ng0);

LAB150:    xsi_set_current_line(116, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng24)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB154;

LAB151:    if (t23 != 0)
        goto LAB153;

LAB152:    *((unsigned int *)t11) = 1;

LAB154:    memset(t35, 0, 8);
    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB155;

LAB156:    if (*((unsigned int *)t10) != 0)
        goto LAB157;

LAB158:    t13 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = *((unsigned int *)t13);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB159;

LAB160:    memcpy(t62, t35, 8);

LAB161:    t90 = (t62 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t62);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB173;

LAB174:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB175:    goto LAB31;

LAB17:    xsi_set_current_line(119, ng0);

LAB176:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng27)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB180;

LAB177:    if (t23 != 0)
        goto LAB179;

LAB178:    *((unsigned int *)t11) = 1;

LAB180:    memset(t35, 0, 8);
    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t10) != 0)
        goto LAB183;

LAB184:    t13 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = *((unsigned int *)t13);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB185;

LAB186:    memcpy(t62, t35, 8);

LAB187:    t90 = (t62 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t62);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB199;

LAB200:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB201:    goto LAB31;

LAB19:    xsi_set_current_line(123, ng0);

LAB202:    xsi_set_current_line(124, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng14)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB206;

LAB203:    if (t23 != 0)
        goto LAB205;

LAB204:    *((unsigned int *)t11) = 1;

LAB206:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB207;

LAB208:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB209:    goto LAB31;

LAB21:    xsi_set_current_line(127, ng0);

LAB210:    xsi_set_current_line(131, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng14)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB214;

LAB211:    if (t23 != 0)
        goto LAB213;

LAB212:    *((unsigned int *)t11) = 1;

LAB214:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB215;

LAB216:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB217:    goto LAB31;

LAB23:    xsi_set_current_line(134, ng0);

LAB218:    xsi_set_current_line(135, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng27)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB222;

LAB219:    if (t23 != 0)
        goto LAB221;

LAB220:    *((unsigned int *)t11) = 1;

LAB222:    memset(t35, 0, 8);
    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB223;

LAB224:    if (*((unsigned int *)t10) != 0)
        goto LAB225;

LAB226:    t13 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = *((unsigned int *)t13);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB227;

LAB228:    memcpy(t62, t35, 8);

LAB229:    t90 = (t62 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t62);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB241;

LAB242:    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB243:    goto LAB31;

LAB25:    xsi_set_current_line(138, ng0);

LAB244:    xsi_set_current_line(139, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng30)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB248;

LAB245:    if (t23 != 0)
        goto LAB247;

LAB246:    *((unsigned int *)t11) = 1;

LAB248:    memset(t35, 0, 8);
    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB249;

LAB250:    if (*((unsigned int *)t10) != 0)
        goto LAB251;

LAB252:    t13 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = *((unsigned int *)t13);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB253;

LAB254:    memcpy(t62, t35, 8);

LAB255:    t90 = (t62 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t62);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB267;

LAB268:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB269:    goto LAB31;

LAB27:    xsi_set_current_line(142, ng0);

LAB270:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng14)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB274;

LAB271:    if (t23 != 0)
        goto LAB273;

LAB272:    *((unsigned int *)t11) = 1;

LAB274:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB275;

LAB276:    xsi_set_current_line(144, ng0);

LAB278:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB277:    goto LAB31;

LAB29:    xsi_set_current_line(148, ng0);

LAB279:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng14)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB283;

LAB280:    if (t23 != 0)
        goto LAB282;

LAB281:    *((unsigned int *)t11) = 1;

LAB283:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB284;

LAB285:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB286:    goto LAB31;

LAB35:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(98, ng0);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 2248);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 4);
    goto LAB39;

LAB43:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t35) = 1;
    goto LAB48;

LAB47:    t12 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB48;

LAB49:    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng16)));
    memset(t40, 0, 8);
    t33 = (t27 + 4);
    t34 = (t26 + 4);
    t41 = *((unsigned int *)t27);
    t42 = *((unsigned int *)t26);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t34);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t33);
    t49 = *((unsigned int *)t34);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB55;

LAB52:    if (t50 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t40) = 1;

LAB55:    memset(t54, 0, 8);
    t55 = (t40 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t55) != 0)
        goto LAB58;

LAB59:    t63 = *((unsigned int *)t35);
    t64 = *((unsigned int *)t54);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = (t35 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB51;

LAB54:    t53 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t54) = 1;
    goto LAB59;

LAB58:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB59;

LAB60:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t35 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (~(t78));
    t80 = *((unsigned int *)t35);
    t81 = (t80 & t79);
    t82 = *((unsigned int *)t77);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t85 = (t84 & t83);
    t86 = (~(t81));
    t87 = (~(t85));
    t88 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t88 & t86);
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    goto LAB62;

LAB63:    xsi_set_current_line(102, ng0);
    t96 = ((char*)((ng12)));
    t97 = (t0 + 2248);
    xsi_vlogvar_assign_value(t97, t96, 0, 0, 4);
    goto LAB65;

LAB68:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t35) = 1;
    goto LAB73;

LAB72:    t10 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB73;

LAB74:    t13 = (t0 + 1368U);
    t26 = *((char **)t13);
    t13 = ((char*)((ng18)));
    memset(t40, 0, 8);
    t27 = (t26 + 4);
    t33 = (t13 + 4);
    t41 = *((unsigned int *)t26);
    t42 = *((unsigned int *)t13);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t27);
    t45 = *((unsigned int *)t33);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t27);
    t49 = *((unsigned int *)t33);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB80;

LAB77:    if (t50 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t40) = 1;

LAB80:    memset(t54, 0, 8);
    t53 = (t40 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t53) != 0)
        goto LAB83;

LAB84:    t63 = *((unsigned int *)t35);
    t64 = *((unsigned int *)t54);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t61 = (t35 + 4);
    t66 = (t54 + 4);
    t67 = (t62 + 4);
    t69 = *((unsigned int *)t61);
    t70 = *((unsigned int *)t66);
    t71 = (t69 | t70);
    *((unsigned int *)t67) = t71;
    t72 = *((unsigned int *)t67);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB76;

LAB79:    t34 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t54) = 1;
    goto LAB84;

LAB83:    t55 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB84;

LAB85:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t62) = (t74 | t75);
    t68 = (t35 + 4);
    t76 = (t54 + 4);
    t78 = *((unsigned int *)t68);
    t79 = (~(t78));
    t80 = *((unsigned int *)t35);
    t8 = (t80 & t79);
    t82 = *((unsigned int *)t76);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t81 = (t84 & t83);
    t86 = (~(t8));
    t87 = (~(t81));
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    goto LAB87;

LAB88:    xsi_set_current_line(103, ng0);
    t90 = ((char*)((ng19)));
    t96 = (t0 + 2248);
    xsi_vlogvar_assign_value(t96, t90, 0, 0, 4);
    goto LAB90;

LAB93:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB94;

LAB95:    xsi_set_current_line(104, ng0);
    t10 = ((char*)((ng2)));
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 4);
    goto LAB97;

LAB101:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB102;

LAB103:    *((unsigned int *)t35) = 1;
    goto LAB106;

LAB105:    t12 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB106;

LAB107:    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng18)));
    memset(t40, 0, 8);
    t33 = (t27 + 4);
    t34 = (t26 + 4);
    t41 = *((unsigned int *)t27);
    t42 = *((unsigned int *)t26);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t34);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t33);
    t49 = *((unsigned int *)t34);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB113;

LAB110:    if (t50 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t40) = 1;

LAB113:    memset(t54, 0, 8);
    t55 = (t40 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t55) != 0)
        goto LAB116;

LAB117:    t63 = *((unsigned int *)t35);
    t64 = *((unsigned int *)t54);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = (t35 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB118;

LAB119:
LAB120:    goto LAB109;

LAB112:    t53 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB113;

LAB114:    *((unsigned int *)t54) = 1;
    goto LAB117;

LAB116:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB117;

LAB118:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t35 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (~(t78));
    t80 = *((unsigned int *)t35);
    t81 = (t80 & t79);
    t82 = *((unsigned int *)t77);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t85 = (t84 & t83);
    t86 = (~(t81));
    t87 = (~(t85));
    t88 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t88 & t86);
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    goto LAB120;

LAB121:    xsi_set_current_line(108, ng0);
    t96 = ((char*)((ng20)));
    t97 = (t0 + 2248);
    xsi_vlogvar_assign_value(t97, t96, 0, 0, 4);
    goto LAB123;

LAB127:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB128;

LAB129:    *((unsigned int *)t35) = 1;
    goto LAB132;

LAB131:    t12 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB132;

LAB133:    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng22)));
    memset(t40, 0, 8);
    t33 = (t27 + 4);
    t34 = (t26 + 4);
    t41 = *((unsigned int *)t27);
    t42 = *((unsigned int *)t26);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t34);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t33);
    t49 = *((unsigned int *)t34);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB139;

LAB136:    if (t50 != 0)
        goto LAB138;

LAB137:    *((unsigned int *)t40) = 1;

LAB139:    memset(t54, 0, 8);
    t55 = (t40 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t55) != 0)
        goto LAB142;

LAB143:    t63 = *((unsigned int *)t35);
    t64 = *((unsigned int *)t54);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = (t35 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB144;

LAB145:
LAB146:    goto LAB135;

LAB138:    t53 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB139;

LAB140:    *((unsigned int *)t54) = 1;
    goto LAB143;

LAB142:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB143;

LAB144:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t35 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (~(t78));
    t80 = *((unsigned int *)t35);
    t81 = (t80 & t79);
    t82 = *((unsigned int *)t77);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t85 = (t84 & t83);
    t86 = (~(t81));
    t87 = (~(t85));
    t88 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t88 & t86);
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    goto LAB146;

LAB147:    xsi_set_current_line(112, ng0);
    t96 = ((char*)((ng23)));
    t97 = (t0 + 2248);
    xsi_vlogvar_assign_value(t97, t96, 0, 0, 4);
    goto LAB149;

LAB153:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB154;

LAB155:    *((unsigned int *)t35) = 1;
    goto LAB158;

LAB157:    t12 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB158;

LAB159:    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng25)));
    memset(t40, 0, 8);
    t33 = (t27 + 4);
    t34 = (t26 + 4);
    t41 = *((unsigned int *)t27);
    t42 = *((unsigned int *)t26);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t34);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t33);
    t49 = *((unsigned int *)t34);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB165;

LAB162:    if (t50 != 0)
        goto LAB164;

LAB163:    *((unsigned int *)t40) = 1;

LAB165:    memset(t54, 0, 8);
    t55 = (t40 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB166;

LAB167:    if (*((unsigned int *)t55) != 0)
        goto LAB168;

LAB169:    t63 = *((unsigned int *)t35);
    t64 = *((unsigned int *)t54);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = (t35 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB170;

LAB171:
LAB172:    goto LAB161;

LAB164:    t53 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB165;

LAB166:    *((unsigned int *)t54) = 1;
    goto LAB169;

LAB168:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB169;

LAB170:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t35 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (~(t78));
    t80 = *((unsigned int *)t35);
    t81 = (t80 & t79);
    t82 = *((unsigned int *)t77);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t85 = (t84 & t83);
    t86 = (~(t81));
    t87 = (~(t85));
    t88 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t88 & t86);
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    goto LAB172;

LAB173:    xsi_set_current_line(116, ng0);
    t96 = ((char*)((ng26)));
    t97 = (t0 + 2248);
    xsi_vlogvar_assign_value(t97, t96, 0, 0, 4);
    goto LAB175;

LAB179:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB180;

LAB181:    *((unsigned int *)t35) = 1;
    goto LAB184;

LAB183:    t12 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB184;

LAB185:    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng28)));
    memset(t40, 0, 8);
    t33 = (t27 + 4);
    t34 = (t26 + 4);
    t41 = *((unsigned int *)t27);
    t42 = *((unsigned int *)t26);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t34);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t33);
    t49 = *((unsigned int *)t34);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB191;

LAB188:    if (t50 != 0)
        goto LAB190;

LAB189:    *((unsigned int *)t40) = 1;

LAB191:    memset(t54, 0, 8);
    t55 = (t40 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB192;

LAB193:    if (*((unsigned int *)t55) != 0)
        goto LAB194;

LAB195:    t63 = *((unsigned int *)t35);
    t64 = *((unsigned int *)t54);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = (t35 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB196;

LAB197:
LAB198:    goto LAB187;

LAB190:    t53 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB191;

LAB192:    *((unsigned int *)t54) = 1;
    goto LAB195;

LAB194:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB195;

LAB196:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t35 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (~(t78));
    t80 = *((unsigned int *)t35);
    t81 = (t80 & t79);
    t82 = *((unsigned int *)t77);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t85 = (t84 & t83);
    t86 = (~(t81));
    t87 = (~(t85));
    t88 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t88 & t86);
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    goto LAB198;

LAB199:    xsi_set_current_line(120, ng0);
    t96 = ((char*)((ng4)));
    t97 = (t0 + 2248);
    xsi_vlogvar_assign_value(t97, t96, 0, 0, 4);
    goto LAB201;

LAB205:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB206;

LAB207:    xsi_set_current_line(124, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    goto LAB209;

LAB213:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB214;

LAB215:    xsi_set_current_line(131, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    goto LAB217;

LAB221:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB222;

LAB223:    *((unsigned int *)t35) = 1;
    goto LAB226;

LAB225:    t12 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB226;

LAB227:    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng28)));
    memset(t40, 0, 8);
    t33 = (t27 + 4);
    t34 = (t26 + 4);
    t41 = *((unsigned int *)t27);
    t42 = *((unsigned int *)t26);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t34);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t33);
    t49 = *((unsigned int *)t34);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB233;

LAB230:    if (t50 != 0)
        goto LAB232;

LAB231:    *((unsigned int *)t40) = 1;

LAB233:    memset(t54, 0, 8);
    t55 = (t40 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB234;

LAB235:    if (*((unsigned int *)t55) != 0)
        goto LAB236;

LAB237:    t63 = *((unsigned int *)t35);
    t64 = *((unsigned int *)t54);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = (t35 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB238;

LAB239:
LAB240:    goto LAB229;

LAB232:    t53 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB233;

LAB234:    *((unsigned int *)t54) = 1;
    goto LAB237;

LAB236:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB237;

LAB238:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t35 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (~(t78));
    t80 = *((unsigned int *)t35);
    t81 = (t80 & t79);
    t82 = *((unsigned int *)t77);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t85 = (t84 & t83);
    t86 = (~(t81));
    t87 = (~(t85));
    t88 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t88 & t86);
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    goto LAB240;

LAB241:    xsi_set_current_line(135, ng0);
    t96 = ((char*)((ng29)));
    t97 = (t0 + 2248);
    xsi_vlogvar_assign_value(t97, t96, 0, 0, 4);
    goto LAB243;

LAB247:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB248;

LAB249:    *((unsigned int *)t35) = 1;
    goto LAB252;

LAB251:    t12 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB252;

LAB253:    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng31)));
    memset(t40, 0, 8);
    t33 = (t27 + 4);
    t34 = (t26 + 4);
    t41 = *((unsigned int *)t27);
    t42 = *((unsigned int *)t26);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t34);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t33);
    t49 = *((unsigned int *)t34);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB259;

LAB256:    if (t50 != 0)
        goto LAB258;

LAB257:    *((unsigned int *)t40) = 1;

LAB259:    memset(t54, 0, 8);
    t55 = (t40 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB260;

LAB261:    if (*((unsigned int *)t55) != 0)
        goto LAB262;

LAB263:    t63 = *((unsigned int *)t35);
    t64 = *((unsigned int *)t54);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = (t35 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB264;

LAB265:
LAB266:    goto LAB255;

LAB258:    t53 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB259;

LAB260:    *((unsigned int *)t54) = 1;
    goto LAB263;

LAB262:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB263;

LAB264:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t35 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (~(t78));
    t80 = *((unsigned int *)t35);
    t81 = (t80 & t79);
    t82 = *((unsigned int *)t77);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t85 = (t84 & t83);
    t86 = (~(t81));
    t87 = (~(t85));
    t88 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t88 & t86);
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    goto LAB266;

LAB267:    xsi_set_current_line(139, ng0);
    t96 = ((char*)((ng11)));
    t97 = (t0 + 2248);
    xsi_vlogvar_assign_value(t97, t96, 0, 0, 4);
    goto LAB269;

LAB273:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB274;

LAB275:    xsi_set_current_line(143, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    goto LAB277;

LAB282:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB283;

LAB284:    xsi_set_current_line(150, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    goto LAB286;

}

static void Cont_155_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t28[8];
    char t29[8];
    char t34[16];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;

LAB0:    t1 = (t0 + 4800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2568);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) > *((unsigned int *)t7))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB12:    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB13;

LAB14:    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t28, 8);

LAB21:    t52 = (t0 + 5248);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t56, 0, 8);
    t57 = 1U;
    t58 = t57;
    t59 = (t3 + 4);
    t60 = *((unsigned int *)t3);
    t57 = (t57 & t60);
    t61 = *((unsigned int *)t59);
    t58 = (t58 & t61);
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t63 | t57);
    t64 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t64 | t58);
    xsi_driver_vfirst_trans(t52, 0, 0);
    t65 = (t0 + 5168);
    *((int *)t65) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = ((char*)((ng5)));
    goto LAB14;

LAB15:    t30 = (t0 + 2408);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t34, 64, t32, 64, t33, 64);
    memset(t29, 0, 8);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t34);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t35) != 0)
        goto LAB24;

LAB25:    t42 = (t29 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t42);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB26;

LAB27:    t47 = *((unsigned int *)t29);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t42) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t29) > 0)
        goto LAB32;

LAB33:    memcpy(t28, t51, 8);

LAB34:    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 32, t23, 32, t28, 32);
    goto LAB21;

LAB19:    memcpy(t3, t23, 8);
    goto LAB21;

LAB22:    *((unsigned int *)t29) = 1;
    goto LAB25;

LAB24:    t41 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB25;

LAB26:    t46 = ((char*)((ng8)));
    goto LAB27;

LAB28:    t51 = ((char*)((ng5)));
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t28, 32, t46, 32, t51, 32);
    goto LAB34;

LAB32:    memcpy(t28, t46, 8);
    goto LAB34;

}


extern void work_m_00000000002564422529_1075435344_init()
{
	static char *pe[] = {(void *)Initial_46_0,(void *)Always_57_1,(void *)Always_64_2,(void *)Always_95_3,(void *)Cont_155_4};
	xsi_register_didat("work_m_00000000002564422529_1075435344", "isim/BlockChecker_tb_isim_beh.exe.sim/work/m_00000000002564422529_1075435344.didat");
	xsi_register_executes(pe);
}
