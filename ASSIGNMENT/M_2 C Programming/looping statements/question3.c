// WAP to take 10 no. Input from user find out below values
// a. How many Even numbers are there
// b. How many odd numbers are there
// c. Sum of even numbers
// d. Sum of odd number


#include <stdio.h>

int main() {
    int numbers[10];
    int i, evenCount = 0, oddCount = 0, sumEven = 0, sumOdd = 0;

    printf("Enter 10 numbers:\n");

    // Accepting input from the user
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Check if the number is even or odd
        if (numbers[i] % 2 == 0) {
            evenCount++;
            sumEven += numbers[i];
        } else {
            oddCount++;
            sumOdd += numbers[i];
        }
    }

    // Displaying the results
    printf("\nResults:\n");
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}
