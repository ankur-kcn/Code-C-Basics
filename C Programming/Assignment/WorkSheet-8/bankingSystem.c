#include<stdio.h>

int deposit(){
    int balance=0;
    int dep;
    printf("Enter the amount of money to be deposited: ");
    scanf("%d",&dep);
    balance=10000+dep;
    return balance;

}

int withdraw(){
    int balance=0;
    int wid;
    printf("Enter the amount to withdraw: ");
    scanf("%d",&wid);
    balance=10000-wid;
    return balance;

}

void displayBalance(int balance){
    printf("The New Balance: %d",balance);

}

int main(){
    int opt;
    int Withdraw;
    int Deposit;
    // printf("=========Menu=========")
    // printf("1.Deposit Money\n");
    // printf("2.Withdraw Money\n");
    // printf("3.Display Balance\n");
    // printf("Choose: ");
    // scanf("%d",opt);
    // switch (opt){
    //     case 1: 
    // }

    return 0;
}