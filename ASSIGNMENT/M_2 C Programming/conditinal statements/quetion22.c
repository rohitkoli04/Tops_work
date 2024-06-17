// Accept month number and display month name

#include<stdio.h>
int main(){
    int month_NUMBER;

    //input month number

    printf("enter the number month (1-12) :\n");
    scanf("%d", &month_NUMBER);

    // cheak number name baed on montky number 

     switch (month_NUMBER)
     {
     
     case 1:
      printf("january\n");
        break;

        case 2:
      printf("february\n");
        break;

        case 3:
      printf("march\n");
        break;

        case 4:
      printf("april\n");
        break;

        case 5:
      printf("may\n");
        break;

        case 6:
      printf("jun\n");
        break;

        case 7:
      printf("july\n");
        break;

        case 8:
      printf("august\n");
        break;

        case 9:
      printf("september\n");
        break;

        case 10:
      printf("october\n");
        break;

        case 11:
      printf("november\n");
        break;

        case 12:
      printf("december\n");
        break;
     
     default:
       printf("invalid month numbrr ,plz enter (1-12) :\n");
     } 

     return 0;
}