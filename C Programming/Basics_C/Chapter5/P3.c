#include<stdio.h>

int sum(int x, int y);

int main(){
    int a,b;
    printf("Enter the 1st Number: ");
    scanf("%d",&a);
    printf("Enter the 2nd Number: ");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("The sum of %d and %d is %d\n",a,b,s);

    return 0;
}

int sum( int x, int y){
    return x+y;
}