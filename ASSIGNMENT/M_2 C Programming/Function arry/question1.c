//  Write a program to find out the max number from given array using function#include <stdio.h>

// Function to find the maximum 
int findMax(int arr[], int n) {
    int max = arr[0]; // Assume the first element 

    // Traverse through the array to find the maximum
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {5, 8, 3, 12, 9}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the function to find the maximum number
    int maxNumber = findMax(arr, size);

    // Print the maximum number
    printf("The maximum number in the array is: %d\n", maxNumber);

    return 0;
}
