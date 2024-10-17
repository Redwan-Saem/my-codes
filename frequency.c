#include <stdio.h>

int main() {
    int a[100], b[100];
    int n, i, j, c;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = -1;
    }


    for (i = 0; i < n; i++) {
        if (b[i] == -1) {
            c = 1;
            for (j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    c++;
                    b[j] = 0;
                }
            }
            b[i] = c;
        }
    }


    for (i = 0; i < n; i++) {
        if (b[i] != 0) {
            printf("Number of %d is %d\n", a[i], b[i]);
        }
    }

    return 0;
}

