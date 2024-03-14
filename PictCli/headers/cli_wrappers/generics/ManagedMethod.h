#pragma once

#include "core_api.h"


namespace cli_wrapper {
    
    template<typename TResult>
    public ref class managed_method
    {
    protected:
        TResult (*m_method_) ();
        TResult (*m_method_unsigned_) (unsigned);
    public:

        managed_method(TResult (*unmanaged_method)()): m_method_(unmanaged_method) {}
        managed_method(TResult (*unmanaged_method)(unsigned)): m_method_unsigned_(unmanaged_method) {}
        
        TResult call()
        {
            if (m_method_)
                return m_method_();

            return nullptr;
        }

        TResult call(const unsigned value)
        {
            if (m_method_unsigned_)
                return m_method_unsigned_(value);

            return nullptr;
        }
    };

    template managed_method<PICT_HANDLE>; //Forced expansion of concrete type  
}