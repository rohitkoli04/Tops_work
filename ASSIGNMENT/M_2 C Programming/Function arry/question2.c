//  WAP of Addition, Subtraction, Multiplication and Division using Switch
// case.(Must Be Menu Driven)

#include <stdio.h>

float addition(float a, float b) {
    return a + b;
}


float subtraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

n
float division(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int main() {
    int choice;
    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result: %.2f\n", addition(num1, num2));
            break;
        case 2:
            printf("Result: %.2f\n", subtraction(num1, num2));
            break;
        case 3:
            printf("Result: %.2f\n", multiplication(num1, num2));
            break;
        case 4:
            printf("Result: %.2f\n", division(num1, num2));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
