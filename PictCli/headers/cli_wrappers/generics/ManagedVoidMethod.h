#pragma once

#include "PictConverters.h"


namespace cli_wrapper
{
    template<typename T1, typename T2>
    public ref class managed_void_method
    {
    protected:
        void (*m_method_)(T1, T2);

    public:
        managed_void_method(void (*unmanaged_method)(T1, T2)): m_method_(unmanaged_method)
        {
        }

        void call(System::IntPtr^ value1, System::IntPtr^ value2)
        {
            if (m_method_ && value1 && value2)
            {
                m_method_(
                    reinterpret_cast<T1>(converters::pict_converters::int_ptr_to_pict_handle(value1)),
                    reinterpret_cast<T1>(converters::pict_converters::int_ptr_to_pict_handle(value2))
                );
            }
        }
    };
}
