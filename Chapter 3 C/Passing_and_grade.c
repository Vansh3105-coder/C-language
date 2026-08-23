#include <stdio.h>
int main(void)
{
    float a;
    printf("Enter marks obtained in English:\n");
    scanf("%f", &a);

    float b;
    printf("Enter marks obtained in Physics:\n");
    scanf("%f", &b);

    float c;
    printf("Enter marks obtained in Chemistry:\n");
    scanf("%f", &c);

    float d;
    printf("Enter marks obtained in Mathematics:\n");
    scanf("%f", &d);

    float e;
    printf("Enter marks obtained in 5th subject:\n");
    scanf("%f", &e);

    float p;
    p = (a + b + c + d + e) / 5;
    printf("So, your percentage in 12th is %.2f\n", p);

    if (p >= 34)
    {
        printf("Congo!, you have passed.\n");
    }
    if (p >= 90)
    {
        printf("You have secured grade A.\n");
    }
    else if (80 <= p && p < 90)
    {
        printf("You have secured grade B.\n");
    }
    else if (70 <= p && p < 80)
    {
        printf("You have secured grade C.\n");
    }
    else if (34 <= p && p < 70)
    {
        printf("You have passed only.\n");
    }
    else if(p<34)
    {   
        printf("Unfortunately you have failed.\n");
    }
    return 0;
}
