// Write a program you have to make a summation of first and last Digit.
#include <stdio.h>

int main() {
    int num, first_digit, last_digit, sum;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Extracting first digit
    first_digit = num;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    // Extracting last digit
    last_digit = num % 10;

    // Calculating the sum
    sum = first_digit + last_digit;

    // Displaying the result
    printf("Sum of first and last digits of %d is: %d\n", num, sum);

    return 0;
}
