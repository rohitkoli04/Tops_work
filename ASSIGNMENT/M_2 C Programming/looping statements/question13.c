// calculate the Factorial of a Given Number using while loop

#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } 
    else {
        int i = 1;
        // Calculating factorial using a while loop
        while (i <= num) {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}
