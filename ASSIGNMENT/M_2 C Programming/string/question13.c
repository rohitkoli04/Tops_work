// Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int main() {
    char str[MAX_LENGTH], result[MAX_LENGTH];
    int i, j = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; // Append null terminator to the result string

    // Display the result
    printf("Result string: %s\n", result);

    return 0;
}
