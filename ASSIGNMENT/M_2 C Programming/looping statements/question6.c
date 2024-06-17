// WAP to print Fibonacci series up to given numbers

#include <stdio.h>

int main() {
    int n, i, first = 0, second = 1, next;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");

    // Print first two terms
    printf("%d, %d, ", first, second);

    // Calculate and print next terms
    for (i = 2; i < n; ++i) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }

    return 0;
}
