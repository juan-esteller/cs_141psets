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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//vmware-host/Shared Folders/cs141_vm_shared/lab2/test_alu.v";
static int ng1[] = {0, 0};
static int ng2[] = {2147483647, 0};
static int ng3[] = {16, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {0U, 0U};
static const char *ng6 = "ERROR: AND:  op_code = %b, X = %h, Y = %h, Z = %h";
static unsigned int ng7[] = {2U, 0U};
static const char *ng8 = "ERROR: XOR:  op_code = %b, X = %h, Y = %h, Z = %h";
static unsigned int ng9[] = {1U, 0U};
static const char *ng10 = "ERROR: OR:  op_code = %b, X = %h, Y = %h, Z = %h";
static unsigned int ng11[] = {3U, 0U};
static const char *ng12 = "ERROR: NOR:  op_code = %b, X = %h, Y = %h, Z = %h";
static unsigned int ng13[] = {5U, 0U};
static const char *ng14 = "ERROR: ADD:  op_code = %b, X = %h, Y = %h, Z = %h";
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {9U, 0U};
static unsigned int ng19[] = {10U, 0U};
static const char *ng20 = "ERROR HAPPENED! invalid op code, Z was not zero, op_code = %b, X = %h, Y = %h, Z = %h";



static void Initial_39_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 2180U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);

LAB4:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB1:    return;
LAB6:    xsi_set_current_line(47, ng0);

LAB8:    xsi_set_current_line(48, ng0);
    t13 = (t0 + 1380);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 1104);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2080);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB10:    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB11:    xsi_set_current_line(50, ng0);

LAB13:    xsi_set_current_line(51, ng0);
    t13 = (t0 + 1472);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 1196);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1472);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB10;

LAB15:    xsi_set_current_line(52, ng0);

LAB17:    xsi_set_current_line(53, ng0);
    t13 = (t0 + 1564);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 1288);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 4);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2080);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1564);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

}

static void Always_64_1(char *t0)
{
    char t14[8];
    char t46[8];
    char t74[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
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
    unsigned int t73;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2520);
    *((int *)t2) = 1;
    t3 = (t0 + 2352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 2224);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB7:    t5 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(109, ng0);

LAB92:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t14, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB94;

LAB93:    t5 = (t3 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB94;

LAB95:    t8 = (t14 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t21 = (t17 & t16);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB96;

LAB97:
LAB98:
LAB30:    goto LAB2;

LAB8:    xsi_set_current_line(67, ng0);

LAB31:    xsi_set_current_line(69, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 1104);
    t9 = (t7 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 1196);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t13);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t18 = (t10 + 4);
    t19 = (t13 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB32;

LAB33:
LAB34:    memset(t46, 0, 8);
    if (*((unsigned int *)t8) != *((unsigned int *)t14))
        goto LAB36;

LAB35:    t47 = (t8 + 4);
    t48 = (t14 + 4);
    if (*((unsigned int *)t47) != *((unsigned int *)t48))
        goto LAB36;

LAB37:    t49 = (t46 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB30;

LAB10:    xsi_set_current_line(75, ng0);

LAB42:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 1104);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    *((unsigned int *)t14) = t17;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t18 = (t14 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t18);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB43;

LAB44:
LAB45:    memset(t46, 0, 8);
    t19 = (t5 + 4);
    t20 = (t14 + 4);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t14);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t19);
    t34 = *((unsigned int *)t20);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t19);
    t40 = *((unsigned int *)t20);
    t41 = (t37 | t40);
    t42 = (~(t41));
    t43 = (t36 & t42);
    if (t43 != 0)
        goto LAB47;

LAB46:    if (t41 != 0)
        goto LAB48;

LAB49:    t29 = (t46 + 4);
    t44 = *((unsigned int *)t29);
    t45 = (~(t44));
    t50 = *((unsigned int *)t46);
    t51 = (t50 & t45);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB50;

LAB51:
LAB52:    goto LAB30;

LAB12:    xsi_set_current_line(81, ng0);

LAB54:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 1104);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t18 = (t14 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t18);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB55;

LAB56:
LAB57:    memset(t46, 0, 8);
    t28 = (t5 + 4);
    t29 = (t14 + 4);
    t42 = *((unsigned int *)t5);
    t43 = *((unsigned int *)t14);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t28);
    t50 = *((unsigned int *)t29);
    t51 = (t45 ^ t50);
    t52 = (t44 | t51);
    t53 = *((unsigned int *)t28);
    t54 = *((unsigned int *)t29);
    t66 = (t53 | t54);
    t67 = (~(t66));
    t68 = (t52 & t67);
    if (t68 != 0)
        goto LAB59;

LAB58:    if (t66 != 0)
        goto LAB60;

LAB61:    t48 = (t46 + 4);
    t69 = *((unsigned int *)t48);
    t70 = (~(t69));
    t71 = *((unsigned int *)t46);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB62;

LAB63:
LAB64:    goto LAB30;

LAB14:    xsi_set_current_line(87, ng0);

LAB66:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 1104);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 | t16);
    *((unsigned int *)t46) = t17;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t18 = (t46 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t18);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB67;

LAB68:
LAB69:    memset(t14, 0, 8);
    t28 = (t14 + 4);
    t29 = (t46 + 4);
    t42 = *((unsigned int *)t46);
    t43 = (~(t42));
    *((unsigned int *)t14) = t43;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB71;

LAB70:    t52 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t52 & 4294967295U);
    t53 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t53 & 4294967295U);
    memset(t74, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t14))
        goto LAB73;

LAB72:    t47 = (t5 + 4);
    t48 = (t14 + 4);
    if (*((unsigned int *)t47) != *((unsigned int *)t48))
        goto LAB73;

LAB74:    t49 = (t74 + 4);
    t54 = *((unsigned int *)t49);
    t66 = (~(t54));
    t67 = *((unsigned int *)t74);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB75;

LAB76:
LAB77:    goto LAB30;

LAB16:    xsi_set_current_line(93, ng0);

LAB79:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 1104);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t8, 32, t11, 32);
    memset(t46, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t14))
        goto LAB81;

LAB80:    t12 = (t5 + 4);
    t13 = (t14 + 4);
    if (*((unsigned int *)t12) != *((unsigned int *)t13))
        goto LAB81;

LAB82:    t18 = (t46 + 4);
    t15 = *((unsigned int *)t18);
    t16 = (~(t15));
    t17 = *((unsigned int *)t46);
    t21 = (t17 & t16);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB83;

LAB84:
LAB85:    goto LAB30;

LAB18:    xsi_set_current_line(99, ng0);

LAB87:    goto LAB30;

LAB20:    xsi_set_current_line(101, ng0);

LAB88:    goto LAB30;

LAB22:    xsi_set_current_line(103, ng0);

LAB89:    goto LAB30;

LAB24:    xsi_set_current_line(105, ng0);

LAB90:    goto LAB30;

LAB26:    xsi_set_current_line(107, ng0);

LAB91:    goto LAB30;

LAB32:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t26 | t27);
    t28 = (t10 + 4);
    t29 = (t13 + 4);
    t30 = *((unsigned int *)t10);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t13);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & t40);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t41);
    t44 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t44 & t40);
    t45 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t45 & t41);
    goto LAB34;

LAB36:    *((unsigned int *)t46) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(69, ng0);

LAB41:    xsi_set_current_line(70, ng0);
    t55 = (t0 + 1288);
    t56 = (t55 + 36U);
    t57 = *((char **)t56);
    t58 = (t0 + 1104);
    t59 = (t58 + 36U);
    t60 = *((char **)t59);
    t61 = (t0 + 1196);
    t62 = (t61 + 36U);
    t63 = *((char **)t62);
    t64 = (t0 + 600U);
    t65 = *((char **)t64);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t0, (char)118, t57, 4, (char)118, t60, 32, (char)118, t63, 32, (char)118, t65, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1656);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB40;

LAB43:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t14) = (t26 | t27);
    goto LAB45;

LAB47:    *((unsigned int *)t46) = 1;
    goto LAB49;

LAB48:    t28 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(76, ng0);

LAB53:    xsi_set_current_line(77, ng0);
    t47 = (t0 + 1288);
    t48 = (t47 + 36U);
    t49 = *((char **)t48);
    t55 = (t0 + 1104);
    t56 = (t55 + 36U);
    t57 = *((char **)t56);
    t58 = (t0 + 1196);
    t59 = (t58 + 36U);
    t60 = *((char **)t59);
    t61 = (t0 + 600U);
    t62 = *((char **)t61);
    xsi_vlogfile_write(1, 0, 0, ng8, 5, t0, (char)118, t49, 4, (char)118, t57, 32, (char)118, t60, 32, (char)118, t62, 32);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1656);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB52;

LAB55:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t14) = (t26 | t27);
    t19 = (t8 + 4);
    t20 = (t11 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (~(t30));
    t32 = *((unsigned int *)t8);
    t38 = (t32 & t31);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t11);
    t39 = (t35 & t34);
    t36 = (~(t38));
    t37 = (~(t39));
    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & t36);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t37);
    goto LAB57;

LAB59:    *((unsigned int *)t46) = 1;
    goto LAB61;

LAB60:    t47 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(82, ng0);

LAB65:    xsi_set_current_line(83, ng0);
    t49 = (t0 + 1288);
    t55 = (t49 + 36U);
    t56 = *((char **)t55);
    t57 = (t0 + 1104);
    t58 = (t57 + 36U);
    t59 = *((char **)t58);
    t60 = (t0 + 1196);
    t61 = (t60 + 36U);
    t62 = *((char **)t61);
    t63 = (t0 + 600U);
    t64 = *((char **)t63);
    xsi_vlogfile_write(1, 0, 0, ng10, 5, t0, (char)118, t56, 4, (char)118, t59, 32, (char)118, t62, 32, (char)118, t64, 32);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1656);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB64;

LAB67:    t26 = *((unsigned int *)t46);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t46) = (t26 | t27);
    t19 = (t8 + 4);
    t20 = (t11 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (~(t30));
    t32 = *((unsigned int *)t8);
    t38 = (t32 & t31);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t11);
    t39 = (t35 & t34);
    t36 = (~(t38));
    t37 = (~(t39));
    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & t36);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t37);
    goto LAB69;

LAB71:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t29);
    *((unsigned int *)t14) = (t44 | t45);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t50 | t51);
    goto LAB70;

LAB73:    *((unsigned int *)t74) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(88, ng0);

LAB78:    xsi_set_current_line(89, ng0);
    t55 = (t0 + 1288);
    t56 = (t55 + 36U);
    t57 = *((char **)t56);
    t58 = (t0 + 1104);
    t59 = (t58 + 36U);
    t60 = *((char **)t59);
    t61 = (t0 + 1196);
    t62 = (t61 + 36U);
    t63 = *((char **)t62);
    t64 = (t0 + 600U);
    t65 = *((char **)t64);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t57, 4, (char)118, t60, 32, (char)118, t63, 32, (char)118, t65, 32);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1656);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB77;

LAB81:    *((unsigned int *)t46) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(94, ng0);

LAB86:    xsi_set_current_line(95, ng0);
    t19 = (t0 + 1288);
    t20 = (t19 + 36U);
    t28 = *((char **)t20);
    t29 = (t0 + 1104);
    t47 = (t29 + 36U);
    t48 = *((char **)t47);
    t49 = (t0 + 1196);
    t55 = (t49 + 36U);
    t56 = *((char **)t55);
    t57 = (t0 + 600U);
    t58 = *((char **)t57);
    xsi_vlogfile_write(1, 0, 0, ng14, 5, t0, (char)118, t28, 4, (char)118, t48, 32, (char)118, t56, 32, (char)118, t58, 32);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1656);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB85;

LAB94:    *((unsigned int *)t14) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(111, ng0);

LAB99:    xsi_set_current_line(112, ng0);
    t9 = (t0 + 1288);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 1104);
    t13 = (t12 + 36U);
    t18 = *((char **)t13);
    t19 = (t0 + 1196);
    t20 = (t19 + 36U);
    t28 = *((char **)t20);
    t29 = (t0 + 600U);
    t47 = *((char **)t29);
    xsi_vlogfile_write(1, 0, 0, ng20, 5, t0, (char)118, t11, 4, (char)118, t18, 32, (char)118, t28, 32, (char)118, t47, 32);
    goto LAB98;

}


extern void work_m_00000000001360853171_2429141254_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Always_64_1};
	xsi_register_didat("work_m_00000000001360853171_2429141254", "isim/test_alu_isim_beh.exe.sim/work/m_00000000001360853171_2429141254.didat");
	xsi_register_executes(pe);
}
