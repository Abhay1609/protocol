#include <systemc>

class axi : public sc_module
{
    axi(sc_core::sc_module_name a_name);

    //Add implementation of Creadit support
    int tx = 0;
    int rx = RESET_CREADITS;
    int RP = RP_NUM;
    if ( tx == completed )
    {
        tx ++;
        rx --;
    }
}