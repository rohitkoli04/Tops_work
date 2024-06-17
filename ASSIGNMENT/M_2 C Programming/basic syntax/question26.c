#include <stdio.h>

int main() {
    int days, months, remainingDays;

    // Input number of days from user
    printf("Enter number of days: ");
    scanf("%d", &days);

    // Convert days into months
    months = days / 30;  // Approximating month to 30 days
    remainingDays = days % 30;

    // Display the result
    printf("Equivalent months: %d months and %d days\n", months, remainingDays);

    return 0;
}
