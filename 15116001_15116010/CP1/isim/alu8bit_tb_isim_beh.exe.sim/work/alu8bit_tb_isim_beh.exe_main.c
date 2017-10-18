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
    work_m_00000000003440147667_3996337969_init();
    work_m_00000000000375724026_2320720518_init();
    work_m_00000000002404672892_0733047987_init();
    work_m_00000000002404672892_4245357609_init();
    work_m_00000000001600064368_3366220470_init();
    work_m_00000000002212678961_1006203786_init();
    work_m_00000000000919993364_1444978779_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000919993364_1444978779");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
