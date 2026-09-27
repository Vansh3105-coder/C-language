// User can book the ticket acc to his/her will.
// If the seat is available the system will book it and if not then it will tell the user to choose any other seat.

#include <stdio.h>
int main(void)
{
    int seat_num[20] = {0,0,0,0,1,0,1,0,1,0,1,0,0,0,1,0,0,0,0,1};
    int preferred_seat;
    printf("==================Welcome=================\n");
    printf("Enter your preferred seat number: ");
    scanf("%d", &preferred_seat);
    // Core Logic 
    if(seat_num[preferred_seat-1]==0)
    {
        printf("This seat is available.\n");
        printf("We have successfully booked this seat for you.\n");
        printf("Thanks for your arrival.\n");
        printf("=============See you next time=============\n");
    }
    else
    {
        printf("Sadly, the seat you are willing for is already booked.\n");
    }
}