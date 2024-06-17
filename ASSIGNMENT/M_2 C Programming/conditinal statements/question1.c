// Write a C program to accept two integers and check whether they are equal
//or not

# include<stdio.h>
int main(){
    int num1, num2;
    // user data
    printf(" enter the first integer :");
    scanf("%d",num1);
    printf("enter the secound integer:");
    scanf("%d",num2);
    
    //cheaking arw number are equlw

    if (num1 == num2){
        printf(" integer are equal.\n");
    
    } else{
        printf("integer not equal.\n");
    }
   return 0;
    
}