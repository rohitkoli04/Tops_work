// Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>

#define MAX_LENGTH 1000

int main() {
    char str[MAX_LENGTH];
    int max_chars = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Count characters in the string
    for (int i = 0; str[i] != '\0'; i++) {
        max_chars++;
    }

    // Display the maximum number of characters
    printf("Maximum number of characters in the string: %d\n", max_chars);

    return 0;
}
