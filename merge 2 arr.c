#include <stdio.h>

int main() {
    int n1, n2, i, j, k;
    i = 0; j = 0; k = 0;
    printf("Enter size of the first array: ");
    scanf("%d", &n1);
    printf("Enter size of the second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], arr3[n1 + n2];
    printf("Enter the sorted elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the sorted elements of the second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    i = 0; j = 0; k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n1) {
        arr3[k++] = arr1[i++];
    }
    while (j < n2) {
        arr3[k++] = arr2[j++];
    }
    printf("Merged sorted array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
