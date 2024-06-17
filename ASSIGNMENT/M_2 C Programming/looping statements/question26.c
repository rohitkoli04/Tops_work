// Accept 3 numbers from user using while loop and check each numbers
// palindrome

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
    int num, reversed, sum = 0;
    
    // Accepting a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reversing the number using a for loop
    reversed = reverseNumber(num);
    
    printf("The reverse of %d is %d\n", num, reversed);

    // Computing the series 1 + 2 + 3 + ... + n
    printf("Series of numbers from 1 to %d:\n", num);
    for (int i = 1; i <= num; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nSum of the series: %d\n", sum);

    return 0;
}
