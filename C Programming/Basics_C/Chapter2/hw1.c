#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the Numbers:");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a+b+c;
    double average =sum/3;
    printf("The average of three numbers : %f" , average);
    return 0;
}