//romainse
#include<stdio.h>
int romanise(int y,int k,char ch){
    int i,j;
    j=y/k;
    for(i=1;i<=j;i++){
        printf("%c",ch);
    }
    return(y%k);
}
int main(){
    int yr;
    printf("\nEnter year: ");
    scanf("%d",&yr);
    yr=romanise(yr,1000,'m');
    printf("\nhello test\n");
    yr=romanise(yr,500,'d');
    printf("\nhello 2nd tst\n");
    yr=romanise(yr,50,'i');
    return 0;
}