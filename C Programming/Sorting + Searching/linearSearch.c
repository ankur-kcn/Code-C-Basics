#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter the array elements: ");
    for(int i=0;i<10;i++){    
        scanf("%d",&arr[i]);
    }
    int key;
    printf("\nEnter the element to search : ");
    scanf("%d",&key);
    for(int i=0;i<10;i++){
        if(key==arr[i]){
            printf("\nThe element is found!");
        }
        else{
            printf("The element is NOT found!");
        }
    }
    return 0;
}