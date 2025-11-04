#include <stdio.h>
#include <string.h>

void inputDetails(char name[], float *basic) {
    strcpy(name, "Ankit");
    *basic = 25000.0;
}

void calculateSalary(float basic, float *da, float *hra, float *gross, float *tax, float *net) {
    *da = 0.10 * basic;             
    *hra = 0.15 * basic;            
    *gross = basic + *da + *hra;    
    *tax = 0.05 * (*gross);         
    *net = *gross - *tax;           
}

void displaySlip(char name[], float basic, float da, float hra, float gross, float tax, float net) {
    printf("====== Salary Slip ======\n");
    printf("Employee Name : %s\n", name);
    printf("Basic Salary  : ₹%.2f\n", basic);
    printf("DA (10%%)      : ₹%.2f\n", da);
    printf("HRA (15%%)     : ₹%.2f\n", hra);
    printf("Gross Salary  : ₹%.2f\n", gross);
    printf("Tax (5%%)      : ₹%.2f\n", tax);
    printf("Net Salary    : ₹%.2f\n", net);
}

int main() {
    char name[50];
    float basic, da, hra, gross, tax, net;

    inputDetails(name, &basic);
    calculateSalary(basic, &da, &hra, &gross, &tax, &net);
    displaySlip(name, basic, da, hra, gross, tax, net);

    return 0;
}
