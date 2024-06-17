// WAP to find maximum number among 3 numbers using ternary operator

#include<stdio.h>i
int main(){
    int num1,num2,num3, so;

    printf("enter the number :");
    scanf("%d %d %d", &num1,&num2, &num3);

    // using ternary 

    so = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf(" the maximun number amoung %d, %d, and %d is %d.\n", num1, num2, num3,so);
    return 0;

}