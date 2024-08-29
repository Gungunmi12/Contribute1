using System;

namespace Calculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter an expression:");
            string expression = Console.ReadLine();

            try
            {
                double result = EvaluateExpression(expression);
                Console.WriteLine("Result: " + result);
            }
            catch (Exception ex)
            {
                Console.WriteLine("Error: " + ex.Message);
            }
        }

        static double EvaluateExpression(string expression)
        {
            // Use a suitable expression evaluator library or parser
            // For example, you could use NCalc or a custom parser
            // Here's a simplified example using NCalc:

            using (NCalc.Expression e = new NCalc.Expression(expression))
            {
                return (double)e.Evaluate();
            }
        }
    }
}
