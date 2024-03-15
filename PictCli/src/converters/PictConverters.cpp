#include "PictConverters.h"

using System::Runtime::InteropServices::Marshal;


namespace converters
{
    PICT_HANDLE pict_converters::int_ptr_to_pict_handle(System::IntPtr^ value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        return value->ToPointer();
    }
}
