

#ifndef MODULE_H
#define MODULE_H    
#include "systemc.h"

class module : public sc_core::sc_module
{
public:
    module(sc_core::sc_module_name name);
   SC_HAS_PROCESS(module);

    void process();
};

#endif // MODULE_H