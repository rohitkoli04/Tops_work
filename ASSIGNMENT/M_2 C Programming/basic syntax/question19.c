#include <stdio.h>
int main(){
    double principle = 100000;
    double rate = 0.10;
    int n = 5;
    int y = 5l;
     
     double amount = principle * pow( 1 + rate/n, n*y);
      printf("the amount after %d years is : %.2f/n", y, amount);
      return 0;
}