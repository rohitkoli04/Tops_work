// . WAP to perform Palindrome number using for loop and funcntio

#include <stdio.h>
#include <stdbool.h>

// Function prototype
bool isPalindrome(int num);

int main() {
    int number;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is a palindrome
    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int originalNum = num;
    int reverseNum = 0;

    // Reverse the number
    for (; num != 0; num /= 10) {
        int digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reverseNum) {
        return true;
    } else {
        return false;
    }
}
