#include <stdio.h>

int main() {
    int i, j, r, c;
    printf("rows: ");
    scanf("%d", &r);
    printf("coloums: ");
    scanf("%d", &c);
    int arr[r][c], Trans[c][r];

    printf("Enter values for the %d x %d matrix:\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Your matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            Trans[j][i] = arr[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", Trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}

