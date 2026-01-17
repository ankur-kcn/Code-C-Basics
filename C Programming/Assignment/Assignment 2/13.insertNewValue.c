// Write a program in C to insert New value in the sorted array.
#include <stdio.h>

int main() {
    int n, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  

    printf("Enter %d elements in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    int i = n - 1;

    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = value;

    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
