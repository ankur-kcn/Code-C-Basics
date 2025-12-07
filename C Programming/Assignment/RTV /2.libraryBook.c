// 2. Library Book Inventory System (Array + Pointer Arithmetic)
// Features:
// • Store book IDs in a 1D array
// • Add / delete / search books (linear search)
// • Show available books
// • Use pointers to access array elements
// Real use: Simple library stock tracking.

#include<stdio.h>
#define BOOK 100
void addBook(int *b){
    int id;
    printf("Enter Book Id to Add: ");
    scanf("%d",&id);
    for(int i=0;i< BOOK;i++){
        if(*(b+i)==0){ // b[i]
            *(b+i)=id;
            printf("Book %d Added at Position %d\n", id, i+1);
            return;
        }
    }
    printf("Full! Cannot Add Books.\n");
}
void deleteBook(int *b){
    int id;
    printf("Enter Book Id to Delete: ");
    scanf("%d",&id);
    for(int i=0;i< BOOK;i++){
        if(*(b+i)==id){
            *(b+i)=0;
            printf("Book %d Deleted from Position %d\n", id, i+1);
            return;
        }
    }
    printf("Book ID %d Not Found in Library.\n", id);
}
void searchBook(int *b){
    int id;
    printf("Enter Book Id to Search: ");
    scanf("%d",&id);
    for(int i=0;i< BOOK;i++){
        if(*(b+i)==id){
            printf("Book ID %d Found at Position %d\n", id, i+1);
            return;
        }
    }
    printf("Book ID %d Not Found !\n", id);
}
void avaialableBook(int *b) {
    printf("\n----- Available Books -----\n");
    for (int i = 0; i < BOOK; i++) {
        if (*(b + i) != 0) {   // prints only when it's not empty
            printf("Index %d : Book ID %d\n", i+1, *(b + i));
        }
    }
    printf("---------------------------\n\n");
}
int main(){
    int books[BOOK]={0};
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
            addBook(books);
            break;
        case 2:
            deleteBook(books);
            break;
        case 3:
        searchBook(books);
            break;
        case 4:
            avaialableBook(books);
            break;
        case 5:
            printf("Sayonara! Thanks For Using Our Service!\n");
            return 0;
            
            default:
            printf("Invalid! Try Again!\n");
            break;
        }
    }
    return 0;
}