#include<stdio.h>
int main(){
    int a,b;

printf("Enter the values \n");
scanf("%d %d", &a, &b);
if(a<b){
    printf("%d is the smallest number", a);
}
else{
    printf("%d is the smallest number", b);
}
    return 0;
}