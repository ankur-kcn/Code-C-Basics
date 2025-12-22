#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the row of the array : ");
    scanf("%d",&r);
    printf("Enter the column of the array : ");
    scanf("%d",&c);
    int a[r][c],b[r][c],s[r][c];
    printf("Input The First Array : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nInput The Second Array : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nThe Sum Array :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d   ",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}