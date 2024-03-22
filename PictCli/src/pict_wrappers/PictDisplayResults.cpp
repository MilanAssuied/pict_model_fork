#include "PictDisplayResults.h"

#include "converters/PictConverters.h"
#include "pict_wrappers/PictGenerate.h"


namespace pict_wrapper
{
   void pict_display_results::call(System::IntPtr^ task)
   {
      const auto task_handle = converters::pict_converters::int_ptr_to_pict_handle(task);

      pict_generate::generate(task_handle);

      const auto result_row = allocate_result_buffer(task_handle);
      const auto param_count = get_total_parameters_count(task_handle);

      reset_result_fetching(task_handle);

      while( get_next_result_row( task_handle, result_row ))
      {
         for( size_t index = 0; index < param_count; ++index )
         {
            System::Console::Out->Write( static_cast<unsigned int>( result_row[ index ] ) + " " );
         }
         System::Console::Out->Write( "\n" );
      }

      free_result_buffer(result_row);
   }

   PICT_RESULT_ROW pict_display_results::allocate_result_buffer(const PICT_HANDLE task_handle)
   {
      return PictAllocateResultBuffer(task_handle);
   }

   size_t pict_display_results::get_total_parameters_count(const PICT_HANDLE task_handle)
   {
      return PictGetTotalParameterCount(task_handle);
   }

   void pict_display_results::reset_result_fetching(const PICT_HANDLE task_handle)
   {
      return PictResetResultFetching(task_handle);
   }

   size_t pict_display_results::get_next_result_row(const PICT_HANDLE task_handle, OUT const PICT_RESULT_ROW row)
   {
      return PictGetNextResultRow(task_handle, row);
   }

   void pict_display_results::free_result_buffer(const PICT_RESULT_ROW row)
   {
      PictFreeResultBuffer(row);
   }
}