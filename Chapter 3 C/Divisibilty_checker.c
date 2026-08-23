#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter divident:\n");
    scanf("%d", &a);

    int b;
    printf("Enter divisor:\n");
    scanf("%d", &b);
    if (b == 0)
    {
        printf("Division not defined!!\n");
        printf("Use any other value of divisor except 0.\n");
    }
    else
    {
        if (a % b == 0)
        {
            printf("%d is divisible by %d.\n", a, b);
        }
        else
        {
            printf("%d is not divisible by %d.\n", a, b);
            printf("The remainder when %d is divided by %d is %d.\n", a, b, a % b);
        }
    }

    return 0;
}