#include <stdio.h>

int main() {
    int i, j, r, sum1 = 0, sum2 = 0;
    printf("No. of rows and columns for square matrix: ");
    scanf("%d", &r);
    int arr[r][r];
    printf("Enter values for the %d x %d matrix:\n", r, r);
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &arr[i][j]);
        }
    }


    printf("matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++) {
        sum1 += arr[i][i];
        sum2 += arr[i][r - i - 1];
    }

    printf("Sum of the main diagonal: %d\n", sum1);
    printf("Sum of the secondary diagonal: %d\n", sum2);

    return 0;
}

