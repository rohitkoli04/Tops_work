// WAP to make simple calculator (operation include Addition, Subtraction,
// Multiplication, Division, modulo) using conditional statement



#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input operation from user
    printf("Enter an operator (+, -, *, /, %): ");
    scanf("%c", &operator);

    // Input two numbers from user
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation based on the operator entered
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Error! Modulo by zero is not allowed.\n");
            } else {
                result = (int)num1 % (int)num2;
                printf("Result: %.2lf\n", result);
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
