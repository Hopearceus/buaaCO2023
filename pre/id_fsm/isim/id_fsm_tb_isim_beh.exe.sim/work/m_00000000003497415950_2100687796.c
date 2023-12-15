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
static const char *ng0 = "C:/Users/123/Desktop/verilog/id_fsm/id_fsm.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {53U, 0U};
static unsigned int ng3[] = {90U, 0U};
static unsigned int ng4[] = {97U, 0U};
static unsigned int ng5[] = {122U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {48U, 0U};
static unsigned int ng8[] = {57U, 0U};
static unsigned int ng9[] = {2U, 0U};
static int ng10[] = {1, 0};
static int ng11[] = {0, 0};



static void Initial_31_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3912);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 8, 0LL);
    goto LAB2;

}

static void Always_38_2(char *t0)
{
    char t8[8];
    char t12[8];
    char t28[8];
    char t32[8];
    char t40[8];
    char t72[8];
    char t89[8];
    char t93[8];
    char t109[8];
    char t113[8];
    char t121[8];
    char t153[8];
    char t161[8];
    char t199[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t90;
    char *t91;
    char *t92;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t110;
    char *t111;
    char *t112;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    int t145;
    int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t196;
    char *t197;
    char *t198;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;
    char *t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    char *t221;
    char *t222;

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3928);
    *((int *)t2) = 1;
    t3 = (t0 + 3376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;

LAB9:    memset(t12, 0, 8);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t13) != 0)
        goto LAB13;

LAB14:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB15;

LAB16:    memcpy(t40, t12, 8);

LAB17:    memset(t72, 0, 8);
    t73 = (t40 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t40);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t73) != 0)
        goto LAB32;

LAB33:    t80 = (t72 + 4);
    t81 = *((unsigned int *)t72);
    t82 = (!(t81));
    t83 = *((unsigned int *)t80);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB34;

LAB35:    memcpy(t161, t72, 8);

LAB36:    t189 = (t161 + 4);
    t190 = *((unsigned int *)t189);
    t191 = (~(t190));
    t192 = *((unsigned int *)t161);
    t193 = (t192 & t191);
    t194 = (t193 != 0);
    if (t194 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB87;

LAB86:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB87;

LAB90:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB89;

LAB88:    *((unsigned int *)t8) = 1;

LAB89:    memset(t12, 0, 8);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t10) != 0)
        goto LAB93;

LAB94:    t13 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB95;

LAB96:    memcpy(t40, t12, 8);

LAB97:    t54 = (t40 + 4);
    t74 = *((unsigned int *)t54);
    t75 = (~(t74));
    t76 = *((unsigned int *)t40);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(49, ng0);

LAB128:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t6);
    t34 = *((unsigned int *)t7);
    t35 = (t23 | t34);
    t36 = (~(t35));
    t37 = (t22 & t36);
    if (t37 != 0)
        goto LAB132;

LAB129:    if (t35 != 0)
        goto LAB131;

LAB130:    *((unsigned int *)t8) = 1;

LAB132:    t10 = (t8 + 4);
    t38 = *((unsigned int *)t10);
    t41 = (~(t38));
    t42 = *((unsigned int *)t8);
    t43 = (t42 & t41);
    t47 = (t43 != 0);
    if (t47 > 0)
        goto LAB133;

LAB134:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t6);
    t34 = *((unsigned int *)t7);
    t35 = (t23 | t34);
    t36 = (~(t35));
    t37 = (t22 & t36);
    if (t37 != 0)
        goto LAB139;

LAB136:    if (t35 != 0)
        goto LAB138;

LAB137:    *((unsigned int *)t8) = 1;

LAB139:    t10 = (t8 + 4);
    t38 = *((unsigned int *)t10);
    t41 = (~(t38));
    t42 = *((unsigned int *)t8);
    t43 = (t42 & t41);
    t47 = (t43 != 0);
    if (t47 > 0)
        goto LAB140;

LAB141:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB142:
LAB135:
LAB112:
LAB70:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB14;

LAB13:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB15:    t24 = (t0 + 1928);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t29 = (t26 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB19;

LAB18:    t30 = (t27 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t26) > *((unsigned int *)t27))
        goto LAB21;

LAB20:    *((unsigned int *)t28) = 1;

LAB21:    memset(t32, 0, 8);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t33) != 0)
        goto LAB25;

LAB26:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t12 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t31 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t32) = 1;
    goto LAB26;

LAB25:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB26;

LAB27:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t12 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB29;

LAB30:    *((unsigned int *)t72) = 1;
    goto LAB33;

LAB32:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB33;

LAB34:    t85 = (t0 + 1928);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = ((char*)((ng4)));
    memset(t89, 0, 8);
    t90 = (t87 + 4);
    if (*((unsigned int *)t90) != 0)
        goto LAB38;

LAB37:    t91 = (t88 + 4);
    if (*((unsigned int *)t91) != 0)
        goto LAB38;

LAB41:    if (*((unsigned int *)t87) < *((unsigned int *)t88))
        goto LAB40;

LAB39:    *((unsigned int *)t89) = 1;

LAB40:    memset(t93, 0, 8);
    t94 = (t89 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t89);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t94) != 0)
        goto LAB44;

LAB45:    t101 = (t93 + 4);
    t102 = *((unsigned int *)t93);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB46;

LAB47:    memcpy(t121, t93, 8);

LAB48:    memset(t153, 0, 8);
    t154 = (t121 + 4);
    t155 = *((unsigned int *)t154);
    t156 = (~(t155));
    t157 = *((unsigned int *)t121);
    t158 = (t157 & t156);
    t159 = (t158 & 1U);
    if (t159 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t154) != 0)
        goto LAB63;

LAB64:    t162 = *((unsigned int *)t72);
    t163 = *((unsigned int *)t153);
    t164 = (t162 | t163);
    *((unsigned int *)t161) = t164;
    t165 = (t72 + 4);
    t166 = (t153 + 4);
    t167 = (t161 + 4);
    t168 = *((unsigned int *)t165);
    t169 = *((unsigned int *)t166);
    t170 = (t168 | t169);
    *((unsigned int *)t167) = t170;
    t171 = *((unsigned int *)t167);
    t172 = (t171 != 0);
    if (t172 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB36;

LAB38:    t92 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB40;

LAB42:    *((unsigned int *)t93) = 1;
    goto LAB45;

LAB44:    t100 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB45;

LAB46:    t105 = (t0 + 1928);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    t108 = ((char*)((ng5)));
    memset(t109, 0, 8);
    t110 = (t107 + 4);
    if (*((unsigned int *)t110) != 0)
        goto LAB50;

LAB49:    t111 = (t108 + 4);
    if (*((unsigned int *)t111) != 0)
        goto LAB50;

LAB53:    if (*((unsigned int *)t107) > *((unsigned int *)t108))
        goto LAB52;

LAB51:    *((unsigned int *)t109) = 1;

LAB52:    memset(t113, 0, 8);
    t114 = (t109 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t109);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t114) != 0)
        goto LAB56;

LAB57:    t122 = *((unsigned int *)t93);
    t123 = *((unsigned int *)t113);
    t124 = (t122 & t123);
    *((unsigned int *)t121) = t124;
    t125 = (t93 + 4);
    t126 = (t113 + 4);
    t127 = (t121 + 4);
    t128 = *((unsigned int *)t125);
    t129 = *((unsigned int *)t126);
    t130 = (t128 | t129);
    *((unsigned int *)t127) = t130;
    t131 = *((unsigned int *)t127);
    t132 = (t131 != 0);
    if (t132 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB48;

LAB50:    t112 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB52;

LAB54:    *((unsigned int *)t113) = 1;
    goto LAB57;

LAB56:    t120 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB57;

LAB58:    t133 = *((unsigned int *)t121);
    t134 = *((unsigned int *)t127);
    *((unsigned int *)t121) = (t133 | t134);
    t135 = (t93 + 4);
    t136 = (t113 + 4);
    t137 = *((unsigned int *)t93);
    t138 = (~(t137));
    t139 = *((unsigned int *)t135);
    t140 = (~(t139));
    t141 = *((unsigned int *)t113);
    t142 = (~(t141));
    t143 = *((unsigned int *)t136);
    t144 = (~(t143));
    t145 = (t138 & t140);
    t146 = (t142 & t144);
    t147 = (~(t145));
    t148 = (~(t146));
    t149 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t149 & t147);
    t150 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t150 & t148);
    t151 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t151 & t147);
    t152 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t152 & t148);
    goto LAB60;

LAB61:    *((unsigned int *)t153) = 1;
    goto LAB64;

LAB63:    t160 = (t153 + 4);
    *((unsigned int *)t153) = 1;
    *((unsigned int *)t160) = 1;
    goto LAB64;

LAB65:    t173 = *((unsigned int *)t161);
    t174 = *((unsigned int *)t167);
    *((unsigned int *)t161) = (t173 | t174);
    t175 = (t72 + 4);
    t176 = (t153 + 4);
    t177 = *((unsigned int *)t175);
    t178 = (~(t177));
    t179 = *((unsigned int *)t72);
    t180 = (t179 & t178);
    t181 = *((unsigned int *)t176);
    t182 = (~(t181));
    t183 = *((unsigned int *)t153);
    t184 = (t183 & t182);
    t185 = (~(t180));
    t186 = (~(t184));
    t187 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t187 & t185);
    t188 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t188 & t186);
    goto LAB67;

LAB68:    xsi_set_current_line(39, ng0);

LAB71:    xsi_set_current_line(40, ng0);
    t195 = (t0 + 1768);
    t196 = (t195 + 56U);
    t197 = *((char **)t196);
    t198 = ((char*)((ng1)));
    memset(t199, 0, 8);
    t200 = (t197 + 4);
    t201 = (t198 + 4);
    t202 = *((unsigned int *)t197);
    t203 = *((unsigned int *)t198);
    t204 = (t202 ^ t203);
    t205 = *((unsigned int *)t200);
    t206 = *((unsigned int *)t201);
    t207 = (t205 ^ t206);
    t208 = (t204 | t207);
    t209 = *((unsigned int *)t200);
    t210 = *((unsigned int *)t201);
    t211 = (t209 | t210);
    t212 = (~(t211));
    t213 = (t208 & t212);
    if (t213 != 0)
        goto LAB75;

LAB72:    if (t211 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t199) = 1;

LAB75:    t215 = (t199 + 4);
    t216 = *((unsigned int *)t215);
    t217 = (~(t216));
    t218 = *((unsigned int *)t199);
    t219 = (t218 & t217);
    t220 = (t219 != 0);
    if (t220 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t6);
    t34 = *((unsigned int *)t7);
    t35 = (t23 | t34);
    t36 = (~(t35));
    t37 = (t22 & t36);
    if (t37 != 0)
        goto LAB82;

LAB79:    if (t35 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t8) = 1;

LAB82:    t10 = (t8 + 4);
    t38 = *((unsigned int *)t10);
    t41 = (~(t38));
    t42 = *((unsigned int *)t8);
    t43 = (t42 & t41);
    t47 = (t43 != 0);
    if (t47 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB85:
LAB78:    goto LAB70;

LAB74:    t214 = (t199 + 4);
    *((unsigned int *)t199) = 1;
    *((unsigned int *)t214) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(40, ng0);
    t221 = ((char*)((ng6)));
    t222 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t222, t221, 0, 0, 2, 0LL);
    goto LAB78;

LAB81:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng6)));
    t13 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 2, 0LL);
    goto LAB85;

LAB87:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB89;

LAB91:    *((unsigned int *)t12) = 1;
    goto LAB94;

LAB93:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB94;

LAB95:    t19 = (t0 + 1928);
    t20 = (t19 + 56U);
    t24 = *((char **)t20);
    t25 = ((char*)((ng8)));
    memset(t28, 0, 8);
    t26 = (t24 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB99;

LAB98:    t27 = (t25 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB99;

LAB102:    if (*((unsigned int *)t24) > *((unsigned int *)t25))
        goto LAB101;

LAB100:    *((unsigned int *)t28) = 1;

LAB101:    memset(t32, 0, 8);
    t30 = (t28 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t30) != 0)
        goto LAB105;

LAB106:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t33 = (t12 + 4);
    t39 = (t32 + 4);
    t44 = (t40 + 4);
    t47 = *((unsigned int *)t33);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t44);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB107;

LAB108:
LAB109:    goto LAB97;

LAB99:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB101;

LAB103:    *((unsigned int *)t32) = 1;
    goto LAB106;

LAB105:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB106;

LAB107:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t40) = (t52 | t53);
    t45 = (t12 + 4);
    t46 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t45);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t46);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB109;

LAB110:    xsi_set_current_line(44, ng0);

LAB113:    xsi_set_current_line(45, ng0);
    t55 = (t0 + 1768);
    t73 = (t55 + 56U);
    t79 = *((char **)t73);
    t80 = ((char*)((ng1)));
    memset(t72, 0, 8);
    t85 = (t79 + 4);
    t86 = (t80 + 4);
    t81 = *((unsigned int *)t79);
    t82 = *((unsigned int *)t80);
    t83 = (t81 ^ t82);
    t84 = *((unsigned int *)t85);
    t95 = *((unsigned int *)t86);
    t96 = (t84 ^ t95);
    t97 = (t83 | t96);
    t98 = *((unsigned int *)t85);
    t99 = *((unsigned int *)t86);
    t102 = (t98 | t99);
    t103 = (~(t102));
    t104 = (t97 & t103);
    if (t104 != 0)
        goto LAB117;

LAB114:    if (t102 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t72) = 1;

LAB117:    t88 = (t72 + 4);
    t115 = *((unsigned int *)t88);
    t116 = (~(t115));
    t117 = *((unsigned int *)t72);
    t118 = (t117 & t116);
    t119 = (t118 != 0);
    if (t119 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t6);
    t34 = *((unsigned int *)t7);
    t35 = (t23 | t34);
    t36 = (~(t35));
    t37 = (t22 & t36);
    if (t37 != 0)
        goto LAB124;

LAB121:    if (t35 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t8) = 1;

LAB124:    t10 = (t8 + 4);
    t38 = *((unsigned int *)t10);
    t41 = (~(t38));
    t42 = *((unsigned int *)t8);
    t43 = (t42 & t41);
    t47 = (t43 != 0);
    if (t47 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB127:
LAB120:    goto LAB112;

LAB116:    t87 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB117;

LAB118:    xsi_set_current_line(45, ng0);
    t90 = ((char*)((ng1)));
    t91 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t91, t90, 0, 0, 2, 0LL);
    goto LAB120;

LAB123:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB124;

LAB125:    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng9)));
    t13 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 2, 0LL);
    goto LAB127;

LAB131:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB132;

LAB133:    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng1)));
    t13 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 2, 0LL);
    goto LAB135;

LAB138:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB139;

LAB140:    xsi_set_current_line(51, ng0);
    t11 = ((char*)((ng1)));
    t13 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 2, 0LL);
    goto LAB142;

}

static void Cont_55_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1768);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 4024);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 3944);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng10)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng11)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}


extern void work_m_00000000003497415950_2100687796_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_35_1,(void *)Always_38_2,(void *)Cont_55_3};
	xsi_register_didat("work_m_00000000003497415950_2100687796", "isim/id_fsm_tb_isim_beh.exe.sim/work/m_00000000003497415950_2100687796.didat");
	xsi_register_executes(pe);
}
