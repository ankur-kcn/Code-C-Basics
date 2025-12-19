//change the value of all odd indexed elements to its second multiple
//increment all even indexed elements value by 10

#include<stdio.h>
int main(){
    #define SIZE 7
    int arr[SIZE],a[SIZE];
    printf("Enter the elements : ");
    for(int i=0;i<SIZE;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<SIZE;i++){
        if(i%2==0){
            a[i]=arr[i]+10;
        }
        else{
            a[i]=arr[i]*2;

        }
    }
    printf("The Old Array : \n");
    for(int i=0;i<SIZE;i++){
        printf("%d  ",arr[i]);
    }
    printf("\nThe New Array : \n");
    for(int i=0;i<SIZE;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}