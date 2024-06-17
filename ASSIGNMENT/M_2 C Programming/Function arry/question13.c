// WAP to accept 5 numbers from user and check entered number is even or odd
// using of array


#include <stdio.h>

#define NUMBERS_COUNT 5

int main() {
    int numbers[NUMBERS_COUNT];

    // Input numbers
    printf("Enter %d numbers:\n", NUMBERS_COUNT);
    for (int i = 0; i < NUMBERS_COUNT; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Check even or odd and display result
    printf("\nResult:\n");
    for (int i = 0; i < NUMBERS_COUNT; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is even.\n", numbers[i]);
        } else {
            printf("%d is odd.\n", numbers[i]);
        }
    }

    return 0;
}
