#include <stdio.h>
int main()
{
    int a = 59841;
    //right to left

        while (a > 0)
        {
            int dig = a % 10;
            printf("%d \n", dig);
            a = a / 10;
        }
        
//left to right

        int div = 1;
        int temp = a;
        while (temp >= 10)
        {
            temp = temp / 10;
            div = div * 10;
            // printf("%d ",temp);
        }
        while (div > 0)
        {
            int digi = a / div;
            printf("%d \n", digi);
            a = a % div;
            div = div / 10;
        }


    return 0;
}