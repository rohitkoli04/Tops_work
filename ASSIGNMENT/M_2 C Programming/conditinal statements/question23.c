// Accept the input month number and print number of days in that
// month.

#include <stdio.h>

int main() {
    int month_number, days;

    // Input month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    // Check number of days based on the month number
    switch(month_number) {
        case 1:
            days = 31;
            break;
        case 2:
            days = 28; // Assuming non-leap year for simplicity
            break;
        case 3:
            days = 31;
            break;
        case 4:
            days = 30;
            break;
        case 5:
            days = 31;
            break;
        case 6:
            days = 30;
            break;
        case 7:
            days = 31;
            break;
        case 8:
            days = 31;
            break;
        case 9:
            days = 30;
            break;
        case 10:
            days = 31;
            break;
        case 11:
            days = 30;
            break;
        case 12:
            days = 31;
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            return 1; // Exiting program if input is invalid
    }

    // Print the number of days in the month
    printf("Number of days in month %d: %d\n", month_number, days);

    return 0;
}
