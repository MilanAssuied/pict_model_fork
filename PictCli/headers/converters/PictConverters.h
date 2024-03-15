#pragma once

#include "core_api.h"


namespace converters
{
    class pict_converters
    {
    public:
        static PICT_HANDLE int_ptr_to_pict_handle(System::IntPtr^ value);

        template<typename T>
        static T* cli_array_to_unmanaged_array(array<T>^ value);
    };

    template<typename T>
    T* pict_converters::cli_array_to_unmanaged_array(array<T>^ value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        const pin_ptr<T> pinned_values = &value[0];
        T* native_pointer_to_values = pinned_values;

        return native_pointer_to_values;
    }
}
