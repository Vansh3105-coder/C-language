#include <stdio.h>
int main(void)
{
    float a;
    printf("Enter the principal amount:\n");
    scanf("%f", &a);

    float b;
    printf("Enter number of years:\n");
    scanf("%f", &b);

    float c;
    printf("Enter interest rate(in %%):\n");
    scanf("%f", &c);

    printf("Value of simple interest is %.2f", (a*b*c)/100);
    return 0;
}