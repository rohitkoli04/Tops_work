// Store 5 numbers in array and sort it in ascending order


    #include <stdio.h>

#define NUMBERS_COUNT 5

void bubbleSort(int arr[], int n);

int main() {
    int numbers[NUMBERS_COUNT];

    // Input numbers
    printf("Enter %d numbers:\n", NUMBERS_COUNT);
    for (int i = 0; i < NUMBERS_COUNT; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sort numbers
    bubbleSort(numbers, NUMBERS_COUNT);

    // Display sorted numbers
    printf("\nNumbers in ascending order:\n");
    for (int i = 0; i < NUMBERS_COUNT; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
