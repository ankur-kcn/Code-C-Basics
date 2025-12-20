// find duplicate element from a given array of integers

#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                printf("The Duplicate Element : %d ",arr[i]);
                break;
            }
        }
    }
    return 0;
}