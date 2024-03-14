#include "PictAddParameter.h"
#include "PictConverters.h"

using namespace converters;

namespace pict_wrapper
{
    PICT_HANDLE pict_add_parameter::call(System::IntPtr^ model,
        const size_t value_count,
        const unsigned int order,
        array<unsigned int>^ value_weights
    )
    {
        return PictAddParameter(pict_converters::int_ptr_to_pict_handle(model),
            value_count,
            order,
            pict_converters::cli_array_to_unsigned_int_array(value_weights)
        );
    }
}
