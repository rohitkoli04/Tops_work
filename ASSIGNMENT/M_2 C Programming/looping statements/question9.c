// Write a program make a summation of given number
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Summation of  1 to %d is: %d\n", n, sum);

    return 0;
}
