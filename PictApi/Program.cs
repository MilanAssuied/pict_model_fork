using Sandbox.Api;

namespace Sandbox
{
    static class Program
    {
        static void Main()
        {
            var pictApi = new PictApi();
            
            var task = pictApi.CreateTask();
            CheckNull(task);
            
            var model = pictApi.CreateModel();
            CheckNull(model);
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