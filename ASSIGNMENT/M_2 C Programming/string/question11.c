// Write a program in C to read a sentence and replace lowercase characters with
// uppercase and vice versa.

#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int main() {
    char sentence[MAX_LENGTH];

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Convert characters
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
    }

    
    printf("Modified sentence: %s\n", sentence);

    return 0;
}
