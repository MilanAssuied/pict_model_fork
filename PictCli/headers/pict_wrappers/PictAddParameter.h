#pragma once

#include "core_api.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace pict_wrapper
{
    public ref class pict_add_parameter sealed
    {
    public:
        static PICT_HANDLE call(
            IntPtr^ model,
            size_t value_count,
            [Optional] Nullable<unsigned> order,
            [Optional] array<unsigned int>^ value_weights
        );
    };
}
