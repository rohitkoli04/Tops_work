// WAP tfind the largest of three numbers

#include<stdio.h>
int main(){
    int num1,num2,num3,largest;
    printf("enter three number :");
    scanf("%d %d %d", &num1,&num2,&num3);
    
    //lrgest using ternary

largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

printf("the largest number amoung %d,5d,%d is %d.\n", num1,num2,num3);
return 0;
}