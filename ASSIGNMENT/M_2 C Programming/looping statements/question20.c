#include <stdio.h>
#include <stdio.h>

int main() {
  int rows = 5; // Number of rows in the pattern

  // Loop through each row
  for (int i = 1; i <= rows; i++) {
    // Print spaces for alignment
    for (int j = 1; j <= rows; j++) {
      printf("  ");
    }

    // Print numbers in the row
    int number = 1;
    for (int j = 1; j <= i; j++) {
      printf("%d ", number);
      number += i; // Calculate the next number in the row
    }
    printf("\n");
  }

  return 0;
}