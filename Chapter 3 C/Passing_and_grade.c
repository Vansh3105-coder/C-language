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

    if (p >= 40 && a>33 && b>33 && c>33 && d>33 && e>33)
    {
        printf("Congo!, you have passed.\n");
    }
    if (p >= 90 && a>33 && b>33 && c>33 && d>33 && e>33)
    {
        printf("You have secured grade A.\n");
    }
    else if (80 <= p && p < 90 && a>33 && b>33 && c>33 && d>33 && e>33)
    {
        printf("You have secured grade B.\n");
    }
    else if (70 <= p && p < 80 && a>33 && b>33 && c>33 && d>33 && e>33)
    {
        printf("You have secured grade C.\n");
    }
    else if (40 < p && p < 70 && a>33 && b>33 && c>33 && d>33 && e>33)
    {
        printf("You have passed only.\n");
    }
    else if(p<40 || a<33 || b<33 || c<33 || d<33 || e<33)
    {   
        printf("Unfortunately you have failed.\n");
        if (a<33){
            printf("You have failed in English.\n");
        }
        if (b<33){
            printf("You have failed in Physics.\n");
        }
        if (c<33){
            printf("You have failed in Chemistry.\n");
        }
        if (d<33){
            printf("You have failed in Mathematics.\n");
        }
        if (e<33){
            printf("You have failed in your 5th subject.\n");
        }

    }
    return 0;
}
