//  Find the Character Is Vowel or Not

#include <stdio.h>

int isVowel(char c) {
    // Convert character to lowercase for easier comparison
    c = tolower(c);
    
    // Check if the character is a vowel
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1; // True, it's a vowel
    else
        return 0; // False, it's not a vowel
}

int main() {
    char character;
    
    printf("Enter a character: ");
    scanf("%c", &character);
    
    if(isVowel(character))
        printf("%c is a vowel.\n", character);
    else
        printf("%c is not a vowel.\n", character);
    
    return 0;
}
