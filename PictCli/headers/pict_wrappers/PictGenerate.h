﻿#pragma once

#include "core_api.h"


namespace pict_wrapper
{
    public ref class pict_generate sealed
    {
    public:
        static PICT_RET_CODE call(System::IntPtr^ task);
        static PICT_RET_CODE generate(PICT_HANDLE task_handle);
    };
}
