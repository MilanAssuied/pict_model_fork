#pragma once

#include <vector>
#include "core_api.h"


namespace converters
{
    class pict_converters
    {
    public:
        static PICT_HANDLE int_ptr_to_pict_handle(System::IntPtr^);

        template<typename T>
        static T* cli_array_to_unmanaged_array(array<T>^);

        ~pict_converters()
        {
            for (const auto& array : arrays)
            {
                delete[] array;
            }
        }

    private:
        static std::vector<void*> arrays;
    };

    template<typename T>
    T* pict_converters::cli_array_to_unmanaged_array(array<T>^ value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        T* native_array = new T[value->Length];
        const pin_ptr<T> pinned_values = &value[0];
        memcpy(native_array, pinned_values, value->Length * sizeof(T));

        arrays.push_back(native_array);
        return native_array;
    }
}