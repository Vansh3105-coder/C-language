// The Number Guessing Game being played by 2 players.
// The number to be guessed must be between 0 and 100.

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int secret;
    printf("Enter the number you want to be guessed:\n");
    scanf("%d", &secret);
    system("cls");
    int attempt;
    attempt = 0;
    int b;
    do
    {
        printf("Guess the number:\n");
        scanf(" %d", &b);
        attempt++;
        if (b < secret)
        {
            printf("Higher!!\n");
        }
        else if (b > secret)
        {
            printf("Lower!!\n");
        }
        else
        {
            printf("Congratulations, you have guessed the number!!!\n");
            printf("You have guessed the number in %d attempts.", attempt);
        }
    } while (b != secret);

    return 0;
}
