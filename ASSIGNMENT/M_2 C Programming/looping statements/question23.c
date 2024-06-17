
#include<stdio.h>
int main() {
  int rows, i, j, k;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  for (i = 1; i <= 10; i++) {
    // Print spaces before the stars
    for (k = 1; k <= rows - i; k++) {
      printf("  ");
    }

    // Print stars
    for (j = 1; j <= i * 2 - 1; j++) {
      printf("* ");
    }

    printf("\n");
  }

  return 0;
}
