using CLI;

namespace Sandbox
{
    class Program
    {
        static void Main(string[] args)
        {
            EntityWrapper e = new EntityWrapper("The Wallman", 20, 35);
            e.Move(5, -10);
            Console.WriteLine(e.XPosition + " " + e.YPosition);
            Console.Read();
        }
    }
}