#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the a: ");
    scanf("%d",&a);
    printf("Enter the b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the a: %d\n",a);
    printf("the b: %d\n",b);
    return 0;
}