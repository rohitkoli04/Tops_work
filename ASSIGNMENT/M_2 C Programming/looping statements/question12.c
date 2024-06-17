// Program of Armstrong Number in C Using For Loop & While Loop

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0, power;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    originalNum = num;

    // Counting number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Checking if the number is Armstrong
    while (originalNum != 0) {
        remainder = originalNum % 10;
        
        // Power calculation
        power = round(pow(remainder, n));
        result += power;
        
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
