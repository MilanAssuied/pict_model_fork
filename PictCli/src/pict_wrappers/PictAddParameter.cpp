#include "PictAddParameter.h"

#include "PictConverters.h"
#include "PictValidation.h"

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
        const PICT_HANDLE model_handle = pict_converters::int_ptr_to_pict_handle(model);

        order = validation::pict_validation::impose_default_value_to_optional_parameter(order, static_cast<unsigned>(PICT_PAIRWISE_GENERATION));
        unsigned int* native_weights_array = pict_converters::cli_array_to_unmanaged_array(value_weights);

        const auto param_handle = PictAddParameter(
            model_handle,
            value_count,
            order.Value,
            native_weights_array
        );

        validation::pict_validation::check_null(param_handle);

        return param_handle;
    }
}
