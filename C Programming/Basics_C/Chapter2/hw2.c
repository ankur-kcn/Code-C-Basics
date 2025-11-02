#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character \n");
    scanf("%c", &ch);
    if(ch>='0' && ch<='9'){
        printf("The charcter %c is a digit", ch);
    }
        else{
        printf("The character %c is not a digit", ch);
    }

    return 0;
}