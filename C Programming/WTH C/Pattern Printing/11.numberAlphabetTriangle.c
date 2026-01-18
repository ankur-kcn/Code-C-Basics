// 1 
// a b 
// 1 2 3 
// a b c d 
// 1 2 3 4 5 
// a b c d e f 
// hint: if odd no of rows -> print number | if even no of rows -> print character

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ 
        int a=97;
        for(int j=1;j<=i;j++){ 
            if(i%2!=0){
                printf("%d ",j);
            }
            else{
                printf("%c ",(char)a);
            }
            a++;
        }
        printf("\n"); 
    }
    return 0;
}