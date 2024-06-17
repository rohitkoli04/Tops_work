// Write a program in C to copy one string to another string.

#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i;

    // Input the source string
    printf("Enter the source string: ");
    scanf("%s", source);

    // Copy the source string to destination string
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0'; // Append null terminator to the destination string

    // Print the copied string
    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}
