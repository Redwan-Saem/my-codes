#include <stdio.h>

int main() {
    int i, j, r, c, sum, max = 0, row = -1;
    int A[100][100];

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);


    printf("Enter values for matrix A:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }


    printf("Matrix A:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++) {
            sum += A[i][j];
        }

        if (sum > max) {
            max = sum;
            row = i;
        }
    }

    if (row != -1) {
        printf("The row %d has the maximum sum of its elements: %d\n", row + 1, max);
    } else {
        printf("No rows were found.\n");
    }

    return 0;
}

