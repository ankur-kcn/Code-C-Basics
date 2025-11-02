#include<stdio.h>
int main(){
    int age;
    printf("Enter the age: \n");
        scanf("%d", &age);
if(age>18){
    printf("Is Adult");
}
else{
    printf("Is Not Adult");
}
    return 0;
}