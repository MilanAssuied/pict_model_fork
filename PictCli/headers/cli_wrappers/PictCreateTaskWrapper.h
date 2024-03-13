#pragma once

#include "ManagedMethodExpansionForcer.h"


namespace cli_wrapper
{    
    public ref class pict_create_task_wrapper sealed : public managed_method_expansion_forcer
    {
    public:
        pict_create_task_wrapper();

    private:
        void force_expansion() { call(); }
    };    
}
