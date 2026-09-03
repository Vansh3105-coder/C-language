// THE GAME OF ROCK, PAPER AND SCISSORS.

#include <stdio.h>
#include <conio.h>
int main(void)
{
    printf("Welcome to the Game of Rock, paper and scissors.\n");
    printf("This is a game of two persons.\n");
    printf("Here R stands for Rock. \n P stands for Paper. \n S stands for Scissors.\n");
    char x;
    int score1, score2;
    score1 = 0;
    score2 = 0;
    do
    {
        char a;
        printf("Player 1, choose from R, P and S:\n");
        a = getch();

        char b;
        printf("Now player 2 will choose:\n");
        b = getch();

        if (a == 'R' && b == 'P')
        {
            printf("Congratulations, Player 2 has won the game!!\n");
            score2++;
        }
        else if (a == 'P' && b == 'S')
        {
            printf("Congratulations, Player 2 has won the game!!\n");
            score2++;
        }
        else if (a == 'S' && b == 'R')
        {
            printf("Congratulations, Player 2 has won the game!!\n");
            score2++;
        }
        else if (a == 'R' && b == 'S')
        {
            printf("Congratulations, Player 1 has won the game!!\n");
            score1++;
        }
        else if (a == 'P' && b == 'R')
        {
            printf("Congratulations, Player 1 has won the game!!\n");
            score1++;
        }
        else if (a == 'S' && b == 'P')
        {
            printf("Congratulations, Player 1 has won the game!!\n");
            score1++;
        }
        else
        {
            printf("Ohh, the game has tied.\n");
        }
        printf("Want to play again? (y/n)\n");
        scanf(" %c", &x);
    } while (x == 'y');
    printf("The score of Player 1 is %d\n", score1);
    printf("The score of Player 2 is %d\n", score2);
    if(score1>score2)
    {
        printf("Player 1 is the final winner of the game.\n");
    }
    else if(score1<score2)
    {
        printf("Player 2 is the final winner of the game.\n");
    }
    else
    {
        printf("The score has tied.\n Nobody won the match.\n");
    }
    printf("Thanks for playing this game.\n");
    printf("Kindly Visit Again.\n");

    return 0;
}