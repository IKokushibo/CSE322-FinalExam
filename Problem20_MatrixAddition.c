#include <stdio.h>

int main() {
    int row, col;
    
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    
    int a[row][col], b[row][col], sum[row][col];
    
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row; i++) {
        printf("Enter elements of row %d: ", i + 1);
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row; i++) {
        printf("Enter elements of row %d: ", i + 1);
        for (int j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("The Sum of Matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
