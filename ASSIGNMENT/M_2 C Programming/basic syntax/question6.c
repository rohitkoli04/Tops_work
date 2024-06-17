#include <stdio.h>

float calculateArea(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float base, height;

    // Input base and height from the user
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate the area
    float area = calculateArea(base, height);

    // Display the result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
