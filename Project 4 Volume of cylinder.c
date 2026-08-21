#include <stdio.h>
int main(void)
{
    float a;
    printf("Enter radius of cylinder:\n");
    scanf("%f", &a);

    float b;
    printf("Enter height of cylinder:\n");
    scanf("%f", &b);

    float pie;
    pie = 3.14;
    printf("The volume of cylinder is %.2f \n", pie*a*a*b);

    printf("The curved surface area of cylinder is %.2f \n", 2*pie*a*b);

    printf("The total surface area of cylinder is %.2f \n", 2*pie*a*a + 2*pie*a*b);
    return 0;
}