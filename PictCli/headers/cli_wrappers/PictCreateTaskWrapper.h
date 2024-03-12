#pragma once

#include "core_api.h"


namespace cli_wrapper
{    
    public ref class pict_create_task_wrapper sealed
    {
    private:
        PICT_HANDLE m_instance_ = nullptr;

        void on_delete();
        
    public:
        virtual ~pict_create_task_wrapper();
        !pict_create_task_wrapper();
        
        PICT_HANDLE pict_create_task();
    };    
}
