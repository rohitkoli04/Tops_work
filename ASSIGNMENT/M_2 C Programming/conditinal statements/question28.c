#include <stdio.h>

int main() {
    int years, days;

    // Convert years to days
    printf("Enter number of years: ");
    scanf("%d", &years);
    days = years * 365; // Assuming a year has 365 days

    printf("%d years is equal to %d days.\n", years, days);

    // Convert days to years
    printf("Enter number of days: ");
    scanf("%d", &days);
    years = days / 365; // Assuming a year has 365 days

    printf("%d days is equal to %d years.\n", days, years);

    return 0;
}
