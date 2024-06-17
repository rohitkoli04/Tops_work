// Write a program in C to extract a substring from a given string

#include <stdio.h>

void extractSubstring(char source[], int start, int length, char destination[]);

int main() {
    char source[100], destination[100];
    int start, length;

    // Input the string
    printf("Enter a string: ");
    scanf("%[^\n]", source);


    printf("Enter start index: ");
    scanf("%d", &start);
    printf("Enter length of substring: ");
    scanf("%d", &length);


    extractSubstring(source, start, length, destination);

  
    printf("Substring: %s\n", destination);

    return 0;
}

// Function to extract a substring from a given string
void extractSubstring(char source[], int start, int length, char destination[]) {
    int i, j;

    // Copy characters from source string to destination string
    for (i = start, j = 0; i < start + length && source[i] != '\0'; i++, j++) {
        destination[j] = source[i];
    }
    destination[j] = '\0'; // Append null terminator to the destination string
}
