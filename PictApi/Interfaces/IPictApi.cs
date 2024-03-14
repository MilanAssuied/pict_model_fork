namespace Sandbox.Interfaces;

public interface IPictApi
{
    IntPtr AddParameter(IntPtr model, UIntPtr valueCount, uint[]? valueWeights = default);
    IntPtr AddParameter(IntPtr model, UIntPtr valueCount, uint order, uint[]? valueWeights = default);
    
    IntPtr CreateModel();
    IntPtr CreateModel(uint seed);
    IntPtr CreateTask();

    uint Generate(IntPtr task);
    void SetModel(IntPtr task, IntPtr model);
}
