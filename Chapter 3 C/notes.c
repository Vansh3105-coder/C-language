#include <stdio.h>
int main(void)
{
    // conditionals:
    /* 1) if - else
       2) switch statement*/
    /* if - else is the most used conditional statemnet. */
    // == is equals to = is used for assignments.
    // any non zero number inside if is true

    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

    if (age > 10)
    {
        printf("Your age is greater than 10\n");
    }
    else
    {
        printf("Your age is less than 10\n");
    }
    if (1)
    {
        printf("True\n");
    }
    if (0)
    {
        printf("False\n");
    }

// &&, || and ! are logical operators.
/* && is and operator and || is or operator. && mein dono true hone chahiye aur 
|| isme dono mein sa ek true hona chahiye */
// ! ye not operator h just like semiconductors isme results opposite kr dege.
/* Switch-Case: switch apko cases bnana mein help krta h aur agr first case match ho gya toh switch aga k sara cases
   k result bi print kr dege iska lie use krta h break taki sirf usi case k result k print ho na ki sab ka!!  */
   

int a =1; int b =1;
printf("The value of not a is %d\n", !a);

int d;
printf("Enter d:\n");
scanf("%d", &d);

switch(d){
    case 1: 
        printf("You entered 1\n");
        break;
    case 2:
        printf("You entered 2\n");
        break;
    default:
        printf("Nothing matched\n");
        break;
}

    return 0;
}