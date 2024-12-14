#include <stdio.h>

int main() {
    int n, target;

    printf("Enter element number: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter what to search: ");
    scanf("%d", &target);

    int left = 0, right = n - 1, mid, found = -1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            found = mid;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found != -1) {
        printf("%d 1  found at %d index\n", target, found);
    } else {
        printf("%d not found\n", target);
    }

    return 0;
}
