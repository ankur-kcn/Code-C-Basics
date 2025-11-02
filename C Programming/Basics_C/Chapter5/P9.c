#include<stdio.h>
int percentage(int science,int maths,int sanskrit);

int main(){
    int science, maths, sanskrit;
    printf("Enter the marks of Science : ");
    scanf("%d",&science);
    printf("Enter the marks of Maths : ");
    scanf("%d",&maths);
    printf("Enter the marks of Sanskrit : ");
    scanf("%d",&sanskrit);

    printf("The Percentage of 3 Subjects : %d",percentage(science,maths,sanskrit));
    return 0;
}

int percentage(int science,int maths,int sanskrit){
    return ((science+maths+sanskrit)/3);
}
