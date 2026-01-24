// nCr = n!/(r!*(n-r)!)

    //      1 
    //     1 1 
    //    1 2 1 
    //   1 3 3 1 
    //  1 4 6 4 1 

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
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int k=0;k<=2*n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int iCj=nCr(i,j);
            printf("%d ",iCj);
        }
        printf("\n");
    }
    return 0;
}