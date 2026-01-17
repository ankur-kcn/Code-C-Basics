// multiplication of two matrices given by the user

#include<stdio.h>

int main(){
    int n;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int a[n][n], b[n][n], mul[n][n];

    printf("Enter the elements of the First Matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the Second Matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            mul[i][j] = 0;
        }
    }

    // multiplication logic
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nThe Multiplication Result:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d  ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
