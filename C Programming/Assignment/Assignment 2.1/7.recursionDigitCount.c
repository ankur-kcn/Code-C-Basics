// Write a recursive program to count the number of digits of a positive integer.

#include<stdio.h>
int countDigits(int a){
    if(a==0)
    return 0;
    return 1+countDigits(a/10);
}
int main(){
    int n;
    printf("Enter the positive integer: ");
    scanf("%d",&n);
    printf("No. of Digits: %d\n",countDigits(n));
    return 0;
}