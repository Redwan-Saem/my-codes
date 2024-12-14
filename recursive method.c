#include <stdio.h>

int binarySearchRecursive(int arr[], int target, int left, int right) {
    if (left > right) {
        return -1; // Target not found
    }

    int mid = left + (right - left) / 2; // Prevent integer overflow

    if (arr[mid] == target) {
        return mid; // Target found
    } else if (arr[mid] < target) {
        return binarySearchRecursive(arr, target, mid + 1, right); // Search right half
    } else {
        return binarySearchRecursive(arr, target, left, mid - 1); // Search left half
    }
}

int main() {
    int n, target;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int result = binarySearchRecursive(arr, target, 0, n - 1);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
