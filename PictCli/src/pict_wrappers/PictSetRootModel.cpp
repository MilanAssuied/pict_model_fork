#include "PictSetRootModel.h"

#include "PictConverters.h"


namespace pict_wrapper
{
    void pict_set_root_model_wrapper::call(System::IntPtr^ task, System::IntPtr^ model)
    {
        PictSetRootModel(
            converters::pict_converters::int_ptr_to_pict_handle(task),
            converters::pict_converters::int_ptr_to_pict_handle(model)
        );
    }
}
