#include <stdio.h>
int maina(){
    int num1, num2, tem;
    printf("enter first number:");
    scanf("%d", &num1);
    printf("enter second num:");
    scanf("%d", num2);
    

    // swap 2 numbers with using 3rd variable

    tem = num1;
    num1 = num2;
    num2 = num1;

    printf("\nAfter swapping with a third variable:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
 // Swapping without a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nAfter swapping without a third variable:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}