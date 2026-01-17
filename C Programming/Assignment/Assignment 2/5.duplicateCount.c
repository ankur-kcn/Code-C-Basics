// Write a program in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int main(){
    int arr[100],n,d=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements in array:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                d++;
                break;
            }
        }
    }
    printf("Total Duplicate:%d\n",d);
    return 0;
}