// an array arr contains n element find it is palindrome or not

#include<stdio.h>
int main(){
    int n,flag=1;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n;i++){
        b[i]=a[n-1-i];
    }
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("It is a Palindrome No.");
    }
    else{
        printf("It is NOT a Palindrome No.");
    }
    return 0;
}