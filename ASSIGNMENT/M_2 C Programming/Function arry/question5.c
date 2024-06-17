// WAP to take two Array input from user and sort them in ascending or
// descending order as per user’s choice

#include <stdio.h>

void bubbleSort(int arr[], int n, char order);
void swap(int *a, int *b);
void printArray(int arr[], int n);

int main() {
    int size1, size2;
    char order;
    
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements of the first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter elements of the second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    printf("Enter 'a' for ascending order or 'd' for descending order: ");
    scanf(" %c", &order);
    
    printf("Sorting the first array...\n");
    bubbleSort(arr1, size1, order);
    printf("Sorted first array: ");
    printArray(arr1, size1);
    
    printf("Sorting the second array...\n");
    bubbleSort(arr2, size2, order);
    printf("Sorted second array: ");
    printArray(arr2, size2);
    
    return 0;
}

void bubbleSort(int arr[], int n, char order) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((order == 'a' && arr[j] > arr[j+1]) || (order == 'd' && arr[j] < arr[j+1])) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
