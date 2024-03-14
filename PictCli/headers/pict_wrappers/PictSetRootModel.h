#pragma once

#include "ManagedVoidMethod.h"
#include "core_api.h"


namespace pict_wrapper
{    
    public ref class pict_set_root_model_wrapper sealed : public cli_wrapper::managed_void_method<PICT_HANDLE, PICT_HANDLE>
    {
    public:
        pict_set_root_model_wrapper();
    };    
}
