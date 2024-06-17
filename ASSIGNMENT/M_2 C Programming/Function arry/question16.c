// Accept 5 numbers from user and perform sum of array


#include <stdio.h>

#define NUMBERS_COUNT 5

int main() {
    int numbers[NUMBERS_COUNT];
    int sum = 0;

    // Input numbers
    printf("Enter %d numbers:\n", NUMBERS_COUNT);
    for (int i = 0; i < NUMBERS_COUNT; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate sum of numbers
    for (int i = 0; i < NUMBERS_COUNT; i++) {
        sum += numbers[i];
    }

    // Display sum
    printf("\nSum of numbers: %d\n", sum);

    return 0;
}
