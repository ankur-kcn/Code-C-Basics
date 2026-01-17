// Write a program in C to find transpose of a given matrix.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the no. of rows : ");
    scanf("%d",&r);
    printf("Enter the no. of columns : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the array elements : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Array : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe Transpose Array : \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d  ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}