#include<stdio.h>

void PrintAdress(int *n);

int main(){
    int n =4;
    printf("The adress of main n : %u\n", &n);
    PrintAdress(&n);
    return 0;
}

void PrintAdress(int *n){
    printf("The adress of n : %u\n", n); // we already pass the address in main func. so if we try here to print adress it will print the adress of this func. not main
}