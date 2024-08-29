#include <stdio.h>

int main() {
    char operator_choice;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator_choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

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
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}
