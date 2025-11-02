#include<stdio.h>

float areaSq(float side);
float areaCircle(float radius);
float areaRectangle(float a, float b);

int main(){
    float side = 5.0;
    float radius = 3.0;
    float a = 5.0, b= 6.0;

    printf("Area Of Square : %.2f\n",areaSq(side));
    printf("Area Of Circle : %.2f\n",areaCircle(radius));
    printf("Area Of Rectangle : %.2f\n",areaRectangle(a,b));
    return 0;
}
 
float areaSq(float side){
    return side * side;

}
float areaCircle(float radius){
    return 3.14 * (radius * radius);
}
float areaRectangle(float a, float b){
    return a*b;
}