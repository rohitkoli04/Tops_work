#include <stdio.h>

int main() {
    float kilometers, meters;

    // Input distance in kilometers from user
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    // Convert kilometers to meters
    meters = kilometers * 1000;

    // Display distance in meters
    printf("Distance in meters: %.2f\n", meters);
    return 0;
}
