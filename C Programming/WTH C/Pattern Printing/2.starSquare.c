#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of stars: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ //outer loop-> no. of lines / no. of rows (horizontal)
        for(int i=1;i<=n;i++){ //inner loop-> no. of stars in single line / no. of columns (vertical)
            printf("* ");
        }
        printf("\n"); //har line ke bad enter
    }
    return 0;
}