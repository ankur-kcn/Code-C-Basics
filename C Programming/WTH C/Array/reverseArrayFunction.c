// reverse using function

#include<stdio.h>
void reverse(int arr[],int si,int ei){
    int temp;
    for(int i=si,j=ei;i<j;i++,j--){
        temp = arr[i];
        arr[i] =arr[j];
        arr[j] = temp;
    }
}
int main(){
    int a;
    printf("Enter the array size : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the array elemetns : \n");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,0,a-1);
    for(int i=0;i<a;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}