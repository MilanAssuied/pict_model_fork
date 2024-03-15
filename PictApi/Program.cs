using Sandbox.Api;

namespace Sandbox
{
    static class Program
    {
        static void Main()
        {
            var pictApi = new PictApi();
            
            /* Create task and model */
            var task = pictApi.CreateTask();
            CheckNull(task, "task");
            
            var model = pictApi.CreateModel();
            CheckNull(model, "model");
            
            pictApi.SetModel(task, model);
            
            /* Set model parameters */
            uint[] weights = {1, 2, 1, 1};
            var p1 = pictApi.AddParameter( model, 4, weights );
            CheckNull(p1, "p1");
            
            var p2 = pictApi.AddParameter( model, 3, 5 );
            CheckNull(p2, "p2");

            var p3 = pictApi.AddParameter( model, 5);
            CheckNull(p3, "p3");

            var p4 = pictApi.AddParameter( model, 2 );
            CheckNull(p4, "p4");

            var p5 = pictApi.AddParameter( model, 4 );
            CheckNull(p5, "p5");
            
            var returnCode = pictApi.Generate(task);
            Console.WriteLine($"Return code has value: {returnCode}");
        }
        
        static void CheckNull(IntPtr ptr, string name)
        {
            if (ptr == IntPtr.Zero)
            {
                throw new Exception($"{name} is Null pointer: {ptr}");
            }
            
            Console.WriteLine($"{name} Pointer has value: {ptr}");
        }
    }
}