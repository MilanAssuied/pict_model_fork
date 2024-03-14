#include "PictCreateTaskWrapper.h"


namespace pict_wrapper
{
    pict_create_task_wrapper::pict_create_task_wrapper() : managed_method(PictCreateTask)
    {
    }

    PICT_HANDLE pict_create_task_wrapper::call_api()
    {
        return call();
    }
}
