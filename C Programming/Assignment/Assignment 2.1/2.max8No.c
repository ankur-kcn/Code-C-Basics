// Design a program to compute a maximum of 8 numbers.

#include<stdio.h>
int findMax(int a[]){
    int max=a[0];
    for(int i=0;i<8;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int main(){
    int arr[8];
    printf("Enter elements in the array: ");
    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }\
    printf("Maximum = \n%d", findMax(arr));
    return 0;
}