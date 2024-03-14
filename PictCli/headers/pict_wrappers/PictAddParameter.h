#pragma once

#include "core_api.h"


namespace pict_wrapper
{
    public ref class pict_add_parameter sealed
    {
    public:
        static PICT_HANDLE call(System::IntPtr^ model,
            size_t value_count,
            unsigned int order,
            array<unsigned int>^ value_weights
            );    
    };
}
