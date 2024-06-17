#include<stdio.h>
void main()

{
int radius;
float area,circum,PI=3.14;
printf("enter the redius:");
scanf("%d",&radius);
area=PI*radius*radius;
circum=2*PI*radius;
printf("area=%f/ncircumference=%f",area,circum);

}