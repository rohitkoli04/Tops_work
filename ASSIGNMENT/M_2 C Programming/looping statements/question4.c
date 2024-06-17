//  WAP to print table up to given number

#include <stdio.h>

int main() {
    int number, i;
    
    // Input the number
    printf("enter the number :");
    scanf("%d\n",&number);
    // Print the multiplication table up to the given number
    printf("multiplication table %d\n",number);
    for (int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
    
}
