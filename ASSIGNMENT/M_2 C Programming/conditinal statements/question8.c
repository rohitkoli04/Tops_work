// WAP to accept the height of a person in centimeters and categorize the
// person according to their height



#include <stdio.h>

int main() {
    float height_cm;

    // Accept height from the user
    printf("Enter the height of the person in centimeters: ");
    scanf("%f", &height_cm);

    // Categorize the person based on height
    if (height_cm < 150) {
        printf("The person is Short.\n");
    } else if (height_cm >= 150 && height_cm < 170) {
        printf("The person is Average height.\n");
    } else if (height_cm >= 170 && height_cm < 190) {
        printf("The person is Tall.\n");
    } else {
        printf("The person is Very Tall.\n");
    }

    return 0;
}
