//defining the functions

#include<stdio.h>
#include "mycalcu.h" // included the header file

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float div(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero is not possible!\n");
        return 0;
    }
}
