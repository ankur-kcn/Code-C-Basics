// Check if a given positive integer number is a prime number or not?
#include<stdio.h>
int main(){
    int n,isPrime=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        printf("It's A Prime Number!\n");
    }
    else{
        printf("It's Not A Prime Number!\n");
    }
    return 0;
}