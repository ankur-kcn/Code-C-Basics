#include<stdio.h>
void display(int *ptr,int n){
    int i;
    for(i=0;i<n;i++){
        printf("element = %d\n",*ptr);
        ptr++;
    }
}
int main(){
    int num[]={24,32,12,44,56,17};
    display(num,6);
    return 0;
}