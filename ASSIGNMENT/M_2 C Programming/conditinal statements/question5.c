#include <stdio.h>

// Function to calculate the surface area of a cube
float calculateSurfaceArea(float side) {
    return 6 * side * side;
}

int main() {
    float side, surface_area;

    // Input the length of one side of the cube
    printf("Enter the length of one side of the cube: ");
    scanf("%f", &side);

    // Calculate the surface area
    surface_area = calculateSurfaceArea(side);

    // Display the result
    printf("The surface area of the cube with side %.2f is %.2f\n", side, surface_area);

    return 0;
}