//find the second largest number in the array
#include<stdio.h>
#include<limits.h>
#define SIZE 8
int main(){
    int arr[SIZE],max=INT_MIN,smax=INT_MIN;
    printf("Enter the array elements : ");
    for(int i=0;i<SIZE;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<SIZE;i++){
        if(max < arr[i]){
            smax=max; // previous value of max
            max=arr[i]; //new value of max
        }
        // this work only when the previous if is satisfied which means the the first max value founded
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("Second Largest : %d ",smax);
    return 0;
}