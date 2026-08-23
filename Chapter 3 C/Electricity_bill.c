#include <stdio.h>
int main(void)
{
    float a;
    printf("Enter the amount of units used:\n");
    scanf("%f", &a);

    if (a <= 100)
    {
        printf("Your electircity bill is %.2f.\n", (a * 1.5) + 50);
    }
    else if (a > 100 && a <= 200)
    {
        printf("Your electricity bill is %.2f.\n", 150 + 50 + (a - 100) * 2.5);
    }
    else if (a > 200)
    {
        printf("Your electricity bill is %.2f.\n", 150 + 50 + 250 + (a - 200) * 4);
    }
    return 0;
}