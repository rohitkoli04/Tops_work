#include <stdio.h>
#include <limits.h>

int main() {
    int num1, num2, sum;

    // Input two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Display sum
    printf("Sum: %d\n", sum);

    // Check size of sum
    if (sum < INT_MAX && sum > INT_MIN) {
        printf("Size of sum: %lu bytes\n", sizeof(sum));
    } else {
        printf("Sum exceeds the range of int.\n");
    }

    return 0;
}
