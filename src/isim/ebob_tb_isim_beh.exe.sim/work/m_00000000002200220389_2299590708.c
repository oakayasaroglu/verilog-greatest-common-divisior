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
static const char *ng0 = "C:/Users/Osman Alperen/Desktop/WorkSpace/digital_Logic_Design/proje/proje1.2/ebob.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};



static void Always_20_0(char *t0)
{
    char t6[8];
    char t29[8];
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
    char *t30;
    int t31;
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

LAB0:    t1 = (t0 + 3872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 4192);
    *((int *)t2) = 1;
    t3 = (t0 + 3904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 2072U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(25, ng0);

LAB14:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 2);
    if (t31 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 2);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 2);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 2);
    if (t31 == 1)
        goto LAB22;

LAB23:
LAB24:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(21, ng0);

LAB13:    xsi_set_current_line(22, ng0);
    t28 = ((char*)((ng2)));
    memcpy(t29, t28, 8);
    t30 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 3, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1592U);
    t3 = *((char **)t2);
    t2 = (t0 + 2792);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    t2 = (t0 + 2632);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB12;

LAB16:    xsi_set_current_line(27, ng0);
    t7 = (t0 + 2632);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 2792);
    t28 = (t22 + 56U);
    t30 = *((char **)t28);
    memset(t6, 0, 8);
    t32 = (t21 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB26;

LAB25:    t33 = (t30 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t21) > *((unsigned int *)t30))
        goto LAB27;

LAB28:    t35 = (t6 + 4);
    t9 = *((unsigned int *)t35);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    memcpy(t6, t2, 8);
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 3, 0LL);

LAB32:    goto LAB24;

LAB18:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 2792);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2632);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    memset(t6, 0, 8);
    t28 = (t7 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB35;

LAB34:    t30 = (t22 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t7) > *((unsigned int *)t22))
        goto LAB36;

LAB37:    t33 = (t6 + 4);
    t9 = *((unsigned int *)t33);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    memcpy(t6, t2, 8);
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 3, 0LL);

LAB41:    goto LAB24;

LAB20:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 2632);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2792);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    memset(t6, 0, 8);
    t28 = (t7 + 4);
    t30 = (t22 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t22);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t28);
    t13 = *((unsigned int *)t30);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t28);
    t17 = *((unsigned int *)t30);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB46;

LAB43:    if (t18 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t6) = 1;

LAB46:    t33 = (t6 + 4);
    t23 = *((unsigned int *)t33);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    memcpy(t6, t2, 8);
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 3, 0LL);

LAB49:    goto LAB24;

LAB22:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2632);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2792);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    memset(t6, 0, 8);
    t28 = (t7 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB52;

LAB51:    t30 = (t22 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB52;

LAB55:    if (*((unsigned int *)t7) > *((unsigned int *)t22))
        goto LAB53;

LAB54:    t33 = (t6 + 4);
    t9 = *((unsigned int *)t33);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2632);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    t22 = (t5 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB60;

LAB59:    t28 = (t21 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB60;

LAB63:    if (*((unsigned int *)t5) > *((unsigned int *)t21))
        goto LAB61;

LAB62:    t32 = (t6 + 4);
    t9 = *((unsigned int *)t32);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2792);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    t22 = (t5 + 4);
    t28 = (t21 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t21);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t22);
    t13 = *((unsigned int *)t28);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t22);
    t17 = *((unsigned int *)t28);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB70;

LAB67:    if (t18 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t6) = 1;

LAB70:    t32 = (t6 + 4);
    t23 = *((unsigned int *)t32);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB71;

LAB72:
LAB73:
LAB66:
LAB58:    goto LAB24;

LAB26:    t34 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t6) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(27, ng0);

LAB33:    xsi_set_current_line(28, ng0);
    t36 = (t0 + 2632);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t0 + 2792);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_minus(t29, 4, t38, 4, t41, 4);
    t42 = (t0 + 2632);
    xsi_vlogvar_assign_value(t42, t29, 0, 0, 4);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng2)));
    memcpy(t6, t2, 8);
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 3, 0LL);
    goto LAB32;

LAB35:    t32 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t6) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(34, ng0);

LAB42:    xsi_set_current_line(35, ng0);
    t34 = (t0 + 2792);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t0 + 2632);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_minus(t29, 4, t36, 4, t39, 4);
    t40 = (t0 + 2792);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 4);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    memcpy(t6, t2, 8);
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 3, 0LL);
    goto LAB41;

LAB45:    t32 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(41, ng0);

LAB50:    xsi_set_current_line(42, ng0);
    t34 = (t0 + 2632);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t0 + 2472);
    xsi_vlogvar_assign_value(t37, t36, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    memcpy(t6, t2, 8);
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 3, 0LL);
    goto LAB49;

LAB52:    t32 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB54;

LAB53:    *((unsigned int *)t6) = 1;
    goto LAB54;

LAB56:    xsi_set_current_line(49, ng0);
    t34 = ((char*)((ng3)));
    memcpy(t29, t34, 8);
    t35 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t35, t29, 0, 0, 3, 0LL);
    goto LAB58;

LAB60:    t30 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB62;

LAB61:    *((unsigned int *)t6) = 1;
    goto LAB62;

LAB64:    xsi_set_current_line(51, ng0);
    t33 = ((char*)((ng4)));
    memcpy(t29, t33, 8);
    t34 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t34, t29, 0, 0, 3, 0LL);
    goto LAB66;

LAB69:    t30 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(53, ng0);
    t33 = ((char*)((ng5)));
    memcpy(t29, t33, 8);
    t34 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t34, t29, 0, 0, 3, 0LL);
    goto LAB73;

}


extern void work_m_00000000002200220389_2299590708_init()
{
	static char *pe[] = {(void *)Always_20_0};
	xsi_register_didat("work_m_00000000002200220389_2299590708", "isim/ebob_tb_isim_beh.exe.sim/work/m_00000000002200220389_2299590708.didat");
	xsi_register_executes(pe);
}
