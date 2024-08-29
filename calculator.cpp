C++
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char operator_choice;
    double num1, num2, result;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operator_choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

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
            if (num2   
 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator." << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return   
 0;
}
