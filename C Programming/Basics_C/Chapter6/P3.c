#include<stdio.h>

void doWork(int a,int b, int *sum,int *avg, int *pro);

int main(){
    int a =10,b=5;
    int sum, avg, pro;
    doWork(a,b, &sum, &avg, &pro);
    printf("Sum = %d | Average = %d | Product = %d ",sum,avg,pro);
    return 0;
}

void doWork(int a,int b, int *sum,int *avg, int *pro){
    *sum =a+b;
    *avg =(a+b)/2;
    *pro =a*b;
}