
//  reverses a number using a for loop and computes the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) 
(
#include <stdio.h>

// Function to reverse
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

    // Computing the series (1*1) + (2*2) + (3*3) + ... + (n*n)
    printf("Series of numbers from 1 to %d:\n", num);
    for (int i = 1; i <= num; i++) {
        int term = i * i;
        printf("(%d*%d) ", i, i);
        sum += term;
    }
    printf("\nSum of the series: %d\n", sum);

    return 0;
}
