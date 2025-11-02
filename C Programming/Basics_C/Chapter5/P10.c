#include<stdio.h>

int fibonacci(int n);

int main(){
    int n=10;
    printf("Fibonacci Series:");
    for (int i=0;i<=n;i++){
        printf("%d, ",fibonacci(i)); //call i, if you want to print the sequence | calling n will print the nth term multiple times
    }
    return 0;
}

int fibonacci(int n){
    //base case
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }

    int fiboNm1=fibonacci(n-1);
    int fiboNm2=fibonacci(n-2);
    int fiboN=fiboNm1+fiboNm2;
    return fiboN;
}