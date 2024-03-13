namespace Sandbox.Interfaces;

public interface IPictApi
{
    IntPtr CreateTask();
    IntPtr CreateModel();
    IntPtr CreateModel(uint seed);
}
