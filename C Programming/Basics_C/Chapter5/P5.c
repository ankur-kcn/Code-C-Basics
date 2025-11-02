#include<stdio.h>

void printHl(int count);

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printHl(n);
    return 0;
}

void printHl(int count){
    if (count==0){
        return;//doesn't return anything
    }
    printf("Hello World\n");
    printHl(count-1);
}