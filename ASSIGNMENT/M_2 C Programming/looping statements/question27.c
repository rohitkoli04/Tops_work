// C Program to Reverse a Number Using FOR Loop
// Series Program:

#include <stdio.h>

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num, reversed;
    
    // Accepting a number 
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reversing the number 
    reversed = reverseNumber(num);
    
    printf("The reverse of %d is %d\n", num, reversed);

    // Printing a series of numbers using a for loop
    printf("Series of numbers from 1 to %d:\n", num);
    for (int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
