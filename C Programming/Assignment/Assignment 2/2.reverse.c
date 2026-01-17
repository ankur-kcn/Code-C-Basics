// Write a program in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
int main(){
    int arr[100],n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements in array:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Entered elements in Reverse Order:\n");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}