import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        double num1 = scanner.nextDouble();

        System.out.print("Enter the operator (+, -, *, /): ");
        char operator_choice = scanner.next().charAt(0);

        System.out.print("Enter the second number: ");
        double num2 = scanner.nextDouble();

        double result;

        switch (operator_choice) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 == 0) {
                    System.out.println("Error: Division by zero is not allowed.");
                    return;
                }
                result = num1 / num2;
                break;
            default:
                System.out.println("Invalid operator.");
                return;
        }

        System.out.println("Result: " + result);
    }
}
