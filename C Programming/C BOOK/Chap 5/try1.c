#include<stdio.h>
int main(){
    // i=0 coz i already gets incremented while printing
    int i=0;
    while(i++<10){
        printf("%d\n",i);
    }

    //; while try
    int i=1;
    while(i<=10)
    ;
    {
        printf("%d\n",i);
        i=i+1;
    }

    //preincrement
    // <= it's already getting incremented before printing so it will check 10 before print statement
    int i=0;
    while(++i<=10){
        printf("%d\n",i);
    }
    return 0;
}