#include<stdio.h>
int fibo(int a){
    if(a==0||a==1) return a;
    return fibo(a-1) + fibo(a-2);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The nth Term: \n");
    printf("%d \n",fibo(n));
    return 0;
}