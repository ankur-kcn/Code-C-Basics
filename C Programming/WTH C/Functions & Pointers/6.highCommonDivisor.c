#include<stdio.h>
int min(int x, int y ){
    if(x<y) return x;
    else return y;
}

//1st way
int gcd1(int x,int y){
    int hcf;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
            hcf=i;
        }
    }
    return hcf;
}

//2nd optimised way
int gcd2(int x,int y){
    int hcf;
    for(int i=min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int hcf1=gcd1(a,b);
    int hcf2=gcd2(a,b);
    printf("The HCF/GCD (using 1st method) of %d and %d is: %d\n",a,b,hcf1);
    printf("The HCF/GCD (using 2nd method) of %d and %d is: %d\n",a,b,hcf2);
    return 0;
}