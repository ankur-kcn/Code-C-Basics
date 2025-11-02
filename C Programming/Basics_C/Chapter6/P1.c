#include<stdio.h>

int main(){
    // int age = 22;
    // int *ptr= &age;
    // int _age = *ptr;

    int i=5;
    int *ptr =&i;
    int **pptr =&ptr; // store the address here otherwise it will not be able to proceed with pptr

    printf("%d", **pptr); // if single * then it will print the adress of ptr and not the value of i

    // printf("%d",_age);
    return 0;
}