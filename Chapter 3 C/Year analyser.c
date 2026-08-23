#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter the year:\n");
    scanf("%d", &a);

    if (a % 4 == 0 && a % 100 != 0)
    {
        printf("It is a leap year!\n");
    }
    else if (a % 4 != 0 && a % 100 != 0)
    {
        printf("It is neither a leap year nor a century year!\n");
    }
    else if (a % 100 == 0 && a%400 != 0)
    {
        printf("Its a century year congo!\n");
        printf("WELCOME TO A NEW CENTURY, A new era!");
    }
    else if (a % 400 == 0)
    {
        printf("Damn, it is a leap year and also a century year!\n");
        printf("WELCOME TO A NEW CENTURY, A new era!");
    }
    return 0;
}