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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002784903858_3037376393_init();
    work_m_00000000002991975736_1445641171_init();
    work_m_00000000001032232354_0079564777_init();
    work_m_00000000002541956666_1623485051_init();
    work_m_00000000000161779110_2885957937_init();
    work_m_00000000001465943533_4127636709_init();
    work_m_00000000003947278312_3363942390_init();
    work_m_00000000003106388859_4241813833_init();
    work_m_00000000004067231440_3885196136_init();
    work_m_00000000001032232354_1865908462_init();
    work_m_00000000001032232354_0914910571_init();
    work_m_00000000001032232354_1390717039_init();
    work_m_00000000001032232354_0497368744_init();
    work_m_00000000001032232354_3524816140_init();
    work_m_00000000003576185585_2725559894_init();
    work_m_00000000002393431474_0010801604_init();
    work_m_00000000001980849106_3877310806_init();
    work_m_00000000002047498008_0258635663_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_0258635663");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
