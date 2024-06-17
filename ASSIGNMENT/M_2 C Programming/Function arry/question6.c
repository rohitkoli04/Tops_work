//  WAP to make addition, Subtraction and multiplication of two matrix using
// 2-D Array


#include <stdio.h>

#define MAX_SIZE 10

void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols);
void printMatrix(int matrix[][MAX_SIZE], int rows, int cols);
void addMatrix(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols);
void subtractMatrix(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols);
void multiplyMatrix(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int cols2);

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the elements of first matrix:\n");
    inputMatrix(mat1, rows1, cols1);

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    printf("Enter the elements of second matrix:\n");
    inputMatrix(mat2, rows2, cols2);

    // Addition
    if (rows1 == rows2 && cols1 == cols2) {
        printf("Addition of the matrices:\n");
        addMatrix(mat1, mat2, result, rows1, cols1);
        printMatrix(result, rows1, cols1);
    } else {
        printf("Matrices cannot be added because they have different dimensions.\n");
    }

    // Subtraction
    if (rows1 == rows2 && cols1 == cols2) {
        printf("Subtraction of the matrices:\n");
        subtractMatrix(mat1, mat2, result, rows1, cols1);
        printMatrix(result, rows1, cols1);
    } else {
        printf("Matrices cannot be subtracted because they have different dimensions.\n");
    }

    // Multiplication
    if (cols1 == rows2) {
        printf("Multiplication of the matrices:\n");
        multiplyMatrix(mat1, mat2, result, rows1, cols1, cols2);
        printMatrix(result, rows1, cols2);
    } else {
        printf("Matrices cannot be multiplied because number of columns of first matrix is not equal to the number of rows of second matrix.\n");
    }

    return 0;
}

void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrix(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrix(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
