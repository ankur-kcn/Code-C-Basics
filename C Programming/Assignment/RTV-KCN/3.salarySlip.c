// 3. Employee Salary Slip Generator (Functions + Array)
// Features:
// • Input salary for N employees
// • Use functions for:
//     o DA, HRA, PF calculation
//     o Net salary
// • Use array to store salaries
// • Pointer to iterate and update data
// Real use: Small business salary calculator.

#include <stdio.h>
float daCal(int basic)
{
    return .10 * basic;
}
float hraCal(int basic)
{
    return .15 * basic;
}
float pfCal(int basic)
{
    return .12 * basic;
}
float netSalary(int basic,float da,float hra,float pf)
{
    return basic + da + hra - pf;
}
void display(int basic,float da,float hra,float pf,float netSalary)
{
    printf("Basic Salary = ₹%d\n",basic);
    printf("Dearness Allowance = ₹%.2f\n",da);
    printf("House Rent Allowance = ₹%.2f\n",hra);
    printf("Provident Fund = ₹%.2f\n",pf);
    printf("---------------------------\n");
    printf("Net Salary = ₹%.2f\n",netSalary);
    printf("---------------------------\n\n");
}
int main()
{
    int n, arr[100];
    float bas, da, hra, pf, netSal;
    printf("Enter the no. of employees: ");
    scanf("%d", &n);
    printf("----- Enter Basic Salary of Each Employee -----\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d : ₹", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n---------- Salary Slip ----------\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("----- Employee %d -----\n", i + 1);
        bas = arr[i];
        da = daCal(bas);
        hra = hraCal(bas);
        pf = pfCal(bas);
        netSal = netSalary(bas, da, hra, pf);
        display(bas, da, hra, pf, netSal);
    }
    return 0;
}