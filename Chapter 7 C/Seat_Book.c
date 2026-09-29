// User can book the ticket acc to his/her will.
// If the seat is available the system will book it and if not then it will tell the user to choose any other seat.

#include <stdio.h>
int main(void)
{
    int seat_num[20] = {0,0,0,0,1,0,1,0,1,0,1,0,0,0,1,0,0,0,0,1};
    int preferred_seat;
    int choice;
    printf("==================Welcome=================\n");


    do
    {
        do
        {
            do
            {
                printf("Enter your preferred seat number: ");
                scanf("%d", &preferred_seat);
                
                if(preferred_seat < 21 && preferred_seat > 0)
                {
                    if(seat_num[preferred_seat-1]==0)
                    {
                        printf("This seat is available.\n");
                        printf("We have successfully booked this seat for you.\n");
                    }
                    else
                    {
                        printf("Sadly, the seat you are willing for is already booked.\n");
                    }
                }
                else
                {
                    printf("Invalid entry.\n");
                }
            }while(preferred_seat > 20 || preferred_seat < 0);

        }while(seat_num[preferred_seat-1]!=0);
        seat_num[preferred_seat-1]=1;
        printf("Do you want to book another seat? (0 for no / 1 for yes)\n");
        scanf("%d", &choice);

    }while(choice == 1);
    printf("Thank you for visiting us.\n");
    printf("May you have a great experience with us.\n");
    printf("=============See you next time=============\n");
    
}