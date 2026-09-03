#include <stdio.h>
int main(void)
{
    int sum, num, digits;
    sum = 0;
    digits = 0;

    printf("Enter the number:\n");
    scanf("%d", &num);
    

    do
    {
        int digit;
        digit = num % 10;

        sum = sum + digit;
        num = num / 10;
        digits++;
    } while (num != 0);
    printf("The sum of all digits of entered number is: %d\n", sum);
    printf("The total digits in the entered number is: %d\n", digits);
    return 0;
}
