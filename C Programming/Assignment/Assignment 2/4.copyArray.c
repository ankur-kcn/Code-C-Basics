// Write a program in C to copy the elements of one array into another array.
#include<stdio.h>
int main(){
    int a[100],b[100],n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the %d elements in array:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    printf("The 2nd Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}