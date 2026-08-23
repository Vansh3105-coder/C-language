#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter time in second(s):\n");
    scanf("%d", &a);

    int b;
    b = a/3600;

    int c;
    c = a%3600/60;

    int d;
    d = a%60;

    printf("It is %d hours", b);
    printf(", %d minutes", c);
    printf(", and %d seconds", d);
}