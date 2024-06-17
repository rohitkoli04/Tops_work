#include <stdio.h>

int main() {
    char character;


    printf("Enter a character: ");
    scanf("%c", &character);

 
    int ascii = (int)character;

    printf("The ASCII value of '%c' is: %d\n", character, ascii);

    return 0;
}
