#include <stdio.h>

#define MAX_SIZE 10

void readMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element at position (%d,%d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int transpose[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE], transpose[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &cols);

    if(rows > MAX_SIZE || cols > MAX_SIZE) {
        printf("The maximum allowed size for rows and columns is %d.\n", MAX_SIZE);
        return 1;
    }

    readMatrix(matrix, rows, cols);
    transposeMatrix(matrix, transpose, rows, cols);

    printf("Original Matrix:\n");
    printMatrix(matrix, rows, cols);

    printf("Transpose Matrix:\n");
    printMatrix(transpose, cols, rows);

    return 0;
}
