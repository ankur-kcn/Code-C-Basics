#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("The array in reverese order:\n");
    for(int i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}