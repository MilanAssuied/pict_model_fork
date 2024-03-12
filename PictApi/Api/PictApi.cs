using cli_wrapper;
using Sandbox.Interfaces;

namespace Sandbox.Api;

public class PictApi : IPictApi
{
    public IntPtr CreateTask()
    {
        unsafe
        {
            return new IntPtr(pict_create_task_wrapper.pict_create_task());
        }
    }
}
