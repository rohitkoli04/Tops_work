// WAP to check whether a number is negative, positive or zero

#include <stdio.h>

int main() {
    int number;

    // Accept the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("The number is negative.\n");
    }
    // Check if the number is positive
    else if (number > 0) {
        printf("The number is positive.\n");
    }
    // If the number is not negative or positive, it must be zero
    else {
        printf("The number is zero.\n");
    }

    return 0;
}
