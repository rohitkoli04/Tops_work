#include <stdio.h>

int main() {
    int num, power1, power2, power3;

    // Input an integer from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate powers
    power1 = num;
    power2 = num * num;
    power3 = num * num * num;

    // Display powers
    printf("First power: %d\n", power1);
    printf("Second power: %d\n", power2);
    printf("Third power: %d\n", power3);

    return 0;
}
