// Write a program in C to find the length of a string without using library
// functions.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str); // Reading string with spaces

    // Calculate length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Display length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}
