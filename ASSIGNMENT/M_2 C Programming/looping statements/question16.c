//  Write a C Program to Print the Multiplication Table of N
#include <stdio.h>

int main() {
    int N;

    // Accepting input from the user
    printf("Enter the number to print its multiplication table: ");
    scanf("%d", &N);

    // Printing the multiplication table
    printf("Multiplication Table of %d:\n", N);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
