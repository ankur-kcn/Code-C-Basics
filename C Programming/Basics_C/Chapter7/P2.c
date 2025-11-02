#include<stdio.h>

int main(){
    int age =22;
    int *ptr =&age;
    printf("Poiinter : %p",ptr);
    ptr++; //incrementation of pointer
    printf("Poiinter after ++ : %p",ptr);
    ptr--; //decrementation of pointer
    printf("Poiinter after -- : %p",ptr);
    return 0;
}