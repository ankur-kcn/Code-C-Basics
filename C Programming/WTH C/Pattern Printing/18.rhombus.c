//     *****
//    *****
//   *****
//  *****
// *****

#include<stdio.h>
int main(){
    int n; 
    printf("Enter the number: ");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){ // for spaces
                printf(" ");
            }
                for(int k=1;k<=n;k++){ // width stays constant which is required for rhombus
                    printf("*");
                }
        printf("\n");
    } 
    return 0;
}