#include "PictGenerate.h"
#include "PictValidation.h"

namespace pict_wrapper
{
    PICT_RET_CODE pict_generate::call(System::IntPtr^ task)
    {
        const PICT_RET_CODE ret = PictGenerate(task->ToPointer());
        pict_validation::check_ret_code(ret);
        return ret;
    }
}
