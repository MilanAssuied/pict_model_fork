#pragma once
#include "../../../PictCore/api/pictapi.h"

namespace pict_wrapper
{
    public ref class pict_display_results sealed
    {
    public:
        static void call(System::IntPtr^ task);

    private:
        static PICT_RESULT_ROW allocate_result_buffer(PICT_HANDLE);
        static size_t get_total_parameters_count(PICT_HANDLE);
        static void reset_result_fetching(PICT_HANDLE);
        static size_t get_next_result_row(PICT_HANDLE, OUT PICT_RESULT_ROW);
        static void free_result_buffer(PICT_RESULT_ROW);
    };
}
