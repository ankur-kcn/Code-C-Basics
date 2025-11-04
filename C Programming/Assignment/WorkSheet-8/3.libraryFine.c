#include <stdio.h>

int inputDays() {
    int issued, returned,fineDays;
    printf("Enter the days book issued for: ");
    scanf("%d", &issued);
    printf("Enter days after which the book is returned: ");
    scanf("%d", &returned);
    if(returned > issued){
        fineDays= returned-issued;
    }
    return fineDays;
}

int calculateFine(int fineDays) {
    int fine = 0;
    if (fineDays == 0) {
        fine = 0;
    } else if (fineDays <= 15) {
        fine = fineDays * 1;
    } else if (fineDays >=16 && fineDays <= 30) {
        fine = fineDays * 2;
    } else {
        fine = fineDays * 5;
    }
    return fine;
}

void displayFine(int fine) {
    printf("Fine = ₹%d\n", fine);
}

int main() {
    int fineDays = inputDays();
    int fine = calculateFine(fineDays);
    displayFine(fine);
    return 0;
}
