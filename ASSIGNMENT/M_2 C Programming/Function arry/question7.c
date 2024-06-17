//  WAP Find out length of string without using inbuilt function

#include <stdio.h>

int stringLength(char *str);

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str); // Reading string with spaces

    int length = stringLength(str);
    printf("Length of the string: %d\n", length);

    return 0;
}

int stringLength(char *str) {
    int length = 0;
    // Iterate through each character until null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
