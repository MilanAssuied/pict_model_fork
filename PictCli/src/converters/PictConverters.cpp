#include "PictConverters.h"

using System::Runtime::InteropServices::Marshal;


namespace converters
{
    std::unordered_map<void*, std::function<void(void*)>> pict_converters::arrays_;
    
    PICT_HANDLE pict_converters::int_ptr_to_pict_handle(System::IntPtr^ value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        return value->ToPointer();
    }

    pict_converters::~pict_converters()
    {
        for (const auto& pair : arrays_)
        {
            pair.second(pair.first);
        }
    }
}
