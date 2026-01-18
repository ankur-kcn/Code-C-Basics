// * * * *
// * * *
// * *  
// *

#include<stdio.h>
int main(){
int n;
printf("Enter the number : ");
scanf("%d",&n);
// for(int i=1;i<=n;i++){ //no of lines / rows ->i
//     for(int j=n;j>=i;j--){ //no of elements / columns ->j
//         printf("* ");
//     }
//     printf("\n");
// }
//another way using variable
int a=n;
for(int i=1;i<=n;i++){ //no of lines / rows ->i
    for(int j=1;j<=a;j++){ //no of elements / columns ->j
        printf("* ");
    }
    a--;
    printf("\n");
}
return 0;
}