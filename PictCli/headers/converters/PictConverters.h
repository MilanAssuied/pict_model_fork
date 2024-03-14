#pragma once

#include "core_api.h"


namespace converters {

    class pict_converters
    {
    public:
        static PICT_HANDLE int_ptr_to_pict_handle(System::IntPtr^ value);
    };
    
}

