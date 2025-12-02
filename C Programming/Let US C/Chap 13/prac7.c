// adjacent element swap
#include<stdio.h>
int main(){
    int n[]={1,2,3,4,5,6,7,78};
    int i,t;
    for(i=0;i<7;i=i+2){
        t=n[i];
        n[i]=n[i+1];
        n[i+1]=t;
    }
     for(i=0;i<8;i++){
        printf("%d ",n[i]);
    }
    return 0;
}