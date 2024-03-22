#include "PictCreateModelWrapper.h"

#include "PictValidation.h"


namespace pict_wrapper
{
    PICT_HANDLE pict_create_model_wrapper::call(Nullable<unsigned> seed)
    {
        seed = validation::pict_validation::impose_default_value_to_optional_parameter(seed, static_cast<unsigned>(PICT_DEFAULT_RANDOM_SEED));
        const auto model = PictCreateModel(seed.Value);
        validation::pict_validation::check_null(model);
        return model;
    }
}
