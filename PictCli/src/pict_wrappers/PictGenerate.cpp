#include "PictGenerate.h"

#include "PictConverters.h"
#include "PictValidation.h"


namespace pict_wrapper
{
    PICT_RET_CODE pict_generate::call(System::IntPtr^ task)
    {
        return generate(converters::pict_converters::int_ptr_to_pict_handle(task));
    }

    PICT_RET_CODE pict_generate::generate(PICT_HANDLE task_handle)
    {
        const PICT_RET_CODE ret = PictGenerate(task_handle);
        validation::pict_validation::check_ret_code(ret);
        return ret;
    }
}
