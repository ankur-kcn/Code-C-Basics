// Write a program in C to find the sum of all elements of the array.
#include<stdio.h>
int main(){
    int arr[100],n;
    printf("Enter the number of elemtns:");
    scanf("%d",&n);
    printf("Enter %d elemtns in array:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("The sum of all elemetns: %d\n",sum);
    return 0;
}