namespace Sandbox.Interfaces;

public interface IPictApi
{
    IntPtr CreateTask();
    IntPtr CreateModel();
    IntPtr CreateModel(uint seed);
    
    void SetModel(IntPtr task, IntPtr model);

    uint Generate(IntPtr task);
}
