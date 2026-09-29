// Tic Tac Toe game 

#include <stdio.h>
int main(void)
{
    int game[3][3] = {1,2,3,4,5,6,7,8,9};
    int i=0, j=0;

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




}