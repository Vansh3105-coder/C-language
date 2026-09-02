#include <stdio.h>
int main(void)
{
    char a;
    int c;
    c = 10000;
    do
    {
        printf("Choose the task you want to perform from the following list:\n");
        printf("A) Check Balance\n");
        printf("B) Deposit Cash\n");
        printf("C) Withdraw Cash\n");
        printf("D) EXit\n");
        scanf(" %c", &a);
        if (a == 'A')
        {
            printf("Your current account balance is %d\n", c);
        }
        else if (a == 'B')
        {
            int d;
            printf("How much cash do u want to deposti?\n");
            scanf("%d", &d);
            c = c + d;
            printf("Your updated account balance is %d\n", c);
        }
        else if (a == 'C')
        {
            int t;
            printf("Enter the amount you want to withdraw:\n");
            scanf("%d", &t);
            if (t <= c)
            {
                c = c - t;
                printf("Money left in your account is %d\n", c);
            }
            else
            {
                printf("Insufficient balance in your account!\n");
            }
        }

    } while (a == 'A' || a == 'B' || a == 'C');
    printf("Thanks for your visit to our ATM.\n");
    printf("======Wish You a Good Day!=======\n");

    return 0;
}