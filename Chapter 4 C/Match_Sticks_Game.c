// The Sticks GAME!!!!
// Here, in this game u have been given 31 sticks on a table and each player have to pick a number of sticks ,max 4 at a time, one by one.
// The one picking the last stick will lose the game. Try not to pick that.

#include <stdio.h>
#include <conio.h>
int main(void)
{
    int sticks;
    sticks = 31;
    printf("There are total 31 sticks on a table.\nBoth the players will pick the stick(s) one by one.\n");
    do
    {
        int a, b;
        do
        {
            printf("Pick the sticks, Player 1 (1 to 4):\n");
            scanf("%d", &a);
            if (a < 1 || a > 4)
            {
                printf("Invalid! You can only pick between 1 and 4 sticks.\n");
            }
        } while (a < 1 || a > 4);
        sticks = sticks - a;
        printf("Total remaining sticks are %d.\n", sticks);
        if (sticks <= 0)
        {
            printf("Player 1 has picked the last stick. So, Player 2 is the winner of the game.\n");
            break;
        }

        do
        {
            printf("Pick the sticks, Player 2 (1 to 4):\n");
            scanf("%d", &b);
            if (b < 1 || b > 4)
            {
                printf("Invalid! You can only pick between 1 and 4 sticks.\n");
            }
        } while (b < 1 || b > 4);
        sticks = sticks - b;
        printf("Total remaining sticks are %d.\n", sticks);
        if (sticks <= 0)
        {
            printf("Player 2 has picked the last stick. So, Player 1 is the winner of the game.\n");
            break;
        }

    } while (sticks > 0);

    return 0;
}