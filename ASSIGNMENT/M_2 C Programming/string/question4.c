// Write a program in C to count the total number of words in a string.

#include <stdio.h>
#include <stdbool.h>

bool isWhiteSpace(char c);

int main() {
    char str[1000];
    int wordCount = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str); 

    
    bool inWord = false;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isWhiteSpace(str[i])) {
            if (!inWord) {
                inWord = true;
                wordCount++;
            }
        } else {
            inWord = false;
        }
    }

    // Display the total number of words
    printf("Total number of words in the string: %d\n", wordCount);

    return 0;
}

// Function to check if a character is white space
bool isWhiteSpace(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}
