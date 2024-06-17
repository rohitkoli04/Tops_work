// Write a program to find out the max from given number

#include <stdio.h>

int main() {
    int n;
    
    // Prompting user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n], i;
    
    // Taking input from user
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Assuming the first element as maximum
    int max = arr[0];
    
    // Finding the maximum element in the array
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Displaying the maximum element
    printf("The maximum number is: %d\n", max);
    
    return 0;
}
