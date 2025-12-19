#include<stdio.h>
int main(){
    int marks[10];
    for(int i=0;i<10;i++){
        printf("Enter the marks of %d student : ",i+1);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if(marks[i]<35){
            printf("Index : %d \n",i);
        }
    }
    
    return 0;
}