using cli_wrapper;
using Sandbox.Api;

namespace Sandbox
{
    static class Program
    {
        static void Main(string[] args)
        {
            var pictApi = new PictApi();
            
            var task = pictApi.CreateTask();
            CheckNull(task);
        }
        
        static void CheckNull(IntPtr ptr)
        {
            if (ptr == IntPtr.Zero)
            {
                throw new Exception($"Null pointer: {ptr}");
            }
            
            Console.WriteLine($"Pointer has value: {ptr}");
        }
    }
}