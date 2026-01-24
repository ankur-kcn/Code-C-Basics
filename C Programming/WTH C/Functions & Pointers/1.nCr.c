// nCr = n!/(r!*(n-r)!)

#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
   return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the repetition: ");
    scanf("%d",&r);
    int combi = nCr(n,r);
    printf("The Combination is: %d\n",combi);
    return 0;
}