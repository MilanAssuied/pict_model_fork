#pragma once

#include "core_api.h"
#include "ManagedMethod.h"


namespace cli_wrapper
{    
    public ref class managed_method_expansion_forcer : public managed_method<PICT_HANDLE>
    {
    public:
        managed_method_expansion_forcer(PICT_HANDLE (*unmanaged_method)()) : managed_method(unmanaged_method) {}
        managed_method_expansion_forcer(PICT_HANDLE (*unmanaged_method)(unsigned)) : managed_method(unmanaged_method) {}

    private:
        void force_expansion() { call(); }
        void force_expansion(const unsigned value) { call(value); }
    };    
}
