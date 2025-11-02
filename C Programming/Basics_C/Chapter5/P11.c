// A Test Code to write Fibonacci Series using Loops

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;         // first two terms are 0 and 1
        else {
            next = first + second; // next term = sum of previous two
            first = second; // values getting stored to continue the series
            second = next; // values getting stored to continue the series
        }
        printf("%d ", next);
    }

    return 0;
}
