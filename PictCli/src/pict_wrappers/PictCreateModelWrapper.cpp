#include "PictCreateModelWrapper.h"


namespace pict_wrapper
{
    PICT_HANDLE pict_create_model_wrapper::call(Nullable<unsigned> seed)
    {
        if (!seed.HasValue) { seed = PICT_DEFAULT_RANDOM_SEED; }
        return PictCreateModel(seed.Value);
    }
}
