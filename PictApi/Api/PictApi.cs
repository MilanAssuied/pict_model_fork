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
            return new IntPtr(wrapper.call_api());
        }
    }

    public IntPtr AddParameter(IntPtr model, UIntPtr valueCount, uint[]? valueWeights = default)
    {
        return AddParameter(model, valueCount, pict_constants.PairWiseGeneration, valueWeights);
    }

    public IntPtr AddParameter(IntPtr model, UIntPtr valueCount, uint order, uint[]? valueWeights = default)
    {
        unsafe
        {
            return new IntPtr(pict_add_parameter.call(model, valueCount, order, valueWeights));
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

    public void SetModel(IntPtr task, IntPtr model)
    {
        var wrapper = new pict_set_root_model_wrapper();
        wrapper.call(task, model);
    }

    public uint Generate(IntPtr task)
    {
        return pict_generate.call(task);
    }
}
