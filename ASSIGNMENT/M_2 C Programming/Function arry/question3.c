//  WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h>

// Function to reverse a string recursively
void reverseString(char str[], int start, int end) {
    // Base case: if start index is greater than or equal to end index
    if (start >= end)
        return;

    // Swap characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recur for substring excluding start and end characters
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    int length = strlen(str);

    // Call the function to reverse the string
    reverseString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}
