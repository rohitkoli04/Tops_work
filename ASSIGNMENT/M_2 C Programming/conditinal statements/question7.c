// Accept marks from user and check pass or fail

#include <stdio.h>
int main(){
    int marks;
    printf("enter your marks :");
    scanf("%d", marks);
    //cheak marks using if 
  if(marks >= 40) {
        printf("Congratulations! You have passed.\n");
    } 
    else (marks <=40); {
        printf("Sorry, you have failed.\n");
    }
return 0;
 }

