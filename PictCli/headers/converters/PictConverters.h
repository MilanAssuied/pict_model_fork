#pragma once

#include "core_api.h"


namespace converters {

    class pict_converters
    {
    public:
        static PICT_HANDLE int_ptr_to_pict_handle(System::IntPtr^ value);
        static unsigned int* cli_array_to_unsigned_int_array(array<unsigned int>^ value);
    };
    
}

