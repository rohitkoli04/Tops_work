#include <stdio.h>


int main() {
    float side, area;

    printf("Enter the length of one side of the square: ");
    scanf("%f", &side);

    // Calculate
    area = calculateArea(side);

   
    printf("The area of the square with side %.2f is %.2f\n", side, area);

    return 0;
}
