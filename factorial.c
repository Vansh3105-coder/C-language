#include <stdio.h>
#include <math.h>

int factorial(int);
int main(void)
{
    int a;
    printf("Enter a:\n");
    scanf("%d",&a);
    factorial(a);
    printf("The factorial of %d is %d.\n",a,factorial(a));
}


int factorial(int x)
{
    if(x==1 || x==0)
    {
        return 1;
    }
    else 
    {
        return (x*factorial(x-1));
    }
}