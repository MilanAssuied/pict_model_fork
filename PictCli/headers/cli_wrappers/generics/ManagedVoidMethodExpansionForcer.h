#pragma once

#include "core_api.h"
#include "ManagedVoidMethod.h"


namespace cli_wrapper
{    
    public ref class managed_void_method_expansion_forcer : public managed_void_method<PICT_HANDLE, PICT_HANDLE>
    {
    public:
        managed_void_method_expansion_forcer(void (*unmanaged_method)(PICT_HANDLE, PICT_HANDLE)) : managed_void_method(unmanaged_method) {}

    private:
        void force_expansion(System::IntPtr^ value1, System::IntPtr^ value2) { call(value1, value2); }
    };    
}
