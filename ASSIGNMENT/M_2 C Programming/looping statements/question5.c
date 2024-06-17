//  WAP to print factorial of given number

#include <stdio.h>

int main() {
    int number, i;
    unsigned long long factorial = 1; // Use unsigned long long to handle larger factorials
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check if the number is negative
    if (number < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } 
    else {
        // Calculate factorial
        for (i = 1; i <= number; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu", number, factorial);
    }
    
    return 0;
}