#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int first=1;
        for(int k=0;k<=2*n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",first);
            first = first * (i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}