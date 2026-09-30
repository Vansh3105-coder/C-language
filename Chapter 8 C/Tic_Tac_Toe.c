// Tic Tac Toe game 

#include <stdio.h>
#include <string.h>
int main(void)
{
    int game[3][3] = {1,2,3,4,5,6,7,8,9};
    int i=0, j=0, position_1, position_2, win=0;

    // Printing the outline of the game board.
    printf("Here, take a look at your board.\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d  ", game[i][j]);
        }
        printf("\n");
        
    }
    char p1[100];
    char p2[100];
    printf("Enter the name of player 1:\n");
    fgets(p1, 100, stdin);
    p1[strcspn(p1, "\n")] = '\0';
    printf("Enter the name of player 2:\n");
    fgets(p2, 100, stdin);
    p2[strcspn(p2, "\n")] = '\0';

    printf("%s will start the game.\n", p1);

    for(int k=0; k<5; k++)
    {
        printf("%s, enter the position number:\n", p1);
        scanf("%d", &position_1);
        game[(position_1-1)/3][(position_1-1)%3] = 'O';
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%c  ", game[i][j]);
            }
            printf("\n");
        
        }
        
        if(k==4)
        {
            break;
        }
        printf("%s, enter the position number:\n", p2);
        scanf("%d", &position_2);
        game[(position_2-1)/3][(position_2-1)%3] = 'X';
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%c  ", game[i][j]);
            }
            printf("\n");
        }
        for(int i=0; i<3; i++)
        {
            if(k<2)
            {
                break;
            }
            if(game[i][0]=='O' && game[i][1]=='O' &&game[i][2]=='O')
            {
                printf("%s is the winner.\n",p1);
                win=1;
            }
            else if(game[i][0]=='X' && game[i][1]=='X' &&game[i][2]=='X')
            {
                printf("%s is the winner.\n",p2);
                win=1;
            }
        }
        if(win==1)
        {
            break;
        }
        for(int j=0; j<3; j++)
        {
            if(k<2)
            {
                break;
            }
            if(game[0][j]=='O' && game[1][j]=='O' &&game[2][j]=='O')
            {
                printf("%s is the winner.\n",p1);
                win=1;
            }
            else if(game[0][j]=='X' && game[1][j]=='X' &&game[2][j]=='X')
            {
                printf("%s is the winner.\n",p2);
                win=1;
            }
        }
        if(win==1)
        {
            break;
        }
        if(game[0][0]=='O' && game[1][1]=='O' && game[2][2]=='O')
        {
            printf("%s is the winner.\n",p1);
            win=1;
            break;
        }
        else if(game[0][0]=='X' && game[1][1]=='X' && game[2][2]=='X')
        {
            printf("%s is the winner.\n",p2);
            win=1;
            break;
        }
        if(game[0][2]=='O' && game[1][1]=='O' && game[2][0]=='O')
        {
            printf("%s is the winner.\n",p1);
            win=1;
            break;
        }
        else if(game[0][2]=='X' && game[1][1]=='X' && game[2][0]=='X')
        {
            printf("%s is the winner.\n",p2);
            win=1;
            break;
        }
    }
    if(win!=1)
    {
        printf("Nobody won. The game has tied.\n");
    }
}