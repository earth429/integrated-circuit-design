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
    work_m_00000000002769026865_2140897300_init();
    work_m_00000000000888325087_3996337969_init();
    work_m_00000000002675392081_2892691154_init();
    work_m_00000000003007554258_0196029798_init();
    work_m_00000000002707763810_0335847308_init();
    work_m_00000000004202224740_1741683723_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004202224740_1741683723");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
