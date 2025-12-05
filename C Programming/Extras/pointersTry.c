#include <stdio.h>
void disp(int *p, int n)
{
    int i = 1;
    while (i <= n)
    {
        printf("%d", *p);
        p++;
        i++;
    }
}
int main()
{
    int i, *p;
    int marks[] = {55, 65, 75, 56, 78, 78, 90};
    p = marks;
        disp(p,7); //to pass the whole array to another function
        p++;
    return 0;
}