#include<stdio.h>
int main(){
    int age;
    printf("Enter the age:");
    scanf("%d", &age);

    age>=18 ? printf("Is Adult") : printf("Is Not Adult");


    return 0;
}