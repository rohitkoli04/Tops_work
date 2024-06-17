#include <stdio.h>


float calculatePerimeter(float side1, float side2, float side3) {
    return side1 + side2 + side3;
}

int main() {
    float side1, side2, side3;

    // Input the lengths of the sides from the user
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);
    printf("Enter the length of side 2: ");
    scanf("%f", &side2);
    printf("Enter the length of side 3: ");
    scanf("%f", &side3);

    // Calculate the perimeter
    float perimeter = calculatePerimeter(side1, side2, side3);

    // Display the result
    printf("The perimeter of the triangle is: %.2f\n", perimeter);

    return 0;
}
