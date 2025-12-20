// copy the contents of one array into another in the reverse order

#include<stdio.h>
#define SIZE 6
int main(){
    int a[SIZE],b[SIZE];
    for(int i=0;i<SIZE;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<SIZE;i++){
        b[i]=a[SIZE-1-i];
    }
    for(int i=0;i<SIZE;i++){
        printf("%d ",b[i]);
    }
    return 0;
}