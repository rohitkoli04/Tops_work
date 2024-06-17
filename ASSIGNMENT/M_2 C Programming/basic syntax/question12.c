#include <stdio.h>

int main() {
    int ascii;

    printf("Enter the ASCII value (integer): ");
    scanf("%d", &ascii);

 
    char characterValue = (char)ascii;

 
    printf("The character corresponding to ASCII value %d is: %c\n", ascii, characterValue);

    return 0;
}
