#include<stdio.h>

int sum(int n);

int main(){
    printf("The Sum is %d ", sum(5));
    return 0;
}

int sum(int n){
    //base conditon - stopping conditon for recursive function
    if (n==1){
        return 1;
    }

    int sumNm1 = sum(n-1); //return the sum upto N minus 1
    int sumN= sumNm1 + n;
    return sumN;
}