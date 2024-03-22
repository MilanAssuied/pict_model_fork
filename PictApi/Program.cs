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
            var model = pictApi.CreateModel();

            pictApi.SetModel(task, model);

            /* Set model parameters */
            uint[] weights = { 1, 2, 1, 1 };
            var p1 = pictApi.AddParameter(model, 2);
            var p2 = pictApi.AddParameter(model, 2);
            var p3 = pictApi.AddParameter(model, 3);

            pictApi.DisplayResults(task);
        }
    }
}
