// .Calculate sum of 10 numbers using of while loop

#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num[5];
    
    // Accepting 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }
    
    // Calculating and printing factorials
    printf("Factorials:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d! = %d\n", num[i], factorial(num[i]));
    }
    
    return 0;
}
