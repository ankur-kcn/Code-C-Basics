#include <stdio.h>

int balance = 10000;

int deposit(int amount)
{
    balance = balance + amount;
    return balance;
}

int withdraw(int amount)
{
    balance = balance - amount;
    return balance;
}

void displayBalance()
{
    printf("New Balance --> ₹%d\n", balance);
}

int main()
{
    int opt;
    int Amount;
    printf("=========Menu=========\n");
    printf("1.Deposit Money\n");
    printf("2.Withdraw Money\n");
    printf("3.Display Balance\n");
    printf("Choose: ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        printf("Enter amount to deposit: ₹");
        scanf("%d", &Amount);
        deposit(Amount);
        displayBalance();
        break;

    case 2:
        printf("Enter amount to withdraw: ₹");
        scanf("%d", &Amount);
        withdraw(Amount);
        displayBalance();
        break;
    case 3:
        displayBalance();
        break;
    default:
        printf("Invalid Choice\n");
        break;
    }
    return 0;
}