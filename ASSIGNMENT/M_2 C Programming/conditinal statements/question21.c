// WAP  input the week number and print week day.

#include<stdio.h>
int main(){
    int week_month;
     // take a input days user

     printf("enter the weeks (1-7):");
     scanf("%d",&week_month);

     // cheak the number with dayes 
switch (week_month)
{
case 1:
  printf ("monday\n");
    break;
case 2:
printf("tuessay\n");
break;
case 3:
printf("wenesday\n");
break;
case 4:
printf("thursday\n");
break;
case 5:
printf("friday\n");
break;
case 6:
printf("staueday\n");
break;
case 7:
printf("sunday\n");
break;


default:
printf("wrong number plz enter the (1-7)\n");
}
return 0;
}