﻿#include "PictValidation.h"

#include <cassert>
#include <iostream>

void validation::pict_validation::check_ret_code(const PICT_RET_CODE ret_code)
{
    switch (ret_code)
    {
        case PICT_SUCCESS:
            break;
        case PICT_OUT_OF_MEMORY:
            std::wcout << L"Error: Out of memory" << std::endl;
        case PICT_GENERATION_ERROR:
            std::wcout << L"Error: Internal engine error" << std::endl;
        default:
            assert(! L"Unexpected error code");
    }
}

void validation::pict_validation::check_null(void* ptr)
{
    if(!ptr)
    {
        std::wcout << L"Error: Out of memory" << std::endl;
    }
}
