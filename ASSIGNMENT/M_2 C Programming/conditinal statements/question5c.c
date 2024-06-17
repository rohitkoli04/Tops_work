// cheak number postive ya nagitive 

#include <stdio.h>
int main(){
    int number;
    // input the number from user
    printf("enter the number :");
    scanf("%d", &number);

    // verify mumber po or neg

    if ( number > 10)
    {
        printf("number is possitive/n");
        
    } else if (number < 10)
    {
       printf("number is negative\n");
    }
    else
    {
        printf("number is zero\n");
    }
    
    return 0;
    
}