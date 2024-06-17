#include <stdio.h>

float calculateArea(float width, float length) {
    return width * length;
}

int main() {
    float width, length;

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);


    float area = calculateArea(width, length);

  
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
