#include<stdio.h>
void fibo(int x){
    int a=0,b=1;
    int next;
    for(int i=0;i<=x;i++){
        printf("%d, ",a);
        next=a+b;
        a=b;
        b=next;
    }
}
int main(){
    int n;
    printf("Enter the 1st n numbers: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fibo(i);
        printf("\n");
    }
    return 0;
}