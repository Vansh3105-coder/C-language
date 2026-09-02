#include <stdio.h>
int main(void)
{
    char u;
    do{
        int a,b,c,d,e;
        printf("Enter marks obtained in English:\n");
        scanf("%d", &a);

        printf("Enter marks obtained in Physics:\n");
        scanf("%d", &b);
        
        printf("Enter marks obtained in Chemistry:\n");
        scanf("%d", &c);

        printf("Enter marks obtained in Maths:\n");
        scanf("%d", &d);

        printf("Enter marks obtained in 5th subject:\n");
        scanf("%d", &e);

        float p = (a+b+c+d+e)/5;
        int x = (a+b+c+d+e);
        printf("Your aggregate percentage in 12th is %.2f\n", p);
        printf("Your aggregate marks in 12th is %d\n", x);

        if (p >= 40 && a >= 33 && b >= 33 && c >= 33 && d >= 33 && e >= 33)
        {
            printf("Congo!, you have passed.\n");
        }
        if (p >= 90 && a >= 33 && b >= 33 && c >= 33 && d >= 33 && e >= 33)
        {
            printf("You have secured grade A.\n");
        }
        else if (80 <= p && p < 90 && a >= 33 && b >= 33 && c >= 33 && d >= 33 && e >= 33)
        {
            printf("You have secured grade B.\n");
        }
        else if (70 <= p && p < 80 && a >= 33 && b >= 33 && c >= 33 && d >= 33 && e >= 33)
        {
            printf("You have secured grade C.\n");
        }
        else if (40 <= p && p < 70 && a >= 33 && b >= 33 && c >= 33 && d >= 33 && e >= 33)
        {
            printf("You have passed only.\n");
        }
        else if (p < 40 || a < 33 || b < 33 || c < 33 || d < 33 || e < 33)
        {
            printf("Unfortunately you have failed.\n");
            if (a < 33)
            {
                printf("You have failed in English.\n");
            }
            if (b < 33)
            {
                printf("You have failed in Physics.\n");
            }
            if (c < 33)
            {
                printf("You have failed in Chemistry.\n");
            }
            if (d < 33)
            {   
                printf("You have failed in Mathematics.\n");
            }
            if (e < 33)
            {
                printf("You have failed in your 5th subject.\n");
            }
        }   
        printf("\nWant to evaluate other's grades? (y/n): ");
        scanf(" %c", &u);
    } while (u == 'y' || u == 'Y');
    printf("Thank You for using Grade Chaecker.\n");
    printf("Hope your experience with went well.\n");
    return 0;

}