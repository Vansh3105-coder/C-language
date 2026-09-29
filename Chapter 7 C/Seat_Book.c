// User can book the ticket acc to his/her will.
// If the seat is available the system will book it and if not then it will tell the user to choose any other seat.

#include <stdio.h>
int main(void)
{
    int seat_num[20] = {0,0,0,0,1,0,1,0,1,0,1,0,0,0,1,0,0,0,0,1};
    int preferred_seat;
    int choice;
    int j = 0;


    // Welcome msg
    printf("==================Welcome=================\n");
    printf("Here, have a look at the seat map of the bus.\n");
    printf("'O' represents that the seat is available.\n");
    printf("'X' represents that the seat is already booked.\n");

    // Seat Map
    for(j=0; j<20; j++)
    {
        if(seat_num[j]==0)
        {
            printf("O ");
        }
        else
        {
            printf("X ");
        }
        if((j+1)%4==0)
        {
            printf("\n");
        }
    }
    // Core logic and boundary checks 
    do
    {
        do
        {
            do
            {
                printf("Enter your preferred seat number: ");
                scanf("%d", &preferred_seat);
                
                // First boundary check for entry greater than 21 and less than 0.
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
            }while(preferred_seat > 20 || preferred_seat < 1);

        // Checks for the availablity of the seat entered by the user and asks for another input if not available.
        }while(seat_num[preferred_seat-1]!=0);
        seat_num[preferred_seat-1]=1;
        printf("Do you want to book another seat? (0 for no / 1 for yes)\n");
        scanf("%d", &choice);

    // Asks the user wether he/she wants to book another ticket or not if yes then the entire loop re-run and if no then the code terminates with the outro msg.
    }while(choice == 1);

    // Outro msg
    printf("Thank you for visiting us.\n");
    printf("May you have a great experience with us.\n");
    printf("=============See you next time=============\n");
 
    return 0;
}
