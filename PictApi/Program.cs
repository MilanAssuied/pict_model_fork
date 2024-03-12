using cli_wrapper;

namespace Sandbox
{
    static class Program
    {
        static void Main(string[] args)
        {
            var e = new entity_wrapper("The Wall-man", 20, 35);
            e.move(5, -10);
            Console.WriteLine(e.XPosition + " " + e.YPosition);
        }
    }
}