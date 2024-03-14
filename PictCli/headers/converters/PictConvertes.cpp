#include "PictConverters.h"


namespace converters {

    PICT_HANDLE pict_converters::int_ptr_to_pict_handle(System::IntPtr^ value)
    {
        return value->ToPointer();
    }

}