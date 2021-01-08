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
    work_m_00000000002597357510_3919802476_init();
    work_m_00000000001613533770_4196412144_init();
    work_m_00000000001212465494_0036543574_init();
    work_m_00000000000252292045_3642967255_init();
    work_m_00000000003549275105_4260226045_init();
    work_m_00000000000595411099_3422311471_init();
    work_m_00000000000413143656_3443700325_init();
    work_m_00000000002479151213_1540133468_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002479151213_1540133468");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
