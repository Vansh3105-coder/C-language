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

int a =1; int b =1;
printf("The value of not a is %d", !a);

    return 0;
}