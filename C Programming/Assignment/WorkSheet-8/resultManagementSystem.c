#include<stdio.h>

int inputMarks(){
    int a,b,c;
    printf("Marks --> ");
    scanf("%d%d%d",&a,&b,&c);
    int total = a+b+c;
    return total;
}

float calculateAverage(int total){
    float avg = total/3;
    return avg;

}

void displayResult(float avg){
    if(avg>=80){
        printf("Grade A");
    }
    else if(avg>=60){
        printf("Grade B");
    }
    else if(avg>=40){
        printf("Grade C");
    }
    else{
        printf("Fail");
    }
}

int main(){
    int totalMarks;
    float Avg;
    totalMarks=inputMarks();
    Avg=calculateAverage(totalMarks);
    displayResult(Avg);
    printf("\nAverage : %.2f",Avg);
    return 0;
}