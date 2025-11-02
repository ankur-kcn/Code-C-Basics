// running the main function

#include <stdio.h>
#include "mycalcu.h"  // included my own header file 

int main() {
    int a = 10, b = 5;

    printf("Addition : %d\n", add(a, b));
    printf("Subtraction : %d\n", sub(a, b));
    printf("Multiplication : %d\n", mul(a, b));
    printf("Division : %.2f\n", div(a, b));

    return 0;
}

