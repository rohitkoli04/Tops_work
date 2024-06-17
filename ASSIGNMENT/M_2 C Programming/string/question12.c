// .Write a program in C to find the number of times a given word 'is' appears in
// the given string
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char sentence[MAX_LENGTH];
    char word[] = "is";
    int count = 0;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Find occurrences of the word 'is' in the sentence
    char *ptr = strstr(sentence, word);
    while (ptr != NULL) {
        count++;
        ptr = strstr(ptr + 1, word);
    }

    // Display the result
    printf("The word 'is' appears %d times in the sentence.\n", count);

    return 0;
}

