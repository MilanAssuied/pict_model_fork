#include "PictConstants.h"
#include "core_api.h"


namespace pict_wrapper
{
    unsigned int pict_constants::DefaultSeed::get()
    {
        return PICT_DEFAULT_RANDOM_SEED;
    }

    void pict_constants::DefaultSeed::set(unsigned int value) {}

    unsigned int pict_constants::PairWiseGeneration::get()
    {
        return PICT_PAIRWISE_GENERATION;
    }

    void pict_constants::PairWiseGeneration::set(unsigned int value) {}
}
