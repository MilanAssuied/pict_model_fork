#include "PictCreateTaskWrapper.h"

#include "PictValidation.h"


namespace pict_wrapper
{
    PICT_HANDLE pict_create_task_wrapper::call()
    {
        const auto task = PictCreateTask();
        validation::pict_validation::check_null(task);
        return task;
    }
}
