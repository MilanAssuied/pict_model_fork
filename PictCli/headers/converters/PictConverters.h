#pragma once

#include <functional>
#include <unordered_map>
#include "core_api.h"


namespace converters
{
    class pict_converters
    {
    public:
        static PICT_HANDLE int_ptr_to_pict_handle(System::IntPtr^);

        ~pict_converters();
        
        template<typename T>
        static T* cli_array_to_unmanaged_array(array<T>^);

    private:
        static std::unordered_map<void*, std::function<void(void*)>> arrays_;
        
        template<typename T>
        static void delete_array(void* ptr);
    };

    template<typename T>
    T* pict_converters::cli_array_to_unmanaged_array(array<T>^ value)
    {
        T* native_array = nullptr;

        if (value == nullptr)
        {
            return nullptr;
        }

        try
        {
            native_array = new T[value->Length];
            const pin_ptr<T> pinned_values = &value[0];
            memcpy(native_array, pinned_values, value->Length * sizeof(T));
            arrays_[native_array] = delete_array<T>;
        }
        catch (const std::bad_alloc& e)
        {
            System::Console::WriteLine("Memory allocation failed: {0}", gcnew System::String(e.what()));
            return nullptr;
        }
        catch (...)
        {
            System::Console::WriteLine("An unknown error occurred. Deleting the allocated memory.");
            delete[] native_array;
            return nullptr;
        }
        
        return native_array;
    }

    template<typename T>
    void pict_converters::delete_array(void* ptr)
    {
        delete[] static_cast<T*>(ptr);
    }
}
