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
static const char *ng0 = "D:/workspace/arm_cpu_for_nexys4_v1_ise14_7/system_top/cp0.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {10, 0};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {7, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {384U, 0U};
static int ng7[] = {9, 0};
static int ng8[] = {3, 0};
static int ng9[] = {8, 0};
static int ng10[] = {6, 0};
static int ng11[] = {2, 0};
static unsigned int ng12[] = {1U, 0U};
static int ng13[] = {5, 0};
static int ng14[] = {31, 0};
static int ng15[] = {13, 0};
static int ng16[] = {0, 0};
static int ng17[] = {4, 0};
static unsigned int ng18[] = {3U, 0U};
static int ng19[] = {11, 0};
static unsigned int ng20[] = {16U, 0U};
static unsigned int ng21[] = {17U, 0U};



static int sp_set_vector_offset(char *t1, char *t2)
{
    char t5[8];
    char t9[8];
    char t14[8];
    char t22[8];
    char t31[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(99, ng0);
    t6 = (t1 + 5280);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng1)));
    t11 = (t1 + 5120);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t1 + 5120);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t1 + 5120);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t14, 32, t13, t17, t20, 2, 1, t21, 32, 1);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (t25 >> 12);
    *((unsigned int *)t22) = t26;
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 12);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 262143U);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t30 & 262143U);
    xsi_vlogtype_concat(t9, 30, 30, 2U, t22, 18, t10, 12);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 30, t8, 30, t9, 30);
    t32 = ((char*)((ng3)));
    xsi_vlogtype_concat(t5, 32, 32, 2U, t32, 2, t31, 30);
    t33 = (t1 + 4960);
    xsi_vlogvar_wait_assign_value(t33, t5, 0, 0, 32, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_setup_exc(char *t1, char *t2)
{
    char t8[8];
    char t16[8];
    char t54[8];
    char t55[8];
    char t56[8];
    char t71[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
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
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t57;
    int t58;
    int t59;
    int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(103, ng0);

LAB5:    xsi_set_current_line(109, ng0);
    t5 = (t1 + 5120);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t1 + 5120);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 5120);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t7, t11, t14, 2, 1, t15, 32, 1);
    t17 = (t1 + 5120);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t16, 1, t8, t19, 2, t20, 32, 1);
    t21 = (t16 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t16);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB15:    xsi_set_current_line(112, ng0);
    t4 = (t1 + 3600U);
    t5 = *((char **)t4);
    t4 = (t1 + 5120);
    t6 = (t1 + 5120);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t10 = (t1 + 5120);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t8, t16, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t8 + 4);
    t22 = *((unsigned int *)t14);
    t45 = (!(t22));
    t15 = (t16 + 4);
    t23 = *((unsigned int *)t15);
    t50 = (!(t23));
    t51 = (t45 && t50);
    if (t51 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(113, ng0);
    t4 = (t1 + 3760U);
    t5 = *((char **)t4);
    t4 = (t1 + 5120);
    t6 = (t1 + 5120);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t10 = (t1 + 5120);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t8, t16, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t8 + 4);
    t22 = *((unsigned int *)t14);
    t45 = (!(t22));
    t15 = (t16 + 4);
    t23 = *((unsigned int *)t15);
    t50 = (!(t23));
    t51 = (t45 && t50);
    if (t51 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(114, ng0);
    t4 = (t1 + 3440U);
    t5 = *((char **)t4);
    t4 = (t1 + 5120);
    t6 = (t1 + 5120);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t10 = (t1 + 5120);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t8, t16, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t1 + 5120);
    t15 = (t14 + 72U);
    t17 = *((char **)t15);
    t18 = ((char*)((ng10)));
    t19 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t54, t55, t56, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t8 + 4);
    t22 = *((unsigned int *)t20);
    t45 = (!(t22));
    t21 = (t16 + 4);
    t23 = *((unsigned int *)t21);
    t50 = (!(t23));
    t51 = (t45 && t50);
    t27 = (t54 + 4);
    t24 = *((unsigned int *)t27);
    t52 = (!(t24));
    t53 = (t51 && t52);
    t28 = (t55 + 4);
    t25 = *((unsigned int *)t28);
    t57 = (!(t25));
    t58 = (t53 && t57);
    t29 = (t56 + 4);
    t26 = *((unsigned int *)t29);
    t59 = (!(t26));
    t60 = (t58 && t59);
    if (t60 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(115, ng0);
    t4 = ((char*)((ng12)));
    t5 = (t1 + 5120);
    t6 = (t1 + 5120);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t10 = (t1 + 5120);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t8, t16, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t1 + 5120);
    t15 = (t14 + 72U);
    t17 = *((char **)t15);
    t18 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t54, t17, 2, t18, 32, 1);
    t19 = (t8 + 4);
    t22 = *((unsigned int *)t19);
    t45 = (!(t22));
    t20 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t50 = (!(t23));
    t51 = (t45 && t50);
    t21 = (t54 + 4);
    t24 = *((unsigned int *)t21);
    t52 = (!(t24));
    t53 = (t51 && t52);
    if (t53 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(117, ng0);
    t4 = (t1 + 4080U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(120, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t9 = *((char **)t7);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t9, &&LAB33);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t1 + 1144);
    t13 = xsi_create_subprogram_invocation(t11, 0, t1, t12, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t14 = (t1 + 5280);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 30);

LAB35:    t15 = (t2 + 64U);
    t17 = *((char **)t15);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t27 = (t21 + 0U);
    t28 = *((char **)t27);
    t45 = ((int  (*)(char *, char *))t28)(t1, t17);
    if (t45 == -1)
        goto LAB36;

LAB37:    if (t45 != 0)
        goto LAB38;

LAB33:    t17 = (t1 + 1144);
    xsi_vlog_subprogram_popinvocation(t17);

LAB34:    t29 = (t2 + 64U);
    t30 = *((char **)t29);
    t29 = (t1 + 1144);
    t31 = (t2 + 56U);
    t32 = *((char **)t31);
    xsi_delete_subprogram_invocation(t29, t30, t1, t32, t2);

LAB26:    xsi_set_current_line(122, ng0);
    t4 = (t1 + 4240U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB39;

LAB40:
LAB41:
LAB8:    xsi_set_current_line(126, ng0);
    t4 = ((char*)((ng12)));
    t5 = (t1 + 4800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(110, ng0);
    t27 = ((char*)((ng6)));
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t31, &&LAB9);
    t32 = (t2 + 56U);
    t33 = *((char **)t32);
    t34 = (t1 + 1144);
    t35 = xsi_create_subprogram_invocation(t33, 0, t1, t34, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t34, t35);
    t36 = (t1 + 5280);
    xsi_vlogvar_assign_value(t36, t27, 0, 0, 30);

LAB11:    t37 = (t2 + 64U);
    t38 = *((char **)t37);
    t39 = (t38 + 80U);
    t40 = *((char **)t39);
    t41 = (t40 + 272U);
    t42 = *((char **)t41);
    t43 = (t42 + 0U);
    t44 = *((char **)t43);
    t45 = ((int  (*)(char *, char *))t44)(t1, t38);
    if (t45 == -1)
        goto LAB12;

LAB13:    if (t45 != 0)
        goto LAB14;

LAB9:    t38 = (t1 + 1144);
    xsi_vlog_subprogram_popinvocation(t38);

LAB10:    t46 = (t2 + 64U);
    t47 = *((char **)t46);
    t46 = (t1 + 1144);
    t48 = (t2 + 56U);
    t49 = *((char **)t48);
    xsi_delete_subprogram_invocation(t46, t47, t1, t49, t2);
    goto LAB8;

LAB12:    t0 = -1;
    goto LAB1;

LAB14:    t37 = (t2 + 48U);
    *((char **)t37) = &&LAB11;
    goto LAB1;

LAB16:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t16);
    t52 = (t24 - t25);
    t53 = (t52 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t16), t53, 0LL);
    goto LAB17;

LAB18:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t16);
    t52 = (t24 - t25);
    t53 = (t52 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t16), t53, 0LL);
    goto LAB19;

LAB20:    t61 = *((unsigned int *)t56);
    t62 = (t61 + 0);
    t63 = *((unsigned int *)t16);
    t64 = *((unsigned int *)t55);
    t65 = (t63 + t64);
    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t55);
    t68 = (t66 - t67);
    t69 = (t68 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, t62, t65, t69, 0LL);
    goto LAB21;

LAB22:    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t54);
    t57 = (t25 + t26);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, t57, 1, 0LL);
    goto LAB23;

LAB24:    xsi_set_current_line(118, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t2 + 56U);
    t9 = *((char **)t7);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t11, &&LAB27);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 1144);
    t15 = xsi_create_subprogram_invocation(t13, 0, t1, t14, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t14, t15);
    t17 = (t1 + 5280);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 30);

LAB29:    t18 = (t2 + 64U);
    t19 = *((char **)t18);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t27 = (t21 + 272U);
    t28 = *((char **)t27);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t45 = ((int  (*)(char *, char *))t30)(t1, t19);
    if (t45 == -1)
        goto LAB30;

LAB31:    if (t45 != 0)
        goto LAB32;

LAB27:    t19 = (t1 + 1144);
    xsi_vlog_subprogram_popinvocation(t19);

LAB28:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t31 = (t1 + 1144);
    t33 = (t2 + 56U);
    t34 = *((char **)t33);
    xsi_delete_subprogram_invocation(t31, t32, t1, t34, t2);
    goto LAB26;

LAB30:    t0 = -1;
    goto LAB1;

LAB32:    t18 = (t2 + 48U);
    *((char **)t18) = &&LAB29;
    goto LAB1;

LAB36:    t0 = -1;
    goto LAB1;

LAB38:    t15 = (t2 + 48U);
    *((char **)t15) = &&LAB35;
    goto LAB1;

LAB39:    xsi_set_current_line(123, ng0);
    t6 = (t1 + 3760U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t61 = *((unsigned int *)t7);
    t63 = (t61 >> 13);
    *((unsigned int *)t8) = t63;
    t64 = *((unsigned int *)t9);
    t66 = (t64 >> 13);
    *((unsigned int *)t6) = t66;
    t67 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t67 & 524287U);
    t70 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t70 & 524287U);
    t10 = (t1 + 5120);
    t11 = (t1 + 5120);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t1 + 5120);
    t15 = (t14 + 64U);
    t17 = *((char **)t15);
    t18 = ((char*)((ng13)));
    xsi_vlog_generic_convert_array_indices(t16, t54, t13, t17, 2, 1, t18, 32, 1);
    t19 = (t1 + 5120);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t27 = ((char*)((ng14)));
    t28 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t55, t56, t71, ((int*)(t21)), 2, t27, 32, 1, t28, 32, 1);
    t29 = (t16 + 4);
    t72 = *((unsigned int *)t29);
    t45 = (!(t72));
    t30 = (t54 + 4);
    t73 = *((unsigned int *)t30);
    t50 = (!(t73));
    t51 = (t45 && t50);
    t31 = (t55 + 4);
    t74 = *((unsigned int *)t31);
    t52 = (!(t74));
    t53 = (t51 && t52);
    t32 = (t56 + 4);
    t75 = *((unsigned int *)t32);
    t57 = (!(t75));
    t58 = (t53 && t57);
    t33 = (t71 + 4);
    t76 = *((unsigned int *)t33);
    t59 = (!(t76));
    t60 = (t58 && t59);
    if (t60 == 1)
        goto LAB42;

LAB43:    goto LAB41;

LAB42:    t77 = *((unsigned int *)t71);
    t62 = (t77 + 0);
    t78 = *((unsigned int *)t54);
    t79 = *((unsigned int *)t56);
    t65 = (t78 + t79);
    t80 = *((unsigned int *)t55);
    t81 = *((unsigned int *)t56);
    t68 = (t80 - t81);
    t69 = (t68 + 1);
    xsi_vlogvar_wait_assign_value(t10, t8, t62, t65, t69, 0LL);
    goto LAB43;

}

static int sp_perform_eret(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t16[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2008);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(130, ng0);

LAB5:    xsi_set_current_line(131, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 5120);
    t9 = (t1 + 5120);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 5120);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 2, 1, t15, 32, 1);
    t17 = (t1 + 5120);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t16, t19, 2, t20, 32, 1);
    t21 = (t7 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t16 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(132, ng0);
    t4 = ((char*)((ng12)));
    t5 = (t1 + 4800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t4 = (t1 + 5120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 5120);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 5120);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 2, 1, t15, 32, 1);
    t17 = (t1 + 4960);
    xsi_vlogvar_wait_assign_value(t17, t7, 0, 0, 32, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t32 = *((unsigned int *)t8);
    t33 = *((unsigned int *)t16);
    t34 = (t32 + t33);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, t34, 1, 0LL);
    goto LAB7;

}

static void Cont_89_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 6360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5120);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5120);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 10192);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 9904);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_89_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 6608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5120);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5120);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 10256);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 32, 63);
    t18 = (t0 + 9920);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_89_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 6856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5120);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5120);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 10320);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 64, 95);
    t18 = (t0 + 9936);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_89_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 7104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5120);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5120);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 10384);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 96, 127);
    t18 = (t0 + 9952);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_89_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 7352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5120);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5120);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 10448);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 128, 159);
    t18 = (t0 + 9968);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_89_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 7600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5120);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5120);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 10512);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 160, 191);
    t18 = (t0 + 9984);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_89_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 7848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5120);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5120);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 10576);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 192, 223);
    t18 = (t0 + 10000);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_89_7(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 8096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5120);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5120);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 10640);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 224, 255);
    t18 = (t0 + 10016);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_91_8(char *t0)
{
    char t3[8];
    char t6[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 8344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5120);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5120);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 5120);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t9, t12, 2, 1, t13, 32, 1);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t16 = (t6 + 4);
    t17 = *((unsigned int *)t6);
    t18 = (t17 >> 0);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 & 255U);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 255U);
    t23 = (t0 + 3920U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 32, 32, 3U, t23, 16, t24, 8, t14, 8);
    t25 = (t0 + 10704);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t3, 8);
    xsi_driver_vfirst_trans(t25, 256, 287);
    t30 = (t0 + 10032);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Cont_89_9(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 8592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5120);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5120);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 10768);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 288, 319);
    t18 = (t0 + 10048);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_89_10(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 8840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5120);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5120);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 10832);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 320, 351);
    t18 = (t0 + 10064);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_95_11(char *t0)
{
    char t4[8];
    char t20[8];
    char t35[8];
    char t51[8];
    char t59[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
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
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;

LAB0:    t1 = (t0 + 9088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3440U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t21) != 0)
        goto LAB10;

LAB11:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (!(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    memcpy(t59, t20, 8);

LAB14:    t87 = (t0 + 10896);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memset(t91, 0, 8);
    t92 = 1U;
    t93 = t92;
    t94 = (t59 + 4);
    t95 = *((unsigned int *)t59);
    t92 = (t92 & t95);
    t96 = *((unsigned int *)t94);
    t93 = (t93 & t96);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t98 | t92);
    t99 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t99 | t93);
    xsi_driver_vfirst_trans(t87, 0, 0);
    t100 = (t0 + 10080);
    *((int *)t100) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t20) = 1;
    goto LAB11;

LAB10:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 3440U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng18)));
    memset(t35, 0, 8);
    t36 = (t34 + 4);
    t37 = (t33 + 4);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t33);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB18;

LAB15:    if (t47 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t35) = 1;

LAB18:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t52) != 0)
        goto LAB21;

LAB22:    t60 = *((unsigned int *)t20);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t20 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t51) = 1;
    goto LAB22;

LAB21:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB22;

LAB23:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t20 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t20);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t51);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB25;

}

static void Cont_95_12(char *t0)
{
    char t4[8];
    char t18[8];
    char t34[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
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
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;

LAB0:    t1 = (t0 + 9336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4080U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (!(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    memcpy(t42, t4, 8);

LAB10:    t70 = (t0 + 10960);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memset(t74, 0, 8);
    t75 = 1U;
    t76 = t75;
    t77 = (t42 + 4);
    t78 = *((unsigned int *)t42);
    t75 = (t75 & t78);
    t79 = *((unsigned int *)t77);
    t76 = (t76 & t79);
    t80 = (t74 + 4);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t81 | t75);
    t82 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t82 | t76);
    xsi_driver_vfirst_trans(t70, 0, 0);
    t83 = (t0 + 10096);
    *((int *)t83) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3440U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng12)));
    memset(t18, 0, 8);
    t19 = (t17 + 4);
    t20 = (t16 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t16);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB14;

LAB11:    if (t30 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t18) = 1;

LAB14:    memset(t34, 0, 8);
    t35 = (t18 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t18);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t35) != 0)
        goto LAB17;

LAB18:    t43 = *((unsigned int *)t4);
    t44 = *((unsigned int *)t34);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = (t4 + 4);
    t47 = (t34 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB10;

LAB13:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t34) = 1;
    goto LAB18;

LAB17:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB18;

LAB19:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t4 + 4);
    t57 = (t34 + 4);
    t58 = *((unsigned int *)t56);
    t59 = (~(t58));
    t60 = *((unsigned int *)t4);
    t61 = (t60 & t59);
    t62 = *((unsigned int *)t57);
    t63 = (~(t62));
    t64 = *((unsigned int *)t34);
    t65 = (t64 & t63);
    t66 = (~(t61));
    t67 = (~(t65));
    t68 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t68 & t66);
    t69 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t69 & t67);
    goto LAB21;

}

static void Always_137_13(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t37[8];
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
    char *t14;
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
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;

LAB0:    t1 = (t0 + 9584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 10112);
    *((int *)t2) = 1;
    t3 = (t0 + 9616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(137, ng0);

LAB5:    xsi_set_current_line(139, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(146, ng0);

LAB17:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5120);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 5120);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t18, 2, 1, t19, 32, 1);
    t20 = ((char*)((ng12)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t13, 32, t20, 32);
    t21 = (t0 + 5120);
    t22 = (t0 + 5120);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 5120);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t38 = ((char*)((ng17)));
    xsi_vlog_generic_convert_array_indices(t16, t37, t24, t29, 2, 1, t38, 32, 1);
    t39 = (t16 + 4);
    t6 = *((unsigned int *)t39);
    t28 = (!(t6));
    t40 = (t37 + 4);
    t7 = *((unsigned int *)t40);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5120);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 5120);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t18, 2, 1, t19, 32, 1);
    t20 = (t0 + 5120);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 5120);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 5120);
    t29 = (t26 + 64U);
    t38 = *((char **)t29);
    t39 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t15, 32, t22, t25, t38, 2, 1, t39, 32, 1);
    memset(t16, 0, 8);
    t40 = (t13 + 4);
    t41 = (t15 + 4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t15);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t40);
    t10 = *((unsigned int *)t41);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t40);
    t34 = *((unsigned int *)t41);
    t42 = (t33 | t34);
    t43 = (~(t42));
    t44 = (t30 & t43);
    if (t44 != 0)
        goto LAB23;

LAB20:    if (t42 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t16) = 1;

LAB23:    t46 = (t16 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t16);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 3440U);
    t3 = *((char **)t2);

LAB27:    t2 = ((char*)((ng20)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t28 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng21)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t28 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 9392);
    t4 = (t0 + 1576);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB53:    t11 = (t0 + 9488);
    t12 = *((char **)t11);
    t14 = (t12 + 80U);
    t17 = *((char **)t14);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t28 = ((int  (*)(char *, char *))t21)(t0, t12);

LAB55:    if (t28 != 0)
        goto LAB56;

LAB51:    t12 = (t0 + 1576);
    xsi_vlog_subprogram_popinvocation(t12);

LAB52:    t22 = (t0 + 9488);
    t23 = *((char **)t22);
    t22 = (t0 + 1576);
    t24 = (t0 + 9392);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);

LAB34:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(141, ng0);

LAB9:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB10);
    t5 = (t0 + 9392);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB11:    xsi_set_current_line(143, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB12:    t2 = (t0 + 5440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB13;

LAB14:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB10:    t3 = (t0 + 9392);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB8;

LAB13:    xsi_set_current_line(145, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 5120);
    t17 = (t0 + 5120);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 5120);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 5440);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 5440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 5440);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB12;

LAB15:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB16;

LAB18:    t8 = *((unsigned int *)t16);
    t9 = *((unsigned int *)t37);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t21, t15, 0, *((unsigned int *)t37), t36, 0LL);
    goto LAB19;

LAB22:    t45 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(149, ng0);
    t52 = ((char*)((ng12)));
    t53 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 1, 0LL);
    goto LAB26;

LAB28:    xsi_set_current_line(152, ng0);

LAB35:    xsi_set_current_line(154, ng0);
    t4 = (t0 + 3120U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng10)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t11);
    t34 = *((unsigned int *)t12);
    t42 = (t33 | t34);
    t43 = (~(t42));
    t44 = (t30 & t43);
    if (t44 != 0)
        goto LAB39;

LAB36:    if (t42 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t13) = 1;

LAB39:    t17 = (t13 + 4);
    t47 = *((unsigned int *)t17);
    t48 = (~(t47));
    t49 = *((unsigned int *)t13);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 3280U);
    t4 = *((char **)t2);
    t2 = (t0 + 5120);
    t5 = (t0 + 5120);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 5120);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 3120U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_array_indices(t13, t15, t12, t18, 2, 1, t20, 4, 2);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t21 = (t15 + 4);
    t7 = *((unsigned int *)t21);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB43;

LAB44:    goto LAB34;

LAB30:    xsi_set_current_line(159, ng0);
    t4 = (t0 + 9392);
    t5 = (t0 + 2008);
    t11 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t11);

LAB47:    t12 = (t0 + 9488);
    t14 = *((char **)t12);
    t17 = (t14 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t31 = ((int  (*)(char *, char *))t22)(t0, t14);

LAB49:    if (t31 != 0)
        goto LAB50;

LAB45:    t14 = (t0 + 2008);
    xsi_vlog_subprogram_popinvocation(t14);

LAB46:    t23 = (t0 + 9488);
    t24 = *((char **)t23);
    t23 = (t0 + 2008);
    t25 = (t0 + 9392);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    goto LAB34;

LAB38:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(155, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 1, 0LL);
    goto LAB42;

LAB43:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB44;

LAB48:;
LAB50:    t12 = (t0 + 9584U);
    *((char **)t12) = &&LAB47;
    goto LAB1;

LAB54:;
LAB56:    t11 = (t0 + 9584U);
    *((char **)t11) = &&LAB53;
    goto LAB1;

}


extern void work_m_00000000002104331278_1093763706_init()
{
	static char *pe[] = {(void *)Cont_89_0,(void *)Cont_89_1,(void *)Cont_89_2,(void *)Cont_89_3,(void *)Cont_89_4,(void *)Cont_89_5,(void *)Cont_89_6,(void *)Cont_89_7,(void *)Cont_91_8,(void *)Cont_89_9,(void *)Cont_89_10,(void *)Cont_95_11,(void *)Cont_95_12,(void *)Always_137_13};
	static char *se[] = {(void *)sp_set_vector_offset,(void *)sp_setup_exc,(void *)sp_perform_eret};
	xsi_register_didat("work_m_00000000002104331278_1093763706", "isim/system_tb_isim_beh.exe.sim/work/m_00000000002104331278_1093763706.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
