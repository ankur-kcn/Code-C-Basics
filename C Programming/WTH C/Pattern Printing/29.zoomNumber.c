// 555555555
// 544444445
// 543333345
// 543222345
// 543212345
// 543222345
// 543333345
// 544444445
// 555555555

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int min=0;
    int a,b;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            a=i;
            if(i>n) a=2*n-i;
            b=j;
            if(j>n) b=2*n-j;
            if(a<b) min =a;
            else min=b;
            printf("%d",n+1-min);
        }
        printf("\n");
    }
    return 0;
}