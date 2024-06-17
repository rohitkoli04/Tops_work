// Accept 5 names from user at run time.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char names[5][50]; // Array to store 5 names, each with a maximum length of 49 characters
    int i;

    printf("Enter 5 names:\n");

    // Input names from the user
    for (i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Displaying the names entered by the user
    printf("\nNames entered by the user:\n");
    for (i = 0; i < 5; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    return 0;
}
