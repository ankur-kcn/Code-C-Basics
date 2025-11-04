#include <stdio.h>

float inputItems(int itemNumber)
{
    float price;
    printf("Item %d Price : ₹", itemNumber);
    scanf("%f", &price);
    return price;
}

float calculateTotal(float item1, float item2, float item3)
{
    return item1 + item2 + item3;
}

float applyDiscount(float total)
{
    if (total < 1000)
        return 0.0;
    else if (total >=1000 && total <= 5000)
        return 0.10 * total;
    else
        return 0.20 * total;
}

void displayBill(float total, float discount, float finalBill)
{
    printf("\n======== Bill ========");
    printf("\nTotal = ₹%.2f\n", total);
    printf("Discount = ₹%.2f\n", discount);
    printf("----------------------\n");
    printf("Final Bill = ₹%.2f\n", finalBill);
}

int main()
{
    float item1, item2, item3, total, discount, finalBill;

    item1 = inputItems(1);
    item2 = inputItems(2);
    item3 = inputItems(3);

    total = calculateTotal(item1, item2, item3);
    discount = applyDiscount(total);
    finalBill = total - discount;

    displayBill(total, discount, finalBill);

    return 0;
}
