//  8. Railway Seat Reservation Mini Project (Array Indexing)
// Features:
// • 1D array to represent 50 seats (0 = empty, 1 = booked)
// • Booking, cancelling, viewing seats
// • Functions for each
// • Pointer for seat update
// Real use: Basic reservation logic.

#include <stdio.h>
int main()
{
    int choice;
    while (1)
    {
        printf("------ Railway Reservation System ------\n");
        printf("1. View Seat\n");
        printf("2. Book Seat\n");
        printf("3. Cancel Seat\n");
        printf("4. Exit\n");
        printf("Choose (1-4):\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            viewSeat();
            break;
        case 2:
            bookSeat();
            break;
        case 3:
            cancelSeat();
            break;
        case 4:
            printf("Sayonara! Have A Safe Journey!");
            return 0;

        default:
            printf("Invalid Choice! Try Again!\n");
            break;
        }
    }
    return 0;
}