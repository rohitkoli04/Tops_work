// Write  program in C to read any Month Number in integer and display the
// number of days for this month.

#include <stdio.h>

int main() {
    int monthNumber;

    // Prompt the user to enter the month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    // Determine the number of days based on the month number
    switch(monthNumber) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of days: 31\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of days: 30\n");
            break;
        case 2:
            printf("Number of days: 28 or 29\n");
            break;
        default:
            printf("Invalid month number\n");
    }

    return 0;
}
