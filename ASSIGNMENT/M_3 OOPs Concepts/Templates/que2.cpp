#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arrInt[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arrInt) / sizeof(arrInt[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arrInt[i] << " ";
    cout << endl;

    bubbleSort(arrInt, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arrInt[i] << " ";
    cout << endl;

   
}