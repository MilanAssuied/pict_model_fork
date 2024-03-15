#include "PictAddParameter.h"

#include "PictConverters.h"

using namespace converters;

namespace pict_wrapper
{
    PICT_HANDLE pict_add_parameter::call(
        IntPtr^ model,
        const size_t value_count,
        [Optional] Nullable<unsigned> order,
        [Optional] array<unsigned int>^ value_weights
    )
    {
        if (!order.HasValue) { order = PICT_DEFAULT_RANDOM_SEED; }
        return PictAddParameter(
            pict_converters::int_ptr_to_pict_handle(model),
            value_count,
            order.Value,
            pict_converters::cli_array_to_unsigned_int_array(value_weights)
        );
    }
}
