#include<stdio.h>

int fact(int n);

int main(){
    printf("The Factorial is %d\n",fact(5));
    return 0;
}

int fact(int n){
    //base condition
    if(n==1){
        return 1; // in fmaths the factorial of 0(zero) is also 1, so we check till 1!
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;
}