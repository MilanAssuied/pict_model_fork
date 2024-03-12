#include "PictCreateTaskWrapper.h"

namespace cli_wrapper
{
    void pict_create_task_wrapper::on_delete()
    {
        if (m_instance_)
        {
            free(m_instance_);
        }
    }

    pict_create_task_wrapper::~pict_create_task_wrapper()
    {
        on_delete();
    }

    void pict_create_task_wrapper::!pict_create_task_wrapper()
    {
        on_delete();
    }

    PICT_HANDLE pict_create_task_wrapper::pict_create_task()
    {
        m_instance_ = PictCreateTask();
        return m_instance_;
    }
}
