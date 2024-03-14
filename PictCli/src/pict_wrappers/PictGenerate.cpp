#include "PictGenerate.h"

#include "PictConverters.h"
#include "PictValidation.h"

namespace pict_wrapper
{
    PICT_RET_CODE pict_generate::call(System::IntPtr^ task)
    {
        const PICT_RET_CODE ret = PictGenerate(converters::pict_converters::int_ptr_to_pict_handle(task));
        pict_validation::check_ret_code(ret);
        return ret;
    }
}
