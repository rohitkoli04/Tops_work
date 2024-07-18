//2-d matrix 

#include <stdio.h>

int main() {
    int matri1[2][2] = {{2, 3}, {7, 4}};
    int matri2[2][2] = {{6, 8}, {4, 5}};
    int res[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                res[i][j] += matri1[i][k] * matri2[k][j];
            }
        }
    }

    printf("Result Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}