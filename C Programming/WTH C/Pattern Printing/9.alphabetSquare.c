// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){ 
//         int a=97;
//         for(int j=1;j<=n;j++){ 
//             printf("%c ",(char)a);
//             a++;
//         }
//         printf("\n"); 
//     }
//     return 0;
// }

//single line
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){ 
//         int a=97;
//         for(int j=1;j<=i;j++){ 
//             printf("%c ",(char)a);
//             a++;
//         }
//         printf("\n"); 
//     }
//     return 0;
// }

//ulte alphabets
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ 
        int a=97;
        for(int j=1;j<=n+1-i;j++){ 
            printf("%c ",(char)a);
            a++;
        }
        printf("\n"); 
    }
    return 0;
}