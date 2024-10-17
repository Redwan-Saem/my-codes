#include <stdio.h>

int main() {
    int n, i, j, c, arr[100], temp[100];
    printf("enter array Size: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        printf("index[%d]: ", i);
        scanf("%d", &arr[i]);
        temp[i] = -1;
    }


    for (i = 0; i < n; i++) {
        c = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                c++;
                temp[j] = 0;
            }
        }
        if (temp[i] != 0) {
            temp[i] = arr[i];
        }
    }


    printf("Array after eliminating duplicate elements:\n");
    for (i = 0; i < n; i++) {
        if (temp[i] != 0) {
            printf("%d\n", temp[i]);
        }
    }

    return 0;
}

