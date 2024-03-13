using cli_wrapper;
using Sandbox.Interfaces;

namespace Sandbox.Api;

public class PictApi : IPictApi
{
    public IntPtr CreateTask()
    {
        unsafe
        {
            var wrapper = new pict_create_task_wrapper();
            return new IntPtr(wrapper.call());
        }
    }
}
