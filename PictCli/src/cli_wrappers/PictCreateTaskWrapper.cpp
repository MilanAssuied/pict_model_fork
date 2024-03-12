#include "PictCreateTaskWrapper.h"

namespace cli_wrapper
{
    PICT_HANDLE pict_create_task_wrapper::pict_create_task()
    {
        return PictCreateTask();
    }
}
