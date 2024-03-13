using pict_wrapper;
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

    public IntPtr CreateModel()
    {
        return CreateModel(pict_constants.DefaultSeed);
    }

    public IntPtr CreateModel(uint seed)
    {
        unsafe
        {
            
            var wrapper = new pict_create_model_wrapper();
            return new IntPtr(wrapper.call(seed));
        }
    }
}
