// Write a program in C for a 2D array of size 3x3 and print the matrix.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the row of the array : ");
    scanf("%d",&r);
    printf("Enter the column of the array : ");
    scanf("%d",&c);
    int a[r][c];
    printf("Input The First Array : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe Array :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d   ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}