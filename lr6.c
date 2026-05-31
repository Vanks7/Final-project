#include <stdio.h>
#include "lr6.h"
#define N 3

void rotate90(int a[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int tmp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = tmp;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            int tmp = a[i][j];
            a[i][j] = a[i][N - 1 - j];
            a[i][N - 1 - j] = tmp;
        }
    }
}

void printMatrix(int a[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf_s("%d", &matrix[i][j]);

    printMatrix(matrix);
    rotate90(matrix);
    printf("\nNew matrix:\n");
    printMatrix(matrix);
}