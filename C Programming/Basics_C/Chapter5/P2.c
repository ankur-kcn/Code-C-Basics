#include<stdio.h>

void printNamaste();
void printBonjour();

int main(){
    char a;
    printf("Are You Indian or French? (I/F) :");
    scanf(" %c",&a);
    if(a == 'I' || a == 'i'){
        printNamaste();
    }
    else{
        printBonjour();
    }
    return 0;
}

void printNamaste(){
    printf("Namaste India!\n");
}

void printBonjour(){
    printf("Bonjour!\n");
}