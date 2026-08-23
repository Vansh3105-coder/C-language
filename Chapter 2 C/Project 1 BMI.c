#include <stdio.h>
int main(void)
{
    float a;
    printf("Enter in weight (in kg):\n");
    scanf("%f", &a);

    float b;
    printf("Enter height (in cm):\n");
    scanf("%f", &b);

    printf("The Value of BMI is: %.3f", (a*10000)/(b*b));
    return 0;
}
