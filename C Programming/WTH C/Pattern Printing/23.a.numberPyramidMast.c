//    1
//   121
//  12321
// 1234321

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //for spaces
        for(int l=1;l<=n-i;l++){
            printf(" ");
        }
        //for 1 then 12 then 123 
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        //for  then 1 then 21 then 321
        int a=i-1;// to start with 1 number less that i
        for(int k=1;k<=i-1;k++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}