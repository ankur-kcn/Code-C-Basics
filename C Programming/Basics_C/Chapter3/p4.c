#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks of the Student : ");
    scanf("%d", &marks);

    // if(marks>=0 && marks<=30){
    //     printf("The student is Failed!");
    // }
    // else if( marks>=30 && marks<=100){
    //     printf("The Student is Passed!");
    // }
    // else{
    //     printf("Wrong Marks!");
    // }

    // 

    marks<=30 ? printf("Failed! \n") : printf("Passed! \n");

    return 0;
}