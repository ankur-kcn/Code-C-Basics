#include<stdio.h>

int countOdd(int arr[],int n);

int main(){
    int arr[]={2,3,4,5,1};
    printf("Sequence of Terms: ");
    int oddNumbers = countOdd(arr,5); // to print the sequence
    printf("\nThe No. of Odd term : %d\n",oddNumbers); //don't call the function again otherwise it will print the value double
    return 0;
}

int countOdd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2!=0){
            count ++;
            printf("%d\t",arr[i]);
        }
    }
    return count;
}