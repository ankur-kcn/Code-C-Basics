#include<stdio.h>
int facto(int a){
    int fact=1;
    for(int i=2;i<=a;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter the 1st n numners: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("The Factorial of %d is: %d\n",i,facto(i));
    }
    return 0;
}