//factorial of n
#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    printf("The Factoial is: %d",fact);
    return 0;
}