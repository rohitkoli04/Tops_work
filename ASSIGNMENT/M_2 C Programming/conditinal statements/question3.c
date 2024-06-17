// WAP  check if the given year is a leap year or notś


#include<stdio.h>
int main(){
    int year;
    printf("enter the year :");
    scanf("%d",&year);
    

// leaping year ex( year % 4 == 0 && year % 100!=0 || year% 400 == o) formula leap year in if else 
if(( year % 4 == 0 && year % 100 !=0) || ( year % 400 == 0)){
printf("%d is a leap year.\n,", year);
} else {
    printf("%d not leaf year/n", year);
}
return 0;

}