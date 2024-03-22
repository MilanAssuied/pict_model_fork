#pragma once

#include "core_api.h"

namespace validation
{
    public class pict_validation
    {
    public:
        static void check_ret_code(PICT_RET_CODE);
        static void check_null(void*);
        
        template<typename T>
        static T impose_default_value_to_optional_parameter(System::Nullable<T>, T);
    };

    template<typename T>
    T pict_validation::impose_default_value_to_optional_parameter(System::Nullable<T> value, T default_value)
    {
        if (!value.HasValue)
        {
            return default_value;
        }
        return value.Value;
    }
}
