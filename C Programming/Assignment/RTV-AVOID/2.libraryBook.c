// 2. Library Book Inventory System (Array + Pointer Arithmetic)
// Features:
// • Store book IDs in a 1D array
// • Add / delete / search books (linear search)
// • Show available books
// • Use pointers to access array elements
// Real use: Simple library stock tracking.

#include<stdio.h>

int main(){
    int books[100];
    int size=0;
    int choice,id,ind;
    while(1){
        printf("----- Library Book Inventory System -----\n");
        printf("1.Add Book\n");
        printf("2.Delete Book\n");
        printf("3.Search Book\n");
        printf("4.Show Available Books\n");
        printf("5.Exit\n");
        printf("Choose (1-5): \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter Book Id to Add: ");
            scanf("%d",id);
            break;
        case 2:
            printf("Enter Book Id to Delete: ");
            scanf("%d",id);
            break;
        case 3:
            printf("Enter Book Id to Search: ");
            scanf("%d",id);
            break;
        case 4:
            
            break;
        case 5:
            printf("Sayonara! Thanks For Using Our Service!\n");
            break;
            
            default:
            printf("Invalid! Try Again!\n");
            break;
        }
    }
    return 0;
}