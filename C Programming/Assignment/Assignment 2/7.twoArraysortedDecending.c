// Write a program in C to merge two arrays of same size sorted in decending order.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elemetns: ");
    scanf("%d",&n);
    int a[n],b[n],c[2*n];
    printf("Enter the %d elements in 1st Array(in descending order):\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the %d elements in 2nd Array(in descending order):\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int i=0,j=0,k=0;
    while(i<n&&j<n){
        if(a[i]>b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }
    printf("The Final Array in Descending Order:\n");
    for(int i=0;i<2*n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}