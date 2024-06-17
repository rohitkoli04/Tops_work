// Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>

void findLargestAndSmallestWords(char *str) {
    char smallestWord[100], largestWord[100];
    int smallestLength = 100, largestLength = 0;

    char *start = str;
    char *end = str;

    while (*end != '\0') {
        while (*end != ' ' && *end != '\0') {
            end++;
        }

        int wordLength = end - start;

        if (wordLength < smallestLength) {
            strncpy(smallestWord, start, wordLength);
            smallestWord[wordLength] = '\0';
            smallestLength = wordLength;
        }
        if (wordLength > largestLength) {
            strncpy(largestWord, start, wordLength);
            largestWord[wordLength] = '\0';
            largestLength = wordLength;
        }

        if (*end != '\0') {
            end++;
            start = end;
        }
    }

    printf("Smallest word: %s\n", smallestWord);
    printf("Largest word: %s\n", largestWord);
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    findLargestAndSmallestWords(str);

    return 0;
}

