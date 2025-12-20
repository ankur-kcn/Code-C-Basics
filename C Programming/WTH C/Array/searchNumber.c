// array is given find if the number 'x' lies in the array or not, if yes print the index

#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int x=2;
    for(int i =0;i<5;i++){
        if(arr[i]==x){
            printf("The number %d is found at index %d ",arr[i],i);
            break;
        }
    }
    return 0;
}