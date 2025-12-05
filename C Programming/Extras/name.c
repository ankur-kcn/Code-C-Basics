#include <stdio.h>

int main() {
    char n[] = "Ankur";   
    // char n[] = {'A','n','k','u','r','\0'};   
    char *p = n;       

    while (*p != '\0') {   
        printf("%c\n", *p); 
        p++;                
    }

    return 0;
}
