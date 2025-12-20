// an array containing elements from 1 to n except 1 element is missing
// find the missing element

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n-1];
    int sumN=0;
    printf("Enter the elements in the array (1 to n in sequence) : ");
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sumN = sumN+arr[i];
    }
    int sum=n*(n+1)/2;
    int missingNumber = sum - sumN;
    printf("The Missing Number : %d ",missingNumber);
    return 0;
}