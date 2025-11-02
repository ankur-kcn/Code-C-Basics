#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The Reverse Order is :\n");
    for(int j=n;j>=1;j--){
        sum+=j;
        printf("%d\n",j);
    }
    printf("Sum is : %d",sum);
    // for(int i=1,j=n;i<=n&&j>=1;i++,j--){
    //     sum+=i;
    //     printf("%d\n",j);
    // }
    // printf("Sum is : %d",sum);


    // printf("\nThe Reverse Order is :\n");

    // for(int i=n;i>=1;i--){
    //     printf("%d\n",i);
    // }

    return 0;
}