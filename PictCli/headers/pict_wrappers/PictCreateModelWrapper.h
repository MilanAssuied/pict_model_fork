#pragma once

#include "ManagedMethod.h"
#include "core_api.h"


namespace pict_wrapper
{    
    public ref class pict_create_model_wrapper sealed : public cli_wrapper::managed_method<PICT_HANDLE>
    {
    public:
        pict_create_model_wrapper();
    };    
}
