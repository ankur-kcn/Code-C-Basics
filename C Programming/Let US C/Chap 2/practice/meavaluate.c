#include<stdio.h>
int main(){
    float s=4.1+2.2*3.0*3.0/0.0;
    printf("S = %lf",s);
    
    float r=3.5*3.5+2*3.5+1/2*3.5*3.5+3.5+1;
    printf("R = %lf",r);
    return 0;
}