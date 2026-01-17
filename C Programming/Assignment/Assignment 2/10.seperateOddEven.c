// Write a program in C to separate odd and even integers in separate arrays.
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int e = 0, o = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    printf("Even elements:\n");
    for (int i = 0; i < e; i++)
        printf("%d ", even[i]);

    printf("\nOdd elements:\n");
    for (int i = 0; i < o; i++)
        printf("%d ", odd[i]);

    return 0;
}
