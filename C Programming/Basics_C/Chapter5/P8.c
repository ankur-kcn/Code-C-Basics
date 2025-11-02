#include<stdio.h>

float celtoFar(float celsius);

int main(){
    printf("Temperature in Farenheit : %.2f\n",celtoFar(0));
    return 0;
}

float celtoFar(float celsius){
    float far=celsius*(9.0/5.0)+ 32;
    return far;

}