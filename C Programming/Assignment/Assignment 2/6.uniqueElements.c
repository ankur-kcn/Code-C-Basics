// Write a program in C to print all unique elements in an array.
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[100],n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Unique Elements:\n");
    for(int i=0;i<n;i++){
        bool hasDuplicate=false;
        for(int j=0;j<n;j++){
            if(i!=j&&arr[i]==arr[j]){
                hasDuplicate=true;
            }
        }
        if(hasDuplicate==false){
            printf("%d\n",arr[i]);
        }

    }

    return 0;
}