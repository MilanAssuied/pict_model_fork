#include "PictCreateTaskWrapper.h"


namespace pict_wrapper
{
    PICT_HANDLE pict_create_task_wrapper::call()
    {
        return PictCreateTask();
    }
}
