#include<stdio.h>
int main(){

    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<= 'Z')
    {
        printf("The Character %c is an Uppercase Letter\n", ch);
    }
    else if(ch>='a' && ch<='z'){
        printf("The Character %c is a LowerCase Letter\n", ch);
    }
    else{
        printf("The Character %c is not an Alphabet", ch);
    }
    return 0;
}