// Write a program in C to separate individual characters from a string.

#include <stdio.h>

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str); // Reading string with spaces

    // Separate individual characters from the string
    printf("Individual characters from the string:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}
