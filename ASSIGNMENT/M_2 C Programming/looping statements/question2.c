//  WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>

int main() {
    int numbers[5];
    int i;

    printf("Enter 5 numbers:\n");

    // Accepting input from the user
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("The numbers you entered are:\n");

    // Displaying the entered numbers
    for (i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
