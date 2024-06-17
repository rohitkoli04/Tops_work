#include <stdio.h>
int main(){
    float num1, num2;
    //input user
    printf("enter first num");
    scanf("%f",&num1);

    printf("enter secound num");
    scanf("%f",&num2);
    

    //display ortiginal number

    printf("original number: num1 = %2.f, num2 = %2.f, num1, num2");
     // swap number 
     num1=num1 * num2;
     num2=num1 / num2;
     num1=num1 / num2;
      // display screen swap number
      printf("swapped number : num1 = %2.f. num2 = %2.f, num1, num2");

      return 0;
}