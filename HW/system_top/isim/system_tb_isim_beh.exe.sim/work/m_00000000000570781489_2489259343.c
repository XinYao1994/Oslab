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
static const char *ng0 = "D:/workspace/arm_cpu_for_nexys4_v1_ise14_7/system_top/stage_id.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {33U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {13U, 0U};
static unsigned int ng7[] = {10U, 0U};
static unsigned int ng8[] = {42U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {38U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {9U, 0U};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {43U, 0U};
static unsigned int ng17[] = {12U, 0U};
static unsigned int ng18[] = {36U, 0U};
static unsigned int ng19[] = {37U, 0U};
static unsigned int ng20[] = {14U, 0U};
static unsigned int ng21[] = {15U, 0U};
static unsigned int ng22[] = {64U, 0U};
static unsigned int ng23[] = {32U, 0U};
static unsigned int ng24[] = {35U, 0U};
static unsigned int ng25[] = {40U, 0U};
static int ng26[] = {32, 0};
static unsigned int ng27[] = {65U, 0U};
static unsigned int ng28[] = {31U, 0U};
static unsigned int ng29[] = {8U, 0U};
static unsigned int ng30[] = {16U, 0U};
static unsigned int ng31[] = {24U, 0U};
static unsigned int ng32[] = {17U, 0U};
static int ng33[] = {0, 0};
static unsigned int ng34[] = {18U, 0U};
static unsigned int ng35[] = {19U, 0U};
static unsigned int ng36[] = {47U, 0U};
static int ng37[] = {16, 0};
static int ng38[] = {2, 0};
static int ng39[] = {1, 0};
static int ng40[] = {3, 0};
static int ng41[] = {8, 0};
static int ng42[] = {9, 0};
static int ng43[] = {4, 0};
static int ng44[] = {10, 0};
static int ng45[] = {5, 0};
static int ng46[] = {11, 0};
static int ng47[] = {6, 0};
static int ng48[] = {12, 0};
static int ng49[] = {7, 0};
static int ng50[] = {13, 0};
static int ng51[] = {14, 0};
static int ng52[] = {15, 0};



static int sp_assign_reg1(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(186, ng0);

LAB5:    xsi_set_current_line(187, ng0);
    t5 = (t1 + 13272U);
    t6 = *((char **)t5);
    t5 = (t1 + 14952);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 5, 0LL);
    xsi_set_current_line(188, ng0);
    t4 = (t1 + 12632U);
    t5 = *((char **)t4);
    t4 = (t1 + 15112);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_assign_reg2(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(191, ng0);

LAB5:    xsi_set_current_line(192, ng0);
    t5 = (t1 + 13432U);
    t6 = *((char **)t5);
    t5 = (t1 + 15272);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 5, 0LL);
    xsi_set_current_line(193, ng0);
    t4 = (t1 + 12792U);
    t5 = *((char **)t4);
    t4 = (t1 + 15432);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_proc_rtype(char *t1, char *t2)
{
    char t25[8];
    int t0;
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
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(197, ng0);

LAB5:    xsi_set_current_line(198, ng0);
    t5 = (t1 + 13592U);
    t6 = *((char **)t5);
    t5 = (t1 + 17032);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 5, 0LL);
    xsi_set_current_line(199, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB6);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t1, t10, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t10, t11);

LAB8:    t12 = (t2 + 64U);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t1, t13);
    if (t20 == -1)
        goto LAB9;

LAB10:    if (t20 != 0)
        goto LAB11;

LAB6:    t13 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t13);

LAB7:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t21 = (t1 + 848);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    xsi_delete_subprogram_invocation(t21, t22, t1, t24, t2);
    xsi_set_current_line(200, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB12);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 1280);
    t11 = xsi_create_subprogram_invocation(t9, 0, t1, t10, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t10, t11);

LAB14:    t12 = (t2 + 64U);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t1, t13);
    if (t20 == -1)
        goto LAB15;

LAB16:    if (t20 != 0)
        goto LAB17;

LAB12:    t13 = (t1 + 1280);
    xsi_vlog_subprogram_popinvocation(t13);

LAB13:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t21 = (t1 + 1280);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    xsi_delete_subprogram_invocation(t21, t22, t1, t24, t2);
    xsi_set_current_line(201, ng0);
    t4 = (t1 + 13752U);
    t5 = *((char **)t4);
    memcpy(t25, t5, 8);
    t4 = (t1 + 16392);
    xsi_vlogvar_wait_assign_value(t4, t25, 0, 0, 32, 0LL);
    xsi_set_current_line(202, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 16552);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(203, ng0);
    t4 = (t1 + 13112U);
    t5 = *((char **)t4);
    memcpy(t25, t5, 8);
    t4 = (t1 + 16712);
    xsi_vlogvar_wait_assign_value(t4, t25, 0, 0, 7, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t12 = (t2 + 48U);
    *((char **)t12) = &&LAB8;
    goto LAB1;

LAB15:    t0 = -1;
    goto LAB1;

LAB17:    t12 = (t2 + 48U);
    *((char **)t12) = &&LAB14;
    goto LAB1;

}

static int sp_alu_from_reg(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(207, ng0);

LAB5:    xsi_set_current_line(208, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 16552);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t4 = (t1 + 17352);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 16712);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 7, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_alu_from_imm(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(213, ng0);

LAB5:    xsi_set_current_line(214, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t1 + 16552);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(215, ng0);
    t4 = (t1 + 17512);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 16712);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 7, 0LL);
    xsi_set_current_line(216, ng0);
    t4 = (t1 + 17672);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 16392);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_mem_opt(char *t1, char *t2)
{
    char t29[8];
    char t42[8];
    char t52[8];
    char t65[8];
    char t71[8];
    char t93[8];
    char t110[8];
    char t126[8];
    char t134[8];
    char t162[8];
    char t179[8];
    char t195[8];
    char t203[8];
    int t0;
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
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
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
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    char *t177;
    char *t178;
    char *t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    char *t238;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3008);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(220, ng0);

LAB5:    xsi_set_current_line(221, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t8, &&LAB6);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t1, t11, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t11, t12);

LAB8:    t13 = (t2 + 64U);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t1, t14);
    if (t21 == -1)
        goto LAB9;

LAB10:    if (t21 != 0)
        goto LAB11;

LAB6:    t14 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB7:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t22 = (t1 + 848);
    t24 = (t2 + 56U);
    t25 = *((char **)t24);
    xsi_delete_subprogram_invocation(t22, t23, t1, t25, t2);
    xsi_set_current_line(222, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB12);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 1280);
    t11 = xsi_create_subprogram_invocation(t9, 0, t1, t10, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t10, t11);

LAB14:    t12 = (t2 + 64U);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t21 = ((int  (*)(char *, char *))t19)(t1, t13);
    if (t21 == -1)
        goto LAB15;

LAB16:    if (t21 != 0)
        goto LAB17;

LAB12:    t13 = (t1 + 1280);
    xsi_vlog_subprogram_popinvocation(t13);

LAB13:    t20 = (t2 + 64U);
    t22 = *((char **)t20);
    t20 = (t1 + 1280);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    xsi_delete_subprogram_invocation(t20, t22, t1, t24, t2);
    xsi_set_current_line(223, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 14072U);
    t6 = *((char **)t5);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t9, &&LAB18);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t1 + 2576);
    t13 = xsi_create_subprogram_invocation(t11, 0, t1, t12, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t14 = (t1 + 17512);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 7);
    t15 = (t1 + 17672);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 32);

LAB20:    t16 = (t2 + 64U);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t22 = *((char **)t20);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t21 = ((int  (*)(char *, char *))t24)(t1, t17);
    if (t21 == -1)
        goto LAB21;

LAB22:    if (t21 != 0)
        goto LAB23;

LAB18:    t17 = (t1 + 2576);
    xsi_vlog_subprogram_popinvocation(t17);

LAB19:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 2576);
    t27 = (t2 + 56U);
    t28 = *((char **)t27);
    xsi_delete_subprogram_invocation(t25, t26, t1, t28, t2);
    xsi_set_current_line(224, ng0);
    t4 = (t1 + 17832);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t29, 0, 8);
    t8 = (t6 + 4);
    t9 = (t7 + 4);
    t30 = *((unsigned int *)t6);
    t31 = *((unsigned int *)t7);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t8);
    t34 = *((unsigned int *)t9);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t8);
    t38 = *((unsigned int *)t9);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB27;

LAB24:    if (t39 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t29) = 1;

LAB27:    memset(t42, 0, 8);
    t11 = (t29 + 4);
    t43 = *((unsigned int *)t11);
    t44 = (~(t43));
    t45 = *((unsigned int *)t29);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t11) != 0)
        goto LAB30;

LAB31:    t13 = (t42 + 4);
    t48 = *((unsigned int *)t42);
    t49 = (!(t48));
    t50 = *((unsigned int *)t13);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB32;

LAB33:    memcpy(t71, t42, 8);

LAB34:    memset(t93, 0, 8);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t71);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t94) != 0)
        goto LAB48;

LAB49:    t101 = (t93 + 4);
    t102 = *((unsigned int *)t93);
    t103 = (!(t102));
    t104 = *((unsigned int *)t101);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB50;

LAB51:    memcpy(t134, t93, 8);

LAB52:    memset(t162, 0, 8);
    t163 = (t134 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (~(t164));
    t166 = *((unsigned int *)t134);
    t167 = (t166 & t165);
    t168 = (t167 & 1U);
    if (t168 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t163) != 0)
        goto LAB66;

LAB67:    t170 = (t162 + 4);
    t171 = *((unsigned int *)t162);
    t172 = (!(t171));
    t173 = *((unsigned int *)t170);
    t174 = (t172 || t173);
    if (t174 > 0)
        goto LAB68;

LAB69:    memcpy(t203, t162, 8);

LAB70:    t231 = (t203 + 4);
    t232 = *((unsigned int *)t231);
    t233 = (~(t232));
    t234 = *((unsigned int *)t203);
    t235 = (t234 & t233);
    t236 = (t235 != 0);
    if (t236 > 0)
        goto LAB82;

LAB83:
LAB84:    xsi_set_current_line(226, ng0);
    t4 = (t1 + 17832);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 16872);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t13 = (t2 + 48U);
    *((char **)t13) = &&LAB8;
    goto LAB1;

LAB15:    t0 = -1;
    goto LAB1;

LAB17:    t12 = (t2 + 48U);
    *((char **)t12) = &&LAB14;
    goto LAB1;

LAB21:    t0 = -1;
    goto LAB1;

LAB23:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB20;
    goto LAB1;

LAB26:    t10 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t42) = 1;
    goto LAB31;

LAB30:    t12 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB31;

LAB32:    t14 = (t1 + 17832);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    memset(t52, 0, 8);
    t18 = (t16 + 4);
    t19 = (t17 + 4);
    t53 = *((unsigned int *)t16);
    t54 = *((unsigned int *)t17);
    t55 = (t53 ^ t54);
    t56 = *((unsigned int *)t18);
    t57 = *((unsigned int *)t19);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t18);
    t61 = *((unsigned int *)t19);
    t62 = (t60 | t61);
    t63 = (~(t62));
    t64 = (t59 & t63);
    if (t64 != 0)
        goto LAB38;

LAB35:    if (t62 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t52) = 1;

LAB38:    memset(t65, 0, 8);
    t22 = (t52 + 4);
    t66 = *((unsigned int *)t22);
    t67 = (~(t66));
    t68 = *((unsigned int *)t52);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t22) != 0)
        goto LAB41;

LAB42:    t72 = *((unsigned int *)t42);
    t73 = *((unsigned int *)t65);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t24 = (t42 + 4);
    t25 = (t65 + 4);
    t26 = (t71 + 4);
    t75 = *((unsigned int *)t24);
    t76 = *((unsigned int *)t25);
    t77 = (t75 | t76);
    *((unsigned int *)t26) = t77;
    t78 = *((unsigned int *)t26);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB34;

LAB37:    t20 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t65) = 1;
    goto LAB42;

LAB41:    t23 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB42;

LAB43:    t80 = *((unsigned int *)t71);
    t81 = *((unsigned int *)t26);
    *((unsigned int *)t71) = (t80 | t81);
    t27 = (t42 + 4);
    t28 = (t65 + 4);
    t82 = *((unsigned int *)t27);
    t83 = (~(t82));
    t84 = *((unsigned int *)t42);
    t21 = (t84 & t83);
    t85 = *((unsigned int *)t28);
    t86 = (~(t85));
    t87 = *((unsigned int *)t65);
    t88 = (t87 & t86);
    t89 = (~(t21));
    t90 = (~(t88));
    t91 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t91 & t89);
    t92 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t92 & t90);
    goto LAB45;

LAB46:    *((unsigned int *)t93) = 1;
    goto LAB49;

LAB48:    t100 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB49;

LAB50:    t106 = (t1 + 17832);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    t109 = ((char*)((ng5)));
    memset(t110, 0, 8);
    t111 = (t108 + 4);
    t112 = (t109 + 4);
    t113 = *((unsigned int *)t108);
    t114 = *((unsigned int *)t109);
    t115 = (t113 ^ t114);
    t116 = *((unsigned int *)t111);
    t117 = *((unsigned int *)t112);
    t118 = (t116 ^ t117);
    t119 = (t115 | t118);
    t120 = *((unsigned int *)t111);
    t121 = *((unsigned int *)t112);
    t122 = (t120 | t121);
    t123 = (~(t122));
    t124 = (t119 & t123);
    if (t124 != 0)
        goto LAB56;

LAB53:    if (t122 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t110) = 1;

LAB56:    memset(t126, 0, 8);
    t127 = (t110 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t110);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t127) != 0)
        goto LAB59;

LAB60:    t135 = *((unsigned int *)t93);
    t136 = *((unsigned int *)t126);
    t137 = (t135 | t136);
    *((unsigned int *)t134) = t137;
    t138 = (t93 + 4);
    t139 = (t126 + 4);
    t140 = (t134 + 4);
    t141 = *((unsigned int *)t138);
    t142 = *((unsigned int *)t139);
    t143 = (t141 | t142);
    *((unsigned int *)t140) = t143;
    t144 = *((unsigned int *)t140);
    t145 = (t144 != 0);
    if (t145 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB52;

LAB55:    t125 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t126) = 1;
    goto LAB60;

LAB59:    t133 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB60;

LAB61:    t146 = *((unsigned int *)t134);
    t147 = *((unsigned int *)t140);
    *((unsigned int *)t134) = (t146 | t147);
    t148 = (t93 + 4);
    t149 = (t126 + 4);
    t150 = *((unsigned int *)t148);
    t151 = (~(t150));
    t152 = *((unsigned int *)t93);
    t153 = (t152 & t151);
    t154 = *((unsigned int *)t149);
    t155 = (~(t154));
    t156 = *((unsigned int *)t126);
    t157 = (t156 & t155);
    t158 = (~(t153));
    t159 = (~(t157));
    t160 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t160 & t158);
    t161 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t161 & t159);
    goto LAB63;

LAB64:    *((unsigned int *)t162) = 1;
    goto LAB67;

LAB66:    t169 = (t162 + 4);
    *((unsigned int *)t162) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB67;

LAB68:    t175 = (t1 + 17832);
    t176 = (t175 + 56U);
    t177 = *((char **)t176);
    t178 = ((char*)((ng6)));
    memset(t179, 0, 8);
    t180 = (t177 + 4);
    t181 = (t178 + 4);
    t182 = *((unsigned int *)t177);
    t183 = *((unsigned int *)t178);
    t184 = (t182 ^ t183);
    t185 = *((unsigned int *)t180);
    t186 = *((unsigned int *)t181);
    t187 = (t185 ^ t186);
    t188 = (t184 | t187);
    t189 = *((unsigned int *)t180);
    t190 = *((unsigned int *)t181);
    t191 = (t189 | t190);
    t192 = (~(t191));
    t193 = (t188 & t192);
    if (t193 != 0)
        goto LAB74;

LAB71:    if (t191 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t179) = 1;

LAB74:    memset(t195, 0, 8);
    t196 = (t179 + 4);
    t197 = *((unsigned int *)t196);
    t198 = (~(t197));
    t199 = *((unsigned int *)t179);
    t200 = (t199 & t198);
    t201 = (t200 & 1U);
    if (t201 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t196) != 0)
        goto LAB77;

LAB78:    t204 = *((unsigned int *)t162);
    t205 = *((unsigned int *)t195);
    t206 = (t204 | t205);
    *((unsigned int *)t203) = t206;
    t207 = (t162 + 4);
    t208 = (t195 + 4);
    t209 = (t203 + 4);
    t210 = *((unsigned int *)t207);
    t211 = *((unsigned int *)t208);
    t212 = (t210 | t211);
    *((unsigned int *)t209) = t212;
    t213 = *((unsigned int *)t209);
    t214 = (t213 != 0);
    if (t214 == 1)
        goto LAB79;

LAB80:
LAB81:    goto LAB70;

LAB73:    t194 = (t179 + 4);
    *((unsigned int *)t179) = 1;
    *((unsigned int *)t194) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t195) = 1;
    goto LAB78;

LAB77:    t202 = (t195 + 4);
    *((unsigned int *)t195) = 1;
    *((unsigned int *)t202) = 1;
    goto LAB78;

LAB79:    t215 = *((unsigned int *)t203);
    t216 = *((unsigned int *)t209);
    *((unsigned int *)t203) = (t215 | t216);
    t217 = (t162 + 4);
    t218 = (t195 + 4);
    t219 = *((unsigned int *)t217);
    t220 = (~(t219));
    t221 = *((unsigned int *)t162);
    t222 = (t221 & t220);
    t223 = *((unsigned int *)t218);
    t224 = (~(t223));
    t225 = *((unsigned int *)t195);
    t226 = (t225 & t224);
    t227 = (~(t222));
    t228 = (~(t226));
    t229 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t229 & t227);
    t230 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t230 & t228);
    goto LAB81;

LAB82:    xsi_set_current_line(225, ng0);
    t237 = (t1 + 13432U);
    t238 = *((char **)t237);
    t237 = (t1 + 17032);
    xsi_vlogvar_wait_assign_value(t237, t238, 0, 0, 5, 0LL);
    goto LAB84;

}

static int sp_wb_with_alu_imm(char *t1, char *t2)
{
    int t0;
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
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3440);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(230, ng0);

LAB5:    xsi_set_current_line(231, ng0);
    t5 = (t1 + 13432U);
    t6 = *((char **)t5);
    t5 = (t1 + 17032);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 5, 0LL);
    xsi_set_current_line(232, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB6);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t1, t10, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t10, t11);

LAB8:    t12 = (t2 + 64U);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t1, t13);
    if (t20 == -1)
        goto LAB9;

LAB10:    if (t20 != 0)
        goto LAB11;

LAB6:    t13 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t13);

LAB7:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t21 = (t1 + 848);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    xsi_delete_subprogram_invocation(t21, t22, t1, t24, t2);
    xsi_set_current_line(233, ng0);
    t4 = (t1 + 17992);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 18152);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB12);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 2576);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 17512);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 7);
    t19 = (t1 + 17672);
    xsi_vlogvar_assign_value(t19, t9, 0, 0, 32);

LAB14:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t20 = ((int  (*)(char *, char *))t28)(t1, t22);
    if (t20 == -1)
        goto LAB15;

LAB16:    if (t20 != 0)
        goto LAB17;

LAB12:    t22 = (t1 + 2576);
    xsi_vlog_subprogram_popinvocation(t22);

LAB13:    t29 = (t2 + 64U);
    t30 = *((char **)t29);
    t29 = (t1 + 2576);
    t31 = (t2 + 56U);
    t32 = *((char **)t31);
    xsi_delete_subprogram_invocation(t29, t30, t1, t32, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t12 = (t2 + 48U);
    *((char **)t12) = &&LAB8;
    goto LAB1;

LAB15:    t0 = -1;
    goto LAB1;

LAB17:    t21 = (t2 + 48U);
    *((char **)t21) = &&LAB14;
    goto LAB1;

}

static int sp_proc_cond_branch(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3872);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(240, ng0);

LAB5:    xsi_set_current_line(241, ng0);
    t5 = (t1 + 18312);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(245, ng0);
    t4 = (t1 + 18472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t15, &&LAB22);
    t16 = (t2 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 2144);
    t19 = xsi_create_subprogram_invocation(t17, 0, t1, t18, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t18, t19);
    t20 = (t1 + 17352);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 7);

LAB24:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t30 = ((int  (*)(char *, char *))t28)(t1, t22);
    if (t30 == -1)
        goto LAB25;

LAB26:    if (t30 != 0)
        goto LAB27;

LAB22:    t22 = (t1 + 2144);
    xsi_vlog_subprogram_popinvocation(t22);

LAB23:    t29 = (t2 + 64U);
    t31 = *((char **)t29);
    t29 = (t1 + 2144);
    t32 = (t2 + 56U);
    t33 = *((char **)t32);
    xsi_delete_subprogram_invocation(t29, t31, t1, t33, t2);
    xsi_set_current_line(246, ng0);
    t4 = (t1 + 18632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 16072);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 2, 0LL);
    xsi_set_current_line(247, ng0);
    t4 = (t1 + 14392U);
    t5 = *((char **)t4);
    t4 = (t1 + 16232);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 33, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(241, ng0);

LAB9:    xsi_set_current_line(242, ng0);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t2 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t17, &&LAB10);
    t18 = (t2 + 56U);
    t19 = *((char **)t18);
    t20 = (t1 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t1, t20, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t20, t21);

LAB12:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t24 = (t23 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t27 = *((char **)t26);
    t28 = (t27 + 0U);
    t29 = *((char **)t28);
    t30 = ((int  (*)(char *, char *))t29)(t1, t23);
    if (t30 == -1)
        goto LAB13;

LAB14:    if (t30 != 0)
        goto LAB15;

LAB10:    t23 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t23);

LAB11:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t31 = (t1 + 848);
    t33 = (t2 + 56U);
    t34 = *((char **)t33);
    xsi_delete_subprogram_invocation(t31, t32, t1, t34, t2);
    xsi_set_current_line(243, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB16);
    t8 = (t2 + 56U);
    t14 = *((char **)t8);
    t15 = (t1 + 1280);
    t16 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB18:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t30 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t30 == -1)
        goto LAB19;

LAB20:    if (t30 != 0)
        goto LAB21;

LAB16:    t18 = (t1 + 1280);
    xsi_vlog_subprogram_popinvocation(t18);

LAB17:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 1280);
    t27 = (t2 + 56U);
    t28 = *((char **)t27);
    xsi_delete_subprogram_invocation(t25, t26, t1, t28, t2);
    goto LAB8;

LAB13:    t0 = -1;
    goto LAB1;

LAB15:    t22 = (t2 + 48U);
    *((char **)t22) = &&LAB12;
    goto LAB1;

LAB19:    t0 = -1;
    goto LAB1;

LAB21:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB18;
    goto LAB1;

LAB25:    t0 = -1;
    goto LAB1;

LAB27:    t21 = (t2 + 48U);
    *((char **)t21) = &&LAB24;
    goto LAB1;

}

static int sp_invalid_instruction(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4304);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(251, ng0);

LAB5:    xsi_set_current_line(253, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t1 + 15592);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(254, ng0);
    t4 = (t1 + 12472U);
    t5 = *((char **)t4);
    t4 = (t1 + 15912);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_proc_itype(char *t1, char *t2)
{
    char t36[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
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
    char *t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
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
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4736);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(258, ng0);

LAB5:    xsi_set_current_line(259, ng0);
    t5 = (t1 + 12952U);
    t6 = *((char **)t5);

LAB6:    t5 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t5, 6);
    if (t7 == 1)
        goto LAB7;

LAB8:    t4 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB9;

LAB10:    t4 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng12)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB13;

LAB14:    t4 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB15;

LAB16:    t4 = ((char*)((ng14)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB17;

LAB18:    t4 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB19;

LAB20:    t4 = ((char*)((ng15)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB21;

LAB22:    t4 = ((char*)((ng17)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB23;

LAB24:    t4 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB25;

LAB26:    t4 = ((char*)((ng20)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB27;

LAB28:    t4 = ((char*)((ng21)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB29;

LAB30:    t4 = ((char*)((ng23)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB31;

LAB32:    t4 = ((char*)((ng24)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB33;

LAB34:    t4 = ((char*)((ng18)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB35;

LAB36:    t4 = ((char*)((ng19)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB37;

LAB38:    t4 = ((char*)((ng25)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB39;

LAB40:    t4 = ((char*)((ng16)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB41;

LAB42:
LAB44:
LAB43:    xsi_set_current_line(318, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t11, &&LAB216);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 4304);
    t15 = xsi_create_subprogram_invocation(t13, 0, t1, t14, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t14, t15);

LAB218:    t16 = (t2 + 64U);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t7 = ((int  (*)(char *, char *))t23)(t1, t17);
    if (t7 == -1)
        goto LAB219;

LAB220:    if (t7 != 0)
        goto LAB221;

LAB216:    t17 = (t1 + 4304);
    xsi_vlog_subprogram_popinvocation(t17);

LAB217:    t24 = (t2 + 64U);
    t25 = *((char **)t24);
    t24 = (t1 + 4304);
    t26 = (t2 + 56U);
    t28 = *((char **)t26);
    xsi_delete_subprogram_invocation(t24, t25, t1, t28, t2);

LAB45:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(261, ng0);
    t8 = (t1 + 13432U);
    t9 = *((char **)t8);

LAB46:    t8 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_compare(t9, 5, t8, 5);
    if (t10 == 1)
        goto LAB47;

LAB48:    t4 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t9, 5, t4, 5);
    if (t7 == 1)
        goto LAB49;

LAB50:
LAB52:
LAB51:    xsi_set_current_line(271, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t11, &&LAB80);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 4304);
    t15 = xsi_create_subprogram_invocation(t13, 0, t1, t14, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t14, t15);

LAB82:    t16 = (t2 + 64U);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t7 = ((int  (*)(char *, char *))t23)(t1, t17);
    if (t7 == -1)
        goto LAB83;

LAB84:    if (t7 != 0)
        goto LAB85;

LAB80:    t17 = (t1 + 4304);
    xsi_vlog_subprogram_popinvocation(t17);

LAB81:    t24 = (t2 + 64U);
    t25 = *((char **)t24);
    t24 = (t1 + 4304);
    t26 = (t2 + 56U);
    t28 = *((char **)t26);
    xsi_delete_subprogram_invocation(t24, t25, t1, t28, t2);

LAB53:    goto LAB45;

LAB9:    xsi_set_current_line(274, ng0);
    t5 = ((char*)((ng1)));
    t8 = ((char*)((ng10)));
    t11 = ((char*)((ng1)));
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t15, &&LAB86);
    t16 = (t2 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 3872);
    t19 = xsi_create_subprogram_invocation(t17, 0, t1, t18, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t18, t19);
    t20 = (t1 + 18312);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 1);
    t21 = (t1 + 18472);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 7);
    t22 = (t1 + 18632);
    xsi_vlogvar_assign_value(t22, t11, 0, 0, 2);

LAB88:    t23 = (t2 + 64U);
    t24 = *((char **)t23);
    t25 = (t24 + 80U);
    t26 = *((char **)t25);
    t28 = (t26 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t10 = ((int  (*)(char *, char *))t31)(t1, t24);
    if (t10 == -1)
        goto LAB89;

LAB90:    if (t10 != 0)
        goto LAB91;

LAB86:    t24 = (t1 + 3872);
    xsi_vlog_subprogram_popinvocation(t24);

LAB87:    t32 = (t2 + 64U);
    t33 = *((char **)t32);
    t32 = (t1 + 3872);
    t34 = (t2 + 56U);
    t35 = *((char **)t34);
    xsi_delete_subprogram_invocation(t32, t33, t1, t35, t2);
    goto LAB45;

LAB11:    xsi_set_current_line(276, ng0);
    t5 = ((char*)((ng1)));
    t8 = ((char*)((ng10)));
    t11 = ((char*)((ng4)));
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t15, &&LAB92);
    t16 = (t2 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 3872);
    t19 = xsi_create_subprogram_invocation(t17, 0, t1, t18, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t18, t19);
    t20 = (t1 + 18312);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 1);
    t21 = (t1 + 18472);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 7);
    t22 = (t1 + 18632);
    xsi_vlogvar_assign_value(t22, t11, 0, 0, 2);

LAB94:    t23 = (t2 + 64U);
    t24 = *((char **)t23);
    t25 = (t24 + 80U);
    t26 = *((char **)t25);
    t28 = (t26 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t10 = ((int  (*)(char *, char *))t31)(t1, t24);
    if (t10 == -1)
        goto LAB95;

LAB96:    if (t10 != 0)
        goto LAB97;

LAB92:    t24 = (t1 + 3872);
    xsi_vlog_subprogram_popinvocation(t24);

LAB93:    t32 = (t2 + 64U);
    t33 = *((char **)t32);
    t32 = (t1 + 3872);
    t34 = (t2 + 56U);
    t35 = *((char **)t34);
    xsi_delete_subprogram_invocation(t32, t33, t1, t35, t2);
    goto LAB45;

LAB13:    xsi_set_current_line(278, ng0);
    t5 = (t1 + 13432U);
    t8 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t36, 0, 8);
    t11 = (t8 + 4);
    t12 = (t5 + 4);
    t37 = *((unsigned int *)t8);
    t38 = *((unsigned int *)t5);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t11);
    t41 = *((unsigned int *)t12);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t11);
    t45 = *((unsigned int *)t12);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB101;

LAB98:    if (t46 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t36) = 1;

LAB101:    t14 = (t36 + 4);
    t49 = *((unsigned int *)t14);
    t50 = (~(t49));
    t51 = *((unsigned int *)t36);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(283, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t11, &&LAB112);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 4304);
    t15 = xsi_create_subprogram_invocation(t13, 0, t1, t14, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t14, t15);

LAB114:    t16 = (t2 + 64U);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t7 = ((int  (*)(char *, char *))t23)(t1, t17);
    if (t7 == -1)
        goto LAB115;

LAB116:    if (t7 != 0)
        goto LAB117;

LAB112:    t17 = (t1 + 4304);
    xsi_vlog_subprogram_popinvocation(t17);

LAB113:    t24 = (t2 + 64U);
    t25 = *((char **)t24);
    t24 = (t1 + 4304);
    t26 = (t2 + 56U);
    t28 = *((char **)t26);
    xsi_delete_subprogram_invocation(t24, t25, t1, t28, t2);

LAB104:    goto LAB45;

LAB15:    xsi_set_current_line(285, ng0);
    t5 = (t1 + 13432U);
    t8 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t36, 0, 8);
    t11 = (t8 + 4);
    t12 = (t5 + 4);
    t37 = *((unsigned int *)t8);
    t38 = *((unsigned int *)t5);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t11);
    t41 = *((unsigned int *)t12);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t11);
    t45 = *((unsigned int *)t12);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB121;

LAB118:    if (t46 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t36) = 1;

LAB121:    t14 = (t36 + 4);
    t49 = *((unsigned int *)t14);
    t50 = (~(t49));
    t51 = *((unsigned int *)t36);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(290, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t11, &&LAB132);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 4304);
    t15 = xsi_create_subprogram_invocation(t13, 0, t1, t14, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t14, t15);

LAB134:    t16 = (t2 + 64U);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t7 = ((int  (*)(char *, char *))t23)(t1, t17);
    if (t7 == -1)
        goto LAB135;

LAB136:    if (t7 != 0)
        goto LAB137;

LAB132:    t17 = (t1 + 4304);
    xsi_vlog_subprogram_popinvocation(t17);

LAB133:    t24 = (t2 + 64U);
    t25 = *((char **)t24);
    t24 = (t1 + 4304);
    t26 = (t2 + 56U);
    t28 = *((char **)t26);
    xsi_delete_subprogram_invocation(t24, t25, t1, t28, t2);

LAB124:    goto LAB45;

LAB17:    xsi_set_current_line(292, ng0);
    t5 = ((char*)((ng3)));
    t8 = (t1 + 14072U);
    t11 = *((char **)t8);
    t8 = (t2 + 56U);
    t12 = *((char **)t8);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB138);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 3440);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 17992);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 7);
    t20 = (t1 + 18152);
    xsi_vlogvar_assign_value(t20, t11, 0, 0, 32);

LAB140:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t28 = (t26 + 0U);
    t29 = *((char **)t28);
    t10 = ((int  (*)(char *, char *))t29)(t1, t22);
    if (t10 == -1)
        goto LAB141;

LAB142:    if (t10 != 0)
        goto LAB143;

LAB138:    t22 = (t1 + 3440);
    xsi_vlog_subprogram_popinvocation(t22);

LAB139:    t30 = (t2 + 64U);
    t31 = *((char **)t30);
    t30 = (t1 + 3440);
    t32 = (t2 + 56U);
    t33 = *((char **)t32);
    xsi_delete_subprogram_invocation(t30, t31, t1, t33, t2);
    goto LAB45;

LAB19:    xsi_set_current_line(294, ng0);
    t5 = ((char*)((ng8)));
    t8 = (t1 + 14072U);
    t11 = *((char **)t8);
    t8 = (t2 + 56U);
    t12 = *((char **)t8);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB144);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 3440);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 17992);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 7);
    t20 = (t1 + 18152);
    xsi_vlogvar_assign_value(t20, t11, 0, 0, 32);

LAB146:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t28 = (t26 + 0U);
    t29 = *((char **)t28);
    t10 = ((int  (*)(char *, char *))t29)(t1, t22);
    if (t10 == -1)
        goto LAB147;

LAB148:    if (t10 != 0)
        goto LAB149;

LAB144:    t22 = (t1 + 3440);
    xsi_vlog_subprogram_popinvocation(t22);

LAB145:    t30 = (t2 + 64U);
    t31 = *((char **)t30);
    t30 = (t1 + 3440);
    t32 = (t2 + 56U);
    t33 = *((char **)t32);
    xsi_delete_subprogram_invocation(t30, t31, t1, t33, t2);
    goto LAB45;

LAB21:    xsi_set_current_line(296, ng0);
    t5 = ((char*)((ng16)));
    t8 = (t1 + 14232U);
    t11 = *((char **)t8);
    t8 = (t2 + 56U);
    t12 = *((char **)t8);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB150);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 3440);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 17992);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 7);
    t20 = (t1 + 18152);
    xsi_vlogvar_assign_value(t20, t11, 0, 0, 32);

LAB152:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t28 = (t26 + 0U);
    t29 = *((char **)t28);
    t10 = ((int  (*)(char *, char *))t29)(t1, t22);
    if (t10 == -1)
        goto LAB153;

LAB154:    if (t10 != 0)
        goto LAB155;

LAB150:    t22 = (t1 + 3440);
    xsi_vlog_subprogram_popinvocation(t22);

LAB151:    t30 = (t2 + 64U);
    t31 = *((char **)t30);
    t30 = (t1 + 3440);
    t32 = (t2 + 56U);
    t33 = *((char **)t32);
    xsi_delete_subprogram_invocation(t30, t31, t1, t33, t2);
    goto LAB45;

LAB23:    xsi_set_current_line(298, ng0);
    t5 = ((char*)((ng18)));
    t8 = (t1 + 14232U);
    t11 = *((char **)t8);
    t8 = (t2 + 56U);
    t12 = *((char **)t8);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB156);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 3440);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 17992);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 7);
    t20 = (t1 + 18152);
    xsi_vlogvar_assign_value(t20, t11, 0, 0, 32);

LAB158:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t28 = (t26 + 0U);
    t29 = *((char **)t28);
    t10 = ((int  (*)(char *, char *))t29)(t1, t22);
    if (t10 == -1)
        goto LAB159;

LAB160:    if (t10 != 0)
        goto LAB161;

LAB156:    t22 = (t1 + 3440);
    xsi_vlog_subprogram_popinvocation(t22);

LAB157:    t30 = (t2 + 64U);
    t31 = *((char **)t30);
    t30 = (t1 + 3440);
    t32 = (t2 + 56U);
    t33 = *((char **)t32);
    xsi_delete_subprogram_invocation(t30, t31, t1, t33, t2);
    goto LAB45;

LAB25:    xsi_set_current_line(300, ng0);
    t5 = ((char*)((ng19)));
    t8 = (t1 + 14232U);
    t11 = *((char **)t8);
    t8 = (t2 + 56U);
    t12 = *((char **)t8);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB162);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 3440);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 17992);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 7);
    t20 = (t1 + 18152);
    xsi_vlogvar_assign_value(t20, t11, 0, 0, 32);

LAB164:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t28 = (t26 + 0U);
    t29 = *((char **)t28);
    t10 = ((int  (*)(char *, char *))t29)(t1, t22);
    if (t10 == -1)
        goto LAB165;

LAB166:    if (t10 != 0)
        goto LAB167;

LAB162:    t22 = (t1 + 3440);
    xsi_vlog_subprogram_popinvocation(t22);

LAB163:    t30 = (t2 + 64U);
    t31 = *((char **)t30);
    t30 = (t1 + 3440);
    t32 = (t2 + 56U);
    t33 = *((char **)t32);
    xsi_delete_subprogram_invocation(t30, t31, t1, t33, t2);
    goto LAB45;

LAB27:    xsi_set_current_line(302, ng0);
    t5 = ((char*)((ng10)));
    t8 = (t1 + 14232U);
    t11 = *((char **)t8);
    t8 = (t2 + 56U);
    t12 = *((char **)t8);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB168);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 3440);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 17992);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 7);
    t20 = (t1 + 18152);
    xsi_vlogvar_assign_value(t20, t11, 0, 0, 32);

LAB170:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t28 = (t26 + 0U);
    t29 = *((char **)t28);
    t10 = ((int  (*)(char *, char *))t29)(t1, t22);
    if (t10 == -1)
        goto LAB171;

LAB172:    if (t10 != 0)
        goto LAB173;

LAB168:    t22 = (t1 + 3440);
    xsi_vlog_subprogram_popinvocation(t22);

LAB169:    t30 = (t2 + 64U);
    t31 = *((char **)t30);
    t30 = (t1 + 3440);
    t32 = (t2 + 56U);
    t33 = *((char **)t32);
    xsi_delete_subprogram_invocation(t30, t31, t1, t33, t2);
    goto LAB45;

LAB29:    xsi_set_current_line(304, ng0);
    t5 = ((char*)((ng22)));
    t8 = ((char*)((ng2)));
    t11 = (t1 + 13912U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t36, 32, 32, 2U, t12, 16, t8, 16);
    t11 = (t2 + 56U);
    t13 = *((char **)t11);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t15, &&LAB174);
    t16 = (t2 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 3440);
    t19 = xsi_create_subprogram_invocation(t17, 0, t1, t18, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t18, t19);
    t20 = (t1 + 17992);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 7);
    t21 = (t1 + 18152);
    xsi_vlogvar_assign_value(t21, t36, 0, 0, 32);

LAB176:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t24 = (t23 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t28 = *((char **)t26);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t10 = ((int  (*)(char *, char *))t30)(t1, t23);
    if (t10 == -1)
        goto LAB177;

LAB178:    if (t10 != 0)
        goto LAB179;

LAB174:    t23 = (t1 + 3440);
    xsi_vlog_subprogram_popinvocation(t23);

LAB175:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t31 = (t1 + 3440);
    t33 = (t2 + 56U);
    t34 = *((char **)t33);
    xsi_delete_subprogram_invocation(t31, t32, t1, t34, t2);
    goto LAB45;

LAB31:    xsi_set_current_line(306, ng0);
    t5 = ((char*)((ng4)));
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB180);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 3008);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 17832);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 4);

LAB182:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t10 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t10 == -1)
        goto LAB183;

LAB184:    if (t10 != 0)
        goto LAB185;

LAB180:    t20 = (t1 + 3008);
    xsi_vlog_subprogram_popinvocation(t20);

LAB181:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 3008);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    goto LAB45;

LAB33:    xsi_set_current_line(308, ng0);
    t5 = ((char*)((ng1)));
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB186);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 3008);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 17832);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 4);

LAB188:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t10 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t10 == -1)
        goto LAB189;

LAB190:    if (t10 != 0)
        goto LAB191;

LAB186:    t20 = (t1 + 3008);
    xsi_vlog_subprogram_popinvocation(t20);

LAB187:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 3008);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    goto LAB45;

LAB35:    xsi_set_current_line(310, ng0);
    t5 = ((char*)((ng5)));
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB192);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 3008);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 17832);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 4);

LAB194:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t10 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t10 == -1)
        goto LAB195;

LAB196:    if (t10 != 0)
        goto LAB197;

LAB192:    t20 = (t1 + 3008);
    xsi_vlog_subprogram_popinvocation(t20);

LAB193:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 3008);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    goto LAB45;

LAB37:    xsi_set_current_line(312, ng0);
    t5 = ((char*)((ng6)));
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB198);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 3008);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 17832);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 4);

LAB200:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t10 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t10 == -1)
        goto LAB201;

LAB202:    if (t10 != 0)
        goto LAB203;

LAB198:    t20 = (t1 + 3008);
    xsi_vlog_subprogram_popinvocation(t20);

LAB199:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 3008);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    goto LAB45;

LAB39:    xsi_set_current_line(314, ng0);
    t5 = ((char*)((ng11)));
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB204);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 3008);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 17832);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 4);

LAB206:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t10 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t10 == -1)
        goto LAB207;

LAB208:    if (t10 != 0)
        goto LAB209;

LAB204:    t20 = (t1 + 3008);
    xsi_vlog_subprogram_popinvocation(t20);

LAB205:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 3008);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    goto LAB45;

LAB41:    xsi_set_current_line(316, ng0);
    t5 = ((char*)((ng9)));
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB210);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 3008);
    t17 = xsi_create_subprogram_invocation(t15, 0, t1, t16, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t16, t17);
    t18 = (t1 + 17832);
    xsi_vlogvar_assign_value(t18, t5, 0, 0, 4);

LAB212:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t10 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t10 == -1)
        goto LAB213;

LAB214:    if (t10 != 0)
        goto LAB215;

LAB210:    t20 = (t1 + 3008);
    xsi_vlog_subprogram_popinvocation(t20);

LAB211:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 3008);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    goto LAB45;

LAB47:    xsi_set_current_line(262, ng0);

LAB54:    xsi_set_current_line(263, ng0);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB55);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 848);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);

LAB57:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t27 == -1)
        goto LAB58;

LAB59:    if (t27 != 0)
        goto LAB60;

LAB55:    t20 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB56:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 848);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    xsi_set_current_line(264, ng0);
    t4 = ((char*)((ng2)));
    t5 = ((char*)((ng8)));
    t8 = ((char*)((ng1)));
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB61);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 3872);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 18312);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 1);
    t20 = (t1 + 18472);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 7);
    t21 = (t1 + 18632);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 2);

LAB63:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t24 = (t23 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t28 = *((char **)t26);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t7 = ((int  (*)(char *, char *))t30)(t1, t23);
    if (t7 == -1)
        goto LAB64;

LAB65:    if (t7 != 0)
        goto LAB66;

LAB61:    t23 = (t1 + 3872);
    xsi_vlog_subprogram_popinvocation(t23);

LAB62:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t31 = (t1 + 3872);
    t33 = (t2 + 56U);
    t34 = *((char **)t33);
    xsi_delete_subprogram_invocation(t31, t32, t1, t34, t2);
    goto LAB53;

LAB49:    xsi_set_current_line(266, ng0);

LAB67:    xsi_set_current_line(267, ng0);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB68);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 848);
    t16 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB70:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t10 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t10 == -1)
        goto LAB71;

LAB72:    if (t10 != 0)
        goto LAB73;

LAB68:    t18 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t18);

LAB69:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 848);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t25, t26, t1, t29, t2);
    xsi_set_current_line(268, ng0);
    t4 = ((char*)((ng2)));
    t5 = ((char*)((ng8)));
    t8 = ((char*)((ng4)));
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB74);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 3872);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 18312);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 1);
    t20 = (t1 + 18472);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 7);
    t21 = (t1 + 18632);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 2);

LAB76:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t24 = (t23 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t28 = *((char **)t26);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t7 = ((int  (*)(char *, char *))t30)(t1, t23);
    if (t7 == -1)
        goto LAB77;

LAB78:    if (t7 != 0)
        goto LAB79;

LAB74:    t23 = (t1 + 3872);
    xsi_vlog_subprogram_popinvocation(t23);

LAB75:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t31 = (t1 + 3872);
    t33 = (t2 + 56U);
    t34 = *((char **)t33);
    xsi_delete_subprogram_invocation(t31, t32, t1, t34, t2);
    goto LAB53;

LAB58:    t0 = -1;
    goto LAB1;

LAB60:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB57;
    goto LAB1;

LAB64:    t0 = -1;
    goto LAB1;

LAB66:    t22 = (t2 + 48U);
    *((char **)t22) = &&LAB63;
    goto LAB1;

LAB71:    t0 = -1;
    goto LAB1;

LAB73:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB70;
    goto LAB1;

LAB77:    t0 = -1;
    goto LAB1;

LAB79:    t22 = (t2 + 48U);
    *((char **)t22) = &&LAB76;
    goto LAB1;

LAB83:    t0 = -1;
    goto LAB1;

LAB85:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB82;
    goto LAB1;

LAB89:    t0 = -1;
    goto LAB1;

LAB91:    t23 = (t2 + 48U);
    *((char **)t23) = &&LAB88;
    goto LAB1;

LAB95:    t0 = -1;
    goto LAB1;

LAB97:    t23 = (t2 + 48U);
    *((char **)t23) = &&LAB94;
    goto LAB1;

LAB100:    t13 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(278, ng0);

LAB105:    xsi_set_current_line(279, ng0);
    t15 = (t1 + 13272U);
    t16 = *((char **)t15);
    t15 = (t1 + 15272);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, 0, 5, 0LL);
    xsi_set_current_line(280, ng0);
    t4 = (t1 + 12632U);
    t5 = *((char **)t4);
    t4 = (t1 + 15432);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(281, ng0);
    t4 = ((char*)((ng2)));
    t5 = ((char*)((ng8)));
    t8 = ((char*)((ng1)));
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB106);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 3872);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 18312);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 1);
    t20 = (t1 + 18472);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 7);
    t21 = (t1 + 18632);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 2);

LAB108:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t24 = (t23 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t28 = *((char **)t26);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t7 = ((int  (*)(char *, char *))t30)(t1, t23);
    if (t7 == -1)
        goto LAB109;

LAB110:    if (t7 != 0)
        goto LAB111;

LAB106:    t23 = (t1 + 3872);
    xsi_vlog_subprogram_popinvocation(t23);

LAB107:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t31 = (t1 + 3872);
    t33 = (t2 + 56U);
    t34 = *((char **)t33);
    xsi_delete_subprogram_invocation(t31, t32, t1, t34, t2);
    goto LAB104;

LAB109:    t0 = -1;
    goto LAB1;

LAB111:    t22 = (t2 + 48U);
    *((char **)t22) = &&LAB108;
    goto LAB1;

LAB115:    t0 = -1;
    goto LAB1;

LAB117:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB114;
    goto LAB1;

LAB120:    t13 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(285, ng0);

LAB125:    xsi_set_current_line(286, ng0);
    t15 = (t1 + 13272U);
    t16 = *((char **)t15);
    t15 = (t1 + 15272);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, 0, 5, 0LL);
    xsi_set_current_line(287, ng0);
    t4 = (t1 + 12632U);
    t5 = *((char **)t4);
    t4 = (t1 + 15432);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(288, ng0);
    t4 = ((char*)((ng2)));
    t5 = ((char*)((ng8)));
    t8 = ((char*)((ng4)));
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB126);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 3872);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 18312);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 1);
    t20 = (t1 + 18472);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 7);
    t21 = (t1 + 18632);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 2);

LAB128:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t24 = (t23 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t28 = *((char **)t26);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t7 = ((int  (*)(char *, char *))t30)(t1, t23);
    if (t7 == -1)
        goto LAB129;

LAB130:    if (t7 != 0)
        goto LAB131;

LAB126:    t23 = (t1 + 3872);
    xsi_vlog_subprogram_popinvocation(t23);

LAB127:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t31 = (t1 + 3872);
    t33 = (t2 + 56U);
    t34 = *((char **)t33);
    xsi_delete_subprogram_invocation(t31, t32, t1, t34, t2);
    goto LAB124;

LAB129:    t0 = -1;
    goto LAB1;

LAB131:    t22 = (t2 + 48U);
    *((char **)t22) = &&LAB128;
    goto LAB1;

LAB135:    t0 = -1;
    goto LAB1;

LAB137:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB134;
    goto LAB1;

LAB141:    t0 = -1;
    goto LAB1;

LAB143:    t21 = (t2 + 48U);
    *((char **)t21) = &&LAB140;
    goto LAB1;

LAB147:    t0 = -1;
    goto LAB1;

LAB149:    t21 = (t2 + 48U);
    *((char **)t21) = &&LAB146;
    goto LAB1;

LAB153:    t0 = -1;
    goto LAB1;

LAB155:    t21 = (t2 + 48U);
    *((char **)t21) = &&LAB152;
    goto LAB1;

LAB159:    t0 = -1;
    goto LAB1;

LAB161:    t21 = (t2 + 48U);
    *((char **)t21) = &&LAB158;
    goto LAB1;

LAB165:    t0 = -1;
    goto LAB1;

LAB167:    t21 = (t2 + 48U);
    *((char **)t21) = &&LAB164;
    goto LAB1;

LAB171:    t0 = -1;
    goto LAB1;

LAB173:    t21 = (t2 + 48U);
    *((char **)t21) = &&LAB170;
    goto LAB1;

LAB177:    t0 = -1;
    goto LAB1;

LAB179:    t22 = (t2 + 48U);
    *((char **)t22) = &&LAB176;
    goto LAB1;

LAB183:    t0 = -1;
    goto LAB1;

LAB185:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB182;
    goto LAB1;

LAB189:    t0 = -1;
    goto LAB1;

LAB191:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB188;
    goto LAB1;

LAB195:    t0 = -1;
    goto LAB1;

LAB197:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB194;
    goto LAB1;

LAB201:    t0 = -1;
    goto LAB1;

LAB203:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB200;
    goto LAB1;

LAB207:    t0 = -1;
    goto LAB1;

LAB209:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB206;
    goto LAB1;

LAB213:    t0 = -1;
    goto LAB1;

LAB215:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB212;
    goto LAB1;

LAB219:    t0 = -1;
    goto LAB1;

LAB221:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB218;
    goto LAB1;

}

static int sp_proc_instr_j(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 5168);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(322, ng0);

LAB5:    xsi_set_current_line(323, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t1 + 16072);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(324, ng0);
    t4 = (t1 + 14552U);
    t5 = *((char **)t4);
    t4 = (t1 + 16232);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 33, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_proc_instr_jr(char *t1, char *t2)
{
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    int t13;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 5600);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(327, ng0);

LAB5:    xsi_set_current_line(328, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t1 + 16072);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(329, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 16232);
    t6 = (t1 + 16232);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng26)));
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t10, 32, 1);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(330, ng0);
    t4 = (t1 + 13272U);
    t5 = *((char **)t4);
    t4 = (t1 + 15272);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(331, ng0);
    t4 = (t1 + 12632U);
    t5 = *((char **)t4);
    t4 = (t1 + 15432);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t7), 1, 0LL);
    goto LAB7;

}

static int sp_proc_instr_jal(char *t1, char *t2)
{
    char t26[8];
    int t0;
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
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 6032);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(334, ng0);

LAB5:    xsi_set_current_line(335, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t8, &&LAB6);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 5168);
    t12 = xsi_create_subprogram_invocation(t10, 0, t1, t11, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t11, t12);

LAB8:    t13 = (t2 + 64U);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t1, t14);
    if (t21 == -1)
        goto LAB9;

LAB10:    if (t21 != 0)
        goto LAB11;

LAB6:    t14 = (t1 + 5168);
    xsi_vlog_subprogram_popinvocation(t14);

LAB7:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t22 = (t1 + 5168);
    t24 = (t2 + 56U);
    t25 = *((char **)t24);
    xsi_delete_subprogram_invocation(t22, t23, t1, t25, t2);
    xsi_set_current_line(336, ng0);
    t4 = (t1 + 12312U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng9)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t5, 32, t4, 32);
    t6 = (t1 + 15112);
    xsi_vlogvar_wait_assign_value(t6, t26, 0, 0, 32, 0LL);
    xsi_set_current_line(337, ng0);
    t4 = ((char*)((ng27)));
    t5 = (t1 + 16712);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);
    xsi_set_current_line(338, ng0);
    t4 = ((char*)((ng28)));
    t5 = (t1 + 17032);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t13 = (t2 + 48U);
    *((char **)t13) = &&LAB8;
    goto LAB1;

}

static int sp_proc_instr_jalr(char *t1, char *t2)
{
    int t0;
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
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 6464);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(341, ng0);

LAB5:    xsi_set_current_line(342, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t8, &&LAB6);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 6032);
    t12 = xsi_create_subprogram_invocation(t10, 0, t1, t11, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t11, t12);

LAB8:    t13 = (t2 + 64U);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t1, t14);
    if (t21 == -1)
        goto LAB9;

LAB10:    if (t21 != 0)
        goto LAB11;

LAB6:    t14 = (t1 + 6032);
    xsi_vlog_subprogram_popinvocation(t14);

LAB7:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t22 = (t1 + 6032);
    t24 = (t2 + 56U);
    t25 = *((char **)t24);
    xsi_delete_subprogram_invocation(t22, t23, t1, t25, t2);
    xsi_set_current_line(343, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB12);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 5600);
    t11 = xsi_create_subprogram_invocation(t9, 0, t1, t10, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t10, t11);

LAB14:    t12 = (t2 + 64U);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t21 = ((int  (*)(char *, char *))t19)(t1, t13);
    if (t21 == -1)
        goto LAB15;

LAB16:    if (t21 != 0)
        goto LAB17;

LAB12:    t13 = (t1 + 5600);
    xsi_vlog_subprogram_popinvocation(t13);

LAB13:    t20 = (t2 + 64U);
    t22 = *((char **)t20);
    t20 = (t1 + 5600);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    xsi_delete_subprogram_invocation(t20, t22, t1, t24, t2);
    xsi_set_current_line(344, ng0);
    t4 = (t1 + 13592U);
    t5 = *((char **)t4);
    t4 = (t1 + 17032);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 5, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t13 = (t2 + 48U);
    *((char **)t13) = &&LAB8;
    goto LAB1;

LAB15:    t0 = -1;
    goto LAB1;

LAB17:    t12 = (t2 + 48U);
    *((char **)t12) = &&LAB14;
    goto LAB1;

}

static int sp_proc_instr_syscall(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 6896);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(347, ng0);

LAB5:    xsi_set_current_line(348, ng0);
    t5 = ((char*)((ng29)));
    t6 = (t1 + 15592);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 5, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_reset(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 7328);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(351, ng0);

LAB5:    xsi_set_current_line(352, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t1 + 16072);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(353, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 17032);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(354, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 16712);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);
    xsi_set_current_line(355, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 16392);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(356, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 14952);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(357, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 15112);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(358, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 15272);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(359, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 15432);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(360, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 16872);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(361, ng0);
    t4 = ((char*)((ng30)));
    t5 = (t1 + 15592);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(362, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 15912);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_proc_cp0(char *t1, char *t2)
{
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 7760);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(366, ng0);
    t5 = (t1 + 13112U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng31)));
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB8;

LAB5:    if (t19 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t7) = 1;

LAB8:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(368, ng0);
    t4 = (t1 + 13112U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t7, 0, 8);
    t6 = (t5 + 4);
    t8 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB15;

LAB12:    if (t19 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t7) = 1;

LAB15:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(370, ng0);
    t4 = (t1 + 13272U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng33)));
    memset(t7, 0, 8);
    t6 = (t5 + 4);
    t8 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB22;

LAB19:    if (t19 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t7) = 1;

LAB22:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(375, ng0);
    t4 = (t1 + 13272U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng9)));
    memset(t7, 0, 8);
    t6 = (t5 + 4);
    t8 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB30;

LAB27:    if (t19 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t7) = 1;

LAB30:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(381, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t8, &&LAB41);
    t9 = (t2 + 56U);
    t22 = *((char **)t9);
    t23 = (t1 + 4304);
    t29 = xsi_create_subprogram_invocation(t22, 0, t1, t23, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t23, t29);

LAB43:    t30 = (t2 + 64U);
    t31 = *((char **)t30);
    t32 = (t31 + 80U);
    t33 = *((char **)t32);
    t34 = (t33 + 272U);
    t35 = *((char **)t34);
    t36 = (t35 + 0U);
    t37 = *((char **)t36);
    t38 = ((int  (*)(char *, char *))t37)(t1, t31);
    if (t38 == -1)
        goto LAB44;

LAB45:    if (t38 != 0)
        goto LAB46;

LAB41:    t31 = (t1 + 4304);
    xsi_vlog_subprogram_popinvocation(t31);

LAB42:    t39 = (t2 + 64U);
    t40 = *((char **)t39);
    t39 = (t1 + 4304);
    t41 = (t2 + 56U);
    t42 = *((char **)t41);
    xsi_delete_subprogram_invocation(t39, t40, t1, t42, t2);

LAB33:
LAB25:
LAB18:
LAB11:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(367, ng0);
    t29 = ((char*)((ng32)));
    t30 = (t1 + 15592);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 5, 0LL);
    goto LAB11;

LAB14:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(369, ng0);
    t23 = ((char*)((ng29)));
    t29 = (t1 + 16872);
    xsi_vlogvar_wait_assign_value(t29, t23, 0, 0, 4, 0LL);
    goto LAB18;

LAB21:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(370, ng0);

LAB26:    xsi_set_current_line(371, ng0);
    t23 = ((char*)((ng13)));
    t29 = (t1 + 16872);
    xsi_vlogvar_wait_assign_value(t29, t23, 0, 0, 4, 0LL);
    xsi_set_current_line(372, ng0);
    t4 = (t1 + 17192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t7, t6, 8);
    t8 = (t1 + 15112);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(373, ng0);
    t4 = ((char*)((ng27)));
    t5 = (t1 + 16712);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);
    xsi_set_current_line(374, ng0);
    t4 = (t1 + 13432U);
    t5 = *((char **)t4);
    t4 = (t1 + 17032);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 5, 0LL);
    goto LAB25;

LAB29:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(375, ng0);

LAB34:    xsi_set_current_line(376, ng0);
    t23 = ((char*)((ng12)));
    t29 = (t1 + 16872);
    xsi_vlogvar_wait_assign_value(t29, t23, 0, 0, 4, 0LL);
    xsi_set_current_line(377, ng0);
    t4 = (t1 + 17192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t7, t6, 8);
    t8 = (t1 + 15112);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(378, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t8, &&LAB35);
    t9 = (t2 + 56U);
    t22 = *((char **)t9);
    t23 = (t1 + 1280);
    t29 = xsi_create_subprogram_invocation(t22, 0, t1, t23, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t23, t29);

LAB37:    t30 = (t2 + 64U);
    t31 = *((char **)t30);
    t32 = (t31 + 80U);
    t33 = *((char **)t32);
    t34 = (t33 + 272U);
    t35 = *((char **)t34);
    t36 = (t35 + 0U);
    t37 = *((char **)t36);
    t38 = ((int  (*)(char *, char *))t37)(t1, t31);
    if (t38 == -1)
        goto LAB38;

LAB39:    if (t38 != 0)
        goto LAB40;

LAB35:    t31 = (t1 + 1280);
    xsi_vlog_subprogram_popinvocation(t31);

LAB36:    t39 = (t2 + 64U);
    t40 = *((char **)t39);
    t39 = (t1 + 1280);
    t41 = (t2 + 56U);
    t42 = *((char **)t41);
    xsi_delete_subprogram_invocation(t39, t40, t1, t42, t2);
    xsi_set_current_line(379, ng0);
    t4 = ((char*)((ng27)));
    t5 = (t1 + 16712);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);
    goto LAB33;

LAB38:    t0 = -1;
    goto LAB1;

LAB40:    t30 = (t2 + 48U);
    *((char **)t30) = &&LAB37;
    goto LAB1;

LAB44:    t0 = -1;
    goto LAB1;

LAB46:    t30 = (t2 + 48U);
    *((char **)t30) = &&LAB43;
    goto LAB1;

}

static int sp_proc_instr_mfhi(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 8192);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(384, ng0);

LAB5:    xsi_set_current_line(385, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t1 + 16872);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(386, ng0);
    t4 = (t1 + 13592U);
    t5 = *((char **)t4);
    t4 = (t1 + 17032);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 5, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_proc_instr_mflo(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 8624);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(389, ng0);

LAB5:    xsi_set_current_line(390, ng0);
    t5 = ((char*)((ng14)));
    t6 = (t1 + 16872);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(391, ng0);
    t4 = (t1 + 13592U);
    t5 = *((char **)t4);
    t4 = (t1 + 17032);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 5, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_proc_instr_mthi(char *t1, char *t2)
{
    int t0;
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
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 9056);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(394, ng0);

LAB5:    xsi_set_current_line(395, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t8, &&LAB6);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t1, t11, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t11, t12);

LAB8:    t13 = (t2 + 64U);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t1, t14);
    if (t21 == -1)
        goto LAB9;

LAB10:    if (t21 != 0)
        goto LAB11;

LAB6:    t14 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB7:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t22 = (t1 + 848);
    t24 = (t2 + 56U);
    t25 = *((char **)t24);
    xsi_delete_subprogram_invocation(t22, t23, t1, t25, t2);
    xsi_set_current_line(396, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 16872);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(397, ng0);
    t4 = ((char*)((ng27)));
    t5 = (t1 + 16712);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t13 = (t2 + 48U);
    *((char **)t13) = &&LAB8;
    goto LAB1;

}

static int sp_proc_instr_mtlo(char *t1, char *t2)
{
    int t0;
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
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 9488);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(400, ng0);

LAB5:    xsi_set_current_line(401, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t8, &&LAB6);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t1, t11, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t11, t12);

LAB8:    t13 = (t2 + 64U);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t1, t14);
    if (t21 == -1)
        goto LAB9;

LAB10:    if (t21 != 0)
        goto LAB11;

LAB6:    t14 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB7:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t22 = (t1 + 848);
    t24 = (t2 + 56U);
    t25 = *((char **)t24);
    xsi_delete_subprogram_invocation(t22, t23, t1, t25, t2);
    xsi_set_current_line(402, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 16872);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(403, ng0);
    t4 = ((char*)((ng27)));
    t5 = (t1 + 16712);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t13 = (t2 + 48U);
    *((char **)t13) = &&LAB8;
    goto LAB1;

}

static int sp_do_decode(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
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
    char *t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 9920);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(406, ng0);

LAB5:    xsi_set_current_line(407, ng0);
    t5 = (t1 + 12952U);
    t6 = *((char **)t5);

LAB6:    t5 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t5, 6);
    if (t7 == 1)
        goto LAB7;

LAB8:    t4 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB9;

LAB10:    t4 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng30)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB13;

LAB14:    t4 = ((char*)((ng36)));
    t7 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 6);
    if (t7 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(426, ng0);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB104);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 4736);
    t16 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB106:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t10 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t10 == -1)
        goto LAB107;

LAB108:    if (t10 != 0)
        goto LAB109;

LAB104:    t18 = (t1 + 4736);
    xsi_vlog_subprogram_popinvocation(t18);

LAB105:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 4736);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t25, t26, t1, t29, t2);

LAB19:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(408, ng0);
    t8 = (t1 + 13112U);
    t9 = *((char **)t8);

LAB20:    t8 = ((char*)((ng29)));
    t10 = xsi_vlog_unsigned_case_compare(t9, 6, t8, 6);
    if (t10 == 1)
        goto LAB21;

LAB22:    t4 = ((char*)((ng14)));
    t7 = xsi_vlog_unsigned_case_compare(t9, 6, t4, 6);
    if (t7 == 1)
        goto LAB23;

LAB24:    t4 = ((char*)((ng17)));
    t7 = xsi_vlog_unsigned_case_compare(t9, 6, t4, 6);
    if (t7 == 1)
        goto LAB25;

LAB26:    t4 = ((char*)((ng30)));
    t7 = xsi_vlog_unsigned_case_compare(t9, 6, t4, 6);
    if (t7 == 1)
        goto LAB27;

LAB28:    t4 = ((char*)((ng32)));
    t7 = xsi_vlog_unsigned_case_compare(t9, 6, t4, 6);
    if (t7 == 1)
        goto LAB29;

LAB30:    t4 = ((char*)((ng34)));
    t7 = xsi_vlog_unsigned_case_compare(t9, 6, t4, 6);
    if (t7 == 1)
        goto LAB31;

LAB32:    t4 = ((char*)((ng35)));
    t7 = xsi_vlog_unsigned_case_compare(t9, 6, t4, 6);
    if (t7 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(416, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t11, &&LAB80);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 1712);
    t15 = xsi_create_subprogram_invocation(t13, 0, t1, t14, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t14, t15);

LAB82:    t16 = (t2 + 64U);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t7 = ((int  (*)(char *, char *))t23)(t1, t17);
    if (t7 == -1)
        goto LAB83;

LAB84:    if (t7 != 0)
        goto LAB85;

LAB80:    t17 = (t1 + 1712);
    xsi_vlog_subprogram_popinvocation(t17);

LAB81:    t24 = (t2 + 64U);
    t25 = *((char **)t24);
    t24 = (t1 + 1712);
    t26 = (t2 + 56U);
    t28 = *((char **)t26);
    xsi_delete_subprogram_invocation(t24, t25, t1, t28, t2);

LAB37:    goto LAB19;

LAB9:    xsi_set_current_line(419, ng0);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB86);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 5168);
    t16 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB88:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t10 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t10 == -1)
        goto LAB89;

LAB90:    if (t10 != 0)
        goto LAB91;

LAB86:    t18 = (t1 + 5168);
    xsi_vlog_subprogram_popinvocation(t18);

LAB87:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 5168);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t25, t26, t1, t29, t2);
    goto LAB19;

LAB11:    xsi_set_current_line(421, ng0);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB92);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 6032);
    t16 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB94:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t10 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t10 == -1)
        goto LAB95;

LAB96:    if (t10 != 0)
        goto LAB97;

LAB92:    t18 = (t1 + 6032);
    xsi_vlog_subprogram_popinvocation(t18);

LAB93:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 6032);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t25, t26, t1, t29, t2);
    goto LAB19;

LAB13:    xsi_set_current_line(423, ng0);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB98);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 7760);
    t16 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB100:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t10 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t10 == -1)
        goto LAB101;

LAB102:    if (t10 != 0)
        goto LAB103;

LAB98:    t18 = (t1 + 7760);
    xsi_vlog_subprogram_popinvocation(t18);

LAB99:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 7760);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t25, t26, t1, t29, t2);
    goto LAB19;

LAB15:    goto LAB19;

LAB21:    xsi_set_current_line(409, ng0);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB38);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 5600);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);

LAB40:    t19 = (t2 + 64U);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t1, t20);
    if (t27 == -1)
        goto LAB41;

LAB42:    if (t27 != 0)
        goto LAB43;

LAB38:    t20 = (t1 + 5600);
    xsi_vlog_subprogram_popinvocation(t20);

LAB39:    t28 = (t2 + 64U);
    t29 = *((char **)t28);
    t28 = (t1 + 5600);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    goto LAB37;

LAB23:    xsi_set_current_line(410, ng0);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB44);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 6464);
    t16 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB46:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t10 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t10 == -1)
        goto LAB47;

LAB48:    if (t10 != 0)
        goto LAB49;

LAB44:    t18 = (t1 + 6464);
    xsi_vlog_subprogram_popinvocation(t18);

LAB45:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 6464);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t25, t26, t1, t29, t2);
    goto LAB37;

LAB25:    xsi_set_current_line(411, ng0);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB50);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 6896);
    t16 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB52:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t10 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t10 == -1)
        goto LAB53;

LAB54:    if (t10 != 0)
        goto LAB55;

LAB50:    t18 = (t1 + 6896);
    xsi_vlog_subprogram_popinvocation(t18);

LAB51:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 6896);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t25, t26, t1, t29, t2);
    goto LAB37;

LAB27:    xsi_set_current_line(412, ng0);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB56);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 8192);
    t16 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB58:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t10 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t10 == -1)
        goto LAB59;

LAB60:    if (t10 != 0)
        goto LAB61;

LAB56:    t18 = (t1 + 8192);
    xsi_vlog_subprogram_popinvocation(t18);

LAB57:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 8192);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t25, t26, t1, t29, t2);
    goto LAB37;

LAB29:    xsi_set_current_line(413, ng0);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB62);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 9056);
    t16 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB64:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t10 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t10 == -1)
        goto LAB65;

LAB66:    if (t10 != 0)
        goto LAB67;

LAB62:    t18 = (t1 + 9056);
    xsi_vlog_subprogram_popinvocation(t18);

LAB63:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 9056);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t25, t26, t1, t29, t2);
    goto LAB37;

LAB31:    xsi_set_current_line(414, ng0);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB68);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 8624);
    t16 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB70:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t10 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t10 == -1)
        goto LAB71;

LAB72:    if (t10 != 0)
        goto LAB73;

LAB68:    t18 = (t1 + 8624);
    xsi_vlog_subprogram_popinvocation(t18);

LAB69:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 8624);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t25, t26, t1, t29, t2);
    goto LAB37;

LAB33:    xsi_set_current_line(415, ng0);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB74);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 9488);
    t16 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t16);

LAB76:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t10 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t10 == -1)
        goto LAB77;

LAB78:    if (t10 != 0)
        goto LAB79;

LAB74:    t18 = (t1 + 9488);
    xsi_vlog_subprogram_popinvocation(t18);

LAB75:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 9488);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_delete_subprogram_invocation(t25, t26, t1, t29, t2);
    goto LAB37;

LAB41:    t0 = -1;
    goto LAB1;

LAB43:    t19 = (t2 + 48U);
    *((char **)t19) = &&LAB40;
    goto LAB1;

LAB47:    t0 = -1;
    goto LAB1;

LAB49:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB46;
    goto LAB1;

LAB53:    t0 = -1;
    goto LAB1;

LAB55:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB52;
    goto LAB1;

LAB59:    t0 = -1;
    goto LAB1;

LAB61:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB58;
    goto LAB1;

LAB65:    t0 = -1;
    goto LAB1;

LAB67:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB64;
    goto LAB1;

LAB71:    t0 = -1;
    goto LAB1;

LAB73:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB70;
    goto LAB1;

LAB77:    t0 = -1;
    goto LAB1;

LAB79:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB76;
    goto LAB1;

LAB83:    t0 = -1;
    goto LAB1;

LAB85:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB82;
    goto LAB1;

LAB89:    t0 = -1;
    goto LAB1;

LAB91:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB88;
    goto LAB1;

LAB95:    t0 = -1;
    goto LAB1;

LAB97:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB94;
    goto LAB1;

LAB101:    t0 = -1;
    goto LAB1;

LAB103:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB100;
    goto LAB1;

LAB107:    t0 = -1;
    goto LAB1;

LAB109:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB106;
    goto LAB1;

}

static void Cont_130_0(char *t0)
{
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

LAB0:    t1 = (t0 + 19552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 11192U);
    t3 = *((char **)t2);
    t2 = (t0 + 23840);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t3, 0, 32);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 23776);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t12, 0, t3, 32, 32);
    xsi_driver_vfirst_trans(t8, 0, 31);
    t13 = (t0 + 23712);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_bit_copy(t17, 0, t3, 64, 32);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 23648);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_bit_copy(t22, 0, t3, 96, 5);
    xsi_driver_vfirst_trans(t18, 0, 4);
    t23 = (t0 + 23344);
    *((int *)t23) = 1;

LAB1:    return;
}

static void Cont_142_1(char *t0)
{
    char t3[40];
    char *t1;
    char *t2;
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 19800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 17032);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 16872);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 16712);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 16552);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 16392);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 16232);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 16072);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 15912);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 15752);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 15592);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlogtype_concat(t3, 153, 153, 10U, t32, 5, t29, 32, t26, 32, t23, 2, t20, 33, t17, 32, t14, 1, t11, 7, t8, 4, t5, 5);
    t33 = (t0 + 23904);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_bit_copy(t37, 0, t3, 0, 153);
    xsi_driver_vfirst_trans(t33, 0, 152);
    t38 = (t0 + 23360);
    *((int *)t38) = 1;

LAB1:    return;
}

static void NetDecl_147_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 20048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 12472U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 26);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 26);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 63U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 63U);
    t12 = (t0 + 23968);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 63U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 5U);
    t25 = (t0 + 23376);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_148_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 20296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 12472U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 63U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 63U);
    t12 = (t0 + 24032);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 63U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 5U);
    t25 = (t0 + 23392);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_149_4(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 20544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 12472U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 21);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 24096);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 4U);
    t25 = (t0 + 23408);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_149_5(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 20792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 12472U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 24160);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 4U);
    t25 = (t0 + 23424);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_149_6(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 21040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 12472U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 11);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 24224);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 4U);
    t25 = (t0 + 23440);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_149_7(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 21288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 12472U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 6);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 6);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 24288);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 4U);
    t25 = (t0 + 23456);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_151_8(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 21536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 12472U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 65535U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 65535U);
    t12 = (t0 + 24352);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 65535U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 15U);
    t25 = (t0 + 23472);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_152_9(char *t0)
{
    char t3[8];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 21784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 13912U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng37)));
    t6 = (t0 + 13912U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 15);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 15);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    xsi_vlog_mul_concat(t5, 16, 1, t2, 1U, t8, 1);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t5, 16, t4, 16);
    t16 = (t0 + 24416);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t3, 8);
    xsi_driver_vfirst_trans(t16, 0, 31U);
    t21 = (t0 + 23488);
    *((int *)t21) = 1;

LAB1:    return;
}

static void NetDecl_152_10(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 22032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 13912U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t2, 16, t4, 16);
    t5 = (t0 + 24480);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 23504);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_156_11(char *t0)
{
    char t3[16];
    char t5[8];
    char t6[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 22280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 12312U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 14072U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 1073741823U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 1073741823U);
    xsi_vlogtype_concat(t5, 32, 32, 2U, t6, 30, t2, 2);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t4, 32, t5, 32);
    t17 = ((char*)((ng2)));
    xsi_vlogtype_concat(t3, 33, 33, 2U, t17, 1, t16, 32);
    t18 = (t0 + 24544);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_bit_copy(t22, 0, t3, 0, 33);
    xsi_driver_vfirst_trans(t18, 0, 32U);
    t23 = (t0 + 23520);
    *((int *)t23) = 1;

LAB1:    return;
}

static void NetDecl_156_12(char *t0)
{
    char t3[16];
    char t4[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 22528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 12472U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 67108863U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 67108863U);
    t15 = (t0 + 12312U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 28);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 28);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 15U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 15U);
    t24 = ((char*)((ng2)));
    xsi_vlogtype_concat(t3, 33, 33, 4U, t24, 1, t14, 4, t4, 26, t2, 2);
    t25 = (t0 + 24608);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_bit_copy(t29, 0, t3, 0, 33);
    xsi_driver_vfirst_trans(t25, 0, 32U);
    t30 = (t0 + 23536);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Always_169_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 22776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 23552);
    *((int *)t2) = 1;
    t3 = (t0 + 22808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(170, ng0);
    t4 = (t0 + 13592U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 32);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng38)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng40)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng41)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng42)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng44)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng46)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng48)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng50)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng51)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng52)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng46)));
    t3 = (t0 + 17192);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB30:    goto LAB2;

LAB6:    xsi_set_current_line(171, ng0);
    t7 = ((char*)((ng33)));
    t8 = (t0 + 17192);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB30;

LAB8:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng39)));
    t4 = (t0 + 17192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB30;

LAB10:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng38)));
    t4 = (t0 + 17192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB30;

LAB12:    xsi_set_current_line(174, ng0);
    t3 = ((char*)((ng40)));
    t4 = (t0 + 17192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB30;

LAB14:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng43)));
    t4 = (t0 + 17192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB30;

LAB16:    xsi_set_current_line(176, ng0);
    t3 = ((char*)((ng45)));
    t4 = (t0 + 17192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB30;

LAB18:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng47)));
    t4 = (t0 + 17192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB30;

LAB20:    xsi_set_current_line(178, ng0);
    t3 = ((char*)((ng49)));
    t4 = (t0 + 17192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB30;

LAB22:    xsi_set_current_line(179, ng0);
    t3 = ((char*)((ng41)));
    t4 = (t0 + 17192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB30;

LAB24:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng42)));
    t4 = (t0 + 17192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB30;

LAB26:    xsi_set_current_line(181, ng0);
    t3 = ((char*)((ng44)));
    t4 = (t0 + 17192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB30;

}

static void Always_432_14(char *t0)
{
    char t27[8];
    char t33[8];
    char t51[8];
    char t52[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t34;
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
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;

LAB0:    t1 = (t0 + 23024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(432, ng0);
    t2 = (t0 + 23568);
    *((int *)t2) = 1;
    t3 = (t0 + 23056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(432, ng0);

LAB5:    xsi_set_current_line(433, ng0);
    t4 = (t0 + 10712U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(435, ng0);
    t2 = (t0 + 10872U);
    t3 = *((char **)t2);
    memset(t27, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t4 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t4) = 1;

LAB18:    t5 = (t27 + 4);
    t28 = *((unsigned int *)t5);
    t29 = (~(t28));
    t30 = *((unsigned int *)t27);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(434, ng0);
    t11 = (t0 + 22832);
    t12 = (t0 + 7328);
    t13 = xsi_create_subprogram_invocation(t11, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);

LAB11:    t14 = (t0 + 22928);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t22 = ((int  (*)(char *, char *))t21)(t0, t15);

LAB13:    if (t22 != 0)
        goto LAB14;

LAB9:    t15 = (t0 + 7328);
    xsi_vlog_subprogram_popinvocation(t15);

LAB10:    t23 = (t0 + 22928);
    t24 = *((char **)t23);
    t23 = (t0 + 7328);
    t25 = (t0 + 22832);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    goto LAB8;

LAB12:;
LAB14:    t14 = (t0 + 23024U);
    *((char **)t14) = &&LAB11;
    goto LAB1;

LAB15:    *((unsigned int *)t27) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(435, ng0);

LAB22:    xsi_set_current_line(436, ng0);
    t11 = (t0 + 22832);
    t12 = (t0 + 7328);
    t13 = xsi_create_subprogram_invocation(t11, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);

LAB25:    t14 = (t0 + 22928);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t22 = ((int  (*)(char *, char *))t21)(t0, t15);

LAB27:    if (t22 != 0)
        goto LAB28;

LAB23:    t15 = (t0 + 7328);
    xsi_vlog_subprogram_popinvocation(t15);

LAB24:    t23 = (t0 + 22928);
    t24 = *((char **)t23);
    t23 = (t0 + 7328);
    t25 = (t0 + 22832);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(437, ng0);
    t2 = (t0 + 11032U);
    t3 = *((char **)t2);
    memset(t27, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t2) == 0)
        goto LAB29;

LAB31:    t4 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t4) = 1;

LAB32:    t5 = (t27 + 4);
    t28 = *((unsigned int *)t5);
    t29 = (~(t28));
    t30 = *((unsigned int *)t27);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB33;

LAB34:
LAB35:    goto LAB21;

LAB26:;
LAB28:    t14 = (t0 + 23024U);
    *((char **)t14) = &&LAB25;
    goto LAB1;

LAB29:    *((unsigned int *)t27) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(437, ng0);

LAB36:    xsi_set_current_line(438, ng0);
    t11 = (t0 + 11992U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng30)));
    memset(t33, 0, 8);
    t13 = (t12 + 4);
    t14 = (t11 + 4);
    t34 = *((unsigned int *)t12);
    t35 = *((unsigned int *)t11);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t13);
    t38 = *((unsigned int *)t14);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t13);
    t42 = *((unsigned int *)t14);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB38;

LAB37:    if (t43 != 0)
        goto LAB39;

LAB40:    t16 = (t33 + 4);
    t46 = *((unsigned int *)t16);
    t47 = (~(t46));
    t48 = *((unsigned int *)t33);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(442, ng0);

LAB45:    xsi_set_current_line(443, ng0);
    t2 = (t0 + 11352U);
    t3 = *((char **)t2);
    memset(t33, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t2) != 0)
        goto LAB48;

LAB49:    t5 = (t33 + 4);
    t28 = *((unsigned int *)t33);
    t29 = *((unsigned int *)t5);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB50;

LAB51:    t31 = *((unsigned int *)t33);
    t32 = (~(t31));
    t34 = *((unsigned int *)t5);
    t35 = (t32 || t34);
    if (t35 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t5) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t33) > 0)
        goto LAB56;

LAB57:    memcpy(t27, t52, 8);

LAB58:    t15 = (t0 + 15752);
    xsi_vlogvar_wait_assign_value(t15, t27, 0, 0, 32, 0LL);
    xsi_set_current_line(444, ng0);
    t2 = (t0 + 22832);
    t3 = (t0 + 9920);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB61:    t5 = (t0 + 22928);
    t11 = *((char **)t5);
    t12 = (t11 + 80U);
    t13 = *((char **)t12);
    t14 = (t13 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t22 = ((int  (*)(char *, char *))t17)(t0, t11);

LAB63:    if (t22 != 0)
        goto LAB64;

LAB59:    t11 = (t0 + 9920);
    xsi_vlog_subprogram_popinvocation(t11);

LAB60:    t18 = (t0 + 22928);
    t19 = *((char **)t18);
    t18 = (t0 + 9920);
    t20 = (t0 + 22832);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);

LAB43:    goto LAB35;

LAB38:    *((unsigned int *)t33) = 1;
    goto LAB40;

LAB39:    t15 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(438, ng0);

LAB44:    xsi_set_current_line(439, ng0);
    t17 = (t0 + 11992U);
    t18 = *((char **)t17);
    t17 = (t0 + 15592);
    xsi_vlogvar_wait_assign_value(t17, t18, 0, 0, 5, 0LL);
    xsi_set_current_line(440, ng0);
    t2 = (t0 + 12152U);
    t3 = *((char **)t2);
    t2 = (t0 + 15752);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(441, ng0);
    t2 = (t0 + 12152U);
    t3 = *((char **)t2);
    t2 = (t0 + 15912);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB43;

LAB46:    *((unsigned int *)t33) = 1;
    goto LAB49;

LAB48:    t4 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB49;

LAB50:    t11 = (t0 + 12312U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng29)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_minus(t51, 32, t12, 32, t11, 32);
    goto LAB51;

LAB52:    t13 = (t0 + 12312U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng9)));
    memset(t52, 0, 8);
    xsi_vlog_unsigned_minus(t52, 32, t14, 32, t13, 32);
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t27, 32, t51, 32, t52, 32);
    goto LAB58;

LAB56:    memcpy(t27, t51, 8);
    goto LAB58;

LAB62:;
LAB64:    t5 = (t0 + 23024U);
    *((char **)t5) = &&LAB61;
    goto LAB1;

}


extern void work_m_00000000000570781489_2489259343_init()
{
	static char *pe[] = {(void *)Cont_130_0,(void *)Cont_142_1,(void *)NetDecl_147_2,(void *)NetDecl_148_3,(void *)NetDecl_149_4,(void *)NetDecl_149_5,(void *)NetDecl_149_6,(void *)NetDecl_149_7,(void *)NetDecl_151_8,(void *)NetDecl_152_9,(void *)NetDecl_152_10,(void *)NetDecl_156_11,(void *)NetDecl_156_12,(void *)Always_169_13,(void *)Always_432_14};
	static char *se[] = {(void *)sp_assign_reg1,(void *)sp_assign_reg2,(void *)sp_proc_rtype,(void *)sp_alu_from_reg,(void *)sp_alu_from_imm,(void *)sp_mem_opt,(void *)sp_wb_with_alu_imm,(void *)sp_proc_cond_branch,(void *)sp_invalid_instruction,(void *)sp_proc_itype,(void *)sp_proc_instr_j,(void *)sp_proc_instr_jr,(void *)sp_proc_instr_jal,(void *)sp_proc_instr_jalr,(void *)sp_proc_instr_syscall,(void *)sp_reset,(void *)sp_proc_cp0,(void *)sp_proc_instr_mfhi,(void *)sp_proc_instr_mflo,(void *)sp_proc_instr_mthi,(void *)sp_proc_instr_mtlo,(void *)sp_do_decode};
	xsi_register_didat("work_m_00000000000570781489_2489259343", "isim/system_tb_isim_beh.exe.sim/work/m_00000000000570781489_2489259343.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
