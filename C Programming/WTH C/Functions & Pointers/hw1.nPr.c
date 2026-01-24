// nPr = n!/(n-r)!

#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int nPr(int n,int r){
   return factorial(n)/factorial(n-r);
}
int main(){
    int n,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the repetition: ");
    scanf("%d",&r);
    int permi = nPr(n,r);
    printf("The Permutation is: %d\n",permi);
    return 0;
}