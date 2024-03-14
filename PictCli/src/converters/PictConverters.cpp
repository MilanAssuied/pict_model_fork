#include "PictConverters.h"

using System::Runtime::InteropServices::Marshal;


namespace converters {

    PICT_HANDLE pict_converters::int_ptr_to_pict_handle(System::IntPtr^ value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }
        
        return value->ToPointer();
    }

    unsigned int* pict_converters::cli_array_to_unsigned_int_array(array<unsigned int>^ value)
    {
        if(value == nullptr)
        {
            return nullptr;
        }
        
        const pin_ptr<unsigned int> pinned_values = &value[0];
        return pinned_values;
    }
}
