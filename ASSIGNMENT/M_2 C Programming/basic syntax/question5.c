// C Program to Calculate Volume of a Cube
#include <stdio.h>
int main(){
    int side;
    long volume;
    
  
    printf("Enter the side of the cube: ");
    scanf("%d", &side);
    
 
    volume = side * side * side;
    

    printf("Volume of Cube: %ld", volume);
    return 0;
}