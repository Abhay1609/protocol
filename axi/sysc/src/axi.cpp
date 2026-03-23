#include "axi.h"    

axi::axi(sc_core::sc_module_name a_name) : sc_module(a_name)
{
    std::cout << "AXI module created with name: " << a_name << std::endl;
}