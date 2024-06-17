#include <stdio.h>


float calculateSurfaceArea(float width, float length, float height) {
    return 2 * (width * length + height * length + height * width);
}

int main() {
    float width, length, height;

    
    printf("Enter the width of the rectangular prism: ");
    scanf("%f", &width);
    printf("Enter the length of the rectangular prism: ");
    scanf("%f", &length);
    printf("Enter the height of the rectangular prism: ");
    scanf("%f", &height);


    float surfaceArea = calculateSurfaceArea(width, length, height);

    
    printf("The surface area of the rectangular prism is: %.2f\n", surfaceArea);

    return 0;
}

 