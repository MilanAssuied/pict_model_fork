#pragma once

#include "ManagedMethodExpansionForcer.h"


namespace pict_wrapper
{    
    public ref class pict_create_task_wrapper sealed : public cli_wrapper::managed_method_expansion_forcer
    {
    public:
        pict_create_task_wrapper();

    private:
        void force_expansion() { call(); }
    };    
}
