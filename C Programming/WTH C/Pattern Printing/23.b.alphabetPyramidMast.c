#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        //triangle printing
        for(int k=1;k<=i;k++){
            printf("%c",(char)(64+k));
        }
        //remaining
        int a=i-1;
        for(int l=1;l<=i-1;l++){
            printf("%c",(char)(64+a));
            a--;
        }
        printf("\n");
    }
    return 0;
}