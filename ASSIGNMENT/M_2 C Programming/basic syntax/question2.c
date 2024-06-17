#include <stdio.h>

int main() {
   
char operator;
double  first,second;
printf("enter the operator ( +, -, *, / ) : ");
scanf("%C", &operator);
 
 printf("enter the two numbers one by one :");
 scanf("%if %if", &first,&second);
  
  switch (operator)
  {
  case '+':
  printf("%f + %F =%F",first,second,(first+second));
    break;

    case '-':
  printf("%f - %F =%F",first,second,(first-second));
    break;

  case '*':
  printf("%f * %F =%F",first,second,(first*second));
    break;

  case '/':
  if( second !=0.0)  
  printf("%f / %F =%F",first,second,(first/second));
  else 
  printf("divide by zero situation");
 break;
  
  default:
  printf("invalid opratore");
  }


    return 0;
}