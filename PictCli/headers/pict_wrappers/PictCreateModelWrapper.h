#pragma once

#include "core_api.h"

using namespace System;
using namespace System::Runtime::InteropServices;


namespace pict_wrapper
{    
    public ref class pict_create_model_wrapper sealed
    {
    public:
        static PICT_HANDLE call([Optional] Nullable<unsigned> seed);
    };    
}
