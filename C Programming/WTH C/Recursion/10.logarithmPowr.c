#include<stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    int ans=power(a,b/2);
    if(b%2==0) return ans*ans;
    if(b%2!=0) return ans*ans*a;
}
int main(){
    int b,p;
    printf("Enter the base: ");
    scanf("%d",&b);
    printf("Enter the power: ");
    scanf("%d",&p);
    printf("%d raised to power %d is: %d\n",b,p,power(b,p));
    return 0;
}