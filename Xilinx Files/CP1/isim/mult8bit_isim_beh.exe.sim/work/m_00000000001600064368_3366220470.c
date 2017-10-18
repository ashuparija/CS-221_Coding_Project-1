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
static const char *ng0 = "F:/Studies/Semester 3/CS-221 Coding Project-1/Xilinx Files/CP1/mult8bit.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static int ng3[] = {1, 0};
static int ng4[] = {7, 0};



static void Initial_36_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1048U);
    t2 = *((char **)t1);
    t1 = (t0 + 3208);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 8);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_43_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4824);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 3848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 3848);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

}

static void Always_47_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 6576);
    *((int *)t2) = 1;
    t3 = (t0 + 5296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB2;

}

static void Always_56_3(char *t0)
{
    char t8[8];
    char t18[8];
    char t24[8];
    char t40[8];
    char t56[8];
    char t72[8];
    char t80[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;
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
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;

LAB0:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6592);
    *((int *)t2) = 1;
    t3 = (t0 + 5544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 3688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(59, ng0);

LAB9:    xsi_set_current_line(60, ng0);
    t15 = (t0 + 3208);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t0 + 3208);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t18, 32, t17, t21, 2, t22, 32, 1);
    t23 = ((char*)((ng1)));
    memset(t24, 0, 8);
    t25 = (t18 + 4);
    t26 = (t23 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB13;

LAB10:    if (t36 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t24) = 1;

LAB13:    memset(t40, 0, 8);
    t41 = (t24 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t24);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t41) != 0)
        goto LAB16;

LAB17:    t48 = (t40 + 4);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB18;

LAB19:    memcpy(t80, t40, 8);

LAB20:    t112 = (t80 + 4);
    t113 = *((unsigned int *)t112);
    t114 = (~(t113));
    t115 = *((unsigned int *)t80);
    t116 = (t115 & t114);
    t117 = (t116 != 0);
    if (t117 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t4, t7, 2, t9, 32, 1);
    t15 = ((char*)((ng3)));
    memset(t18, 0, 8);
    t16 = (t8 + 4);
    t17 = (t15 + 4);
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t15);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t16);
    t14 = *((unsigned int *)t17);
    t27 = (t13 ^ t14);
    t28 = (t12 | t27);
    t29 = *((unsigned int *)t16);
    t30 = *((unsigned int *)t17);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB38;

LAB35:    if (t31 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t18) = 1;

LAB38:    memset(t24, 0, 8);
    t20 = (t18 + 4);
    t34 = *((unsigned int *)t20);
    t35 = (~(t34));
    t36 = *((unsigned int *)t18);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t20) != 0)
        goto LAB41;

LAB42:    t22 = (t24 + 4);
    t42 = *((unsigned int *)t24);
    t43 = *((unsigned int *)t22);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB43;

LAB44:    memcpy(t72, t24, 8);

LAB45:    t73 = (t72 + 4);
    t107 = *((unsigned int *)t73);
    t108 = (~(t107));
    t109 = *((unsigned int *)t72);
    t110 = (t109 & t108);
    t111 = (t110 != 0);
    if (t111 > 0)
        goto LAB57;

LAB58:
LAB59:
LAB34:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 0);
    t27 = (t14 & 1);
    *((unsigned int *)t5) = t27;
    t7 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB60:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5320);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB12:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t40) = 1;
    goto LAB17;

LAB16:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB17;

LAB18:    t52 = (t0 + 3528);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng3)));
    memset(t56, 0, 8);
    t57 = (t54 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t57);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB24;

LAB21:    if (t68 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t56) = 1;

LAB24:    memset(t72, 0, 8);
    t73 = (t56 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t56);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t73) != 0)
        goto LAB27;

LAB28:    t81 = *((unsigned int *)t40);
    t82 = *((unsigned int *)t72);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t40 + 4);
    t85 = (t72 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB23:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t72) = 1;
    goto LAB28;

LAB27:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB28;

LAB29:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t40 + 4);
    t95 = (t72 + 4);
    t96 = *((unsigned int *)t40);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t72);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t104 = (t97 & t99);
    t105 = (t101 & t103);
    t106 = (~(t104));
    t107 = (~(t105));
    t108 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t108 & t106);
    t109 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t109 & t107);
    t110 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t110 & t106);
    t111 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t111 & t107);
    goto LAB31;

LAB32:    xsi_set_current_line(61, ng0);
    t118 = (t0 + 1368U);
    t119 = *((char **)t118);
    t118 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t118, t119, 0, 0, 8, 0LL);
    goto LAB34;

LAB37:    t19 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t24) = 1;
    goto LAB42;

LAB41:    t21 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB42;

LAB43:    t23 = (t0 + 3528);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t39 = ((char*)((ng1)));
    memset(t40, 0, 8);
    t41 = (t26 + 4);
    t47 = (t39 + 4);
    t45 = *((unsigned int *)t26);
    t46 = *((unsigned int *)t39);
    t49 = (t45 ^ t46);
    t50 = *((unsigned int *)t41);
    t51 = *((unsigned int *)t47);
    t59 = (t50 ^ t51);
    t60 = (t49 | t59);
    t61 = *((unsigned int *)t41);
    t62 = *((unsigned int *)t47);
    t63 = (t61 | t62);
    t64 = (~(t63));
    t65 = (t60 & t64);
    if (t65 != 0)
        goto LAB49;

LAB46:    if (t63 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t40) = 1;

LAB49:    memset(t56, 0, 8);
    t52 = (t40 + 4);
    t66 = *((unsigned int *)t52);
    t67 = (~(t66));
    t68 = *((unsigned int *)t40);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t52) != 0)
        goto LAB52;

LAB53:    t74 = *((unsigned int *)t24);
    t75 = *((unsigned int *)t56);
    t76 = (t74 & t75);
    *((unsigned int *)t72) = t76;
    t54 = (t24 + 4);
    t55 = (t56 + 4);
    t57 = (t72 + 4);
    t77 = *((unsigned int *)t54);
    t78 = *((unsigned int *)t55);
    t81 = (t77 | t78);
    *((unsigned int *)t57) = t81;
    t82 = *((unsigned int *)t57);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB45;

LAB48:    t48 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB49;

LAB50:    *((unsigned int *)t56) = 1;
    goto LAB53;

LAB52:    t53 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB53;

LAB54:    t87 = *((unsigned int *)t72);
    t88 = *((unsigned int *)t57);
    *((unsigned int *)t72) = (t87 | t88);
    t58 = (t24 + 4);
    t71 = (t56 + 4);
    t89 = *((unsigned int *)t24);
    t90 = (~(t89));
    t91 = *((unsigned int *)t58);
    t92 = (~(t91));
    t93 = *((unsigned int *)t56);
    t96 = (~(t93));
    t97 = *((unsigned int *)t71);
    t98 = (~(t97));
    t104 = (t90 & t92);
    t105 = (t96 & t98);
    t99 = (~(t104));
    t100 = (~(t105));
    t101 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t101 & t99);
    t102 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t102 & t100);
    t103 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t103 & t99);
    t106 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t106 & t100);
    goto LAB56;

LAB57:    xsi_set_current_line(63, ng0);
    t79 = (t0 + 1528U);
    t84 = *((char **)t79);
    t79 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t79, t84, 0, 0, 8, 0LL);
    goto LAB59;

LAB61:    xsi_set_current_line(66, ng0);

LAB63:    xsi_set_current_line(67, ng0);
    t7 = (t0 + 3208);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    t16 = (t0 + 3208);
    t17 = (t16 + 72U);
    t19 = *((char **)t17);
    t20 = (t0 + 3368);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng3)));
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 32, t22, 32, t23, 32);
    xsi_vlog_generic_get_index_select_value(t18, 1, t15, t19, 2, t24, 32, 1);
    t25 = (t0 + 3208);
    t26 = (t0 + 3208);
    t39 = (t26 + 72U);
    t41 = *((char **)t39);
    t47 = (t0 + 3368);
    t48 = (t47 + 56U);
    t52 = *((char **)t48);
    xsi_vlog_generic_convert_bit_index(t40, t41, 2, t52, 32, 1);
    t53 = (t40 + 4);
    t27 = *((unsigned int *)t53);
    t104 = (!(t27));
    if (t104 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3368);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB60;

LAB64:    xsi_vlogvar_wait_assign_value(t25, t18, 0, *((unsigned int *)t40), 1, 0LL);
    goto LAB65;

LAB66:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 3048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    t27 = (t14 & 1);
    *((unsigned int *)t6) = t27;
    t9 = (t0 + 3208);
    t15 = (t0 + 3208);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t19 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t18, t17, 2, t19, 32, 1);
    t20 = (t18 + 4);
    t28 = *((unsigned int *)t20);
    t104 = (!(t28));
    if (t104 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5320);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB67:    xsi_vlogvar_wait_assign_value(t9, t8, 0, *((unsigned int *)t18), 1, 0LL);
    goto LAB68;

LAB69:    xsi_set_current_line(70, ng0);
    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB70:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 32, 0LL);
    goto LAB8;

LAB71:    xsi_set_current_line(71, ng0);

LAB73:    xsi_set_current_line(72, ng0);
    t7 = (t0 + 3048);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    t16 = (t0 + 3048);
    t17 = (t16 + 72U);
    t19 = *((char **)t17);
    t20 = (t0 + 3368);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng3)));
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 32, t22, 32, t23, 32);
    xsi_vlog_generic_get_index_select_value(t18, 1, t15, t19, 2, t24, 32, 1);
    t25 = (t0 + 3048);
    t26 = (t0 + 3048);
    t39 = (t26 + 72U);
    t41 = *((char **)t39);
    t47 = (t0 + 3368);
    t48 = (t47 + 56U);
    t52 = *((char **)t48);
    xsi_vlog_generic_convert_bit_index(t40, t41, 2, t52, 32, 1);
    t53 = (t40 + 4);
    t27 = *((unsigned int *)t53);
    t104 = (!(t27));
    if (t104 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3368);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB70;

LAB74:    xsi_vlogvar_wait_assign_value(t25, t18, 0, *((unsigned int *)t40), 1, 0LL);
    goto LAB75;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 6688);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig2_execute(char *t0)
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
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 6008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    *((unsigned int *)t3) = t7;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB5;

LAB4:    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t14 = (t0 + 6752);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 255U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 7);
    t27 = (t0 + 6608);
    *((int *)t27) = 1;

LAB1:    return;
LAB5:    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t8 | t9);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t5);
    *((unsigned int *)t2) = (t10 | t11);
    goto LAB4;

}

static void implSig3_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 6816);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}


extern void work_m_00000000001600064368_3366220470_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Always_43_1,(void *)Always_47_2,(void *)Always_56_3,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	xsi_register_didat("work_m_00000000001600064368_3366220470", "isim/mult8bit_isim_beh.exe.sim/work/m_00000000001600064368_3366220470.didat");
	xsi_register_executes(pe);
}
