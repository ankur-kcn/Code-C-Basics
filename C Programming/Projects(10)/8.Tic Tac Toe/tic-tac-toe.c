#include <stdio.h>

int difficulty;

void input_difficulty();

int main(){

    input_difficulty();
  
}

void input_difficulty(){
    while(1) { // this starts an infinite loop,and ends when the condition is satisfied
    printf("\nSelect Difficulty Level: ");
    printf("\n1. Human (Standard) ");
    printf("\n2. God (Impossible to Win) ");
    printf("\nEnter Your Choice: ");
    scanf("%d", &difficulty);

    if (difficulty !=1 && difficulty !=2){
        printf("\nIncorrect Choice! Enter (1/2)!!");
    }
    else {
        break;
    }
    // if the value is not equals to 1 or 2 , it will continue on loop

}

}