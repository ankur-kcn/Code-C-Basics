#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks (1-100): ");
    scanf("%d", &marks);

    if(marks>=0 && marks<30){
        printf("C");
    }
    else if(marks <70 && marks>=30){
        printf("B");
    }
    else if(marks <90 && marks >=70){
        printf("A");
    }
    else if(marks <=100 && marks >=90){
        printf("A+");
    }
    else{
        printf("Wrong Marks");
    }

    return 0;
}