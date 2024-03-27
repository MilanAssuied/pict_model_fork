using pict_wrapper;
using Sandbox.Interfaces;
using Sandbox.Tools;

namespace Sandbox.Api;

public class PictApi : IPictApi
{
    public IntPtr CreateTask()
    {
        unsafe
        {
            return new IntPtr(pict_create_task_wrapper.call());
        }
    }

    public IntPtr AddParameter(IntPtr model, UIntPtr valueCount, uint[]? valueWeights)
    {
        return AddParameter(model, valueCount, null, valueWeights);
    }

    public IntPtr AddParameter(IntPtr model, UIntPtr valueCount, uint? order = null, uint[]? valueWeights = default)
    {
        unsafe
        {
            return new IntPtr(pict_add_parameter.call(model, ArchitectureTools.UIntPtrToUint(valueCount), order, valueWeights));
        }
    }

    public IntPtr CreateModel(uint? seed = null)
    {
        unsafe
        {
            return new IntPtr(pict_create_model_wrapper.call(seed));
        }
    }

    public void SetModel(IntPtr task, IntPtr model)
    {
        pict_set_root_model_wrapper.call(task, model);
    }

    public void DisplayResults(IntPtr task)
    {
        pict_display_results.call(task);
    }

    public uint Generate(IntPtr task)
    {
        return pict_generate.call(task);
    }
}
