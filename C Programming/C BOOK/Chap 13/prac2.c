#include<stdio.h>
int main(){
    int arr[]={10.20,30,45,67,56,74};
    int i=4, *j,*k,*x,*y;
    j= &i;
    j=j+9;
    k= &i;
    printf("k = %u\n",k);
    k= k-3;
    printf("-k = %u\n",k);
    x=&arr[1];
    printf("x = %u\n",x);
    y=&arr[5];
    printf("y = %u\n",y);
    printf("y-x = %d\n",y-x);
    j= &arr[4];
    k=(arr+4);
    printf("arr wala = %d\n",&arr[0]);
    printf("arr wala k= %d\n",k);
    if(j==k)
    printf("The two pointers point to the same location\n");
    else
    printf("The two pointers point to different location\n");
    return 0;
}