#include <stdio.h>
int main(void)
{
    

    int x;
    int y;
    printf("Enter the length of the rectangle\n");
    scanf("%d", &x);
    printf("Enter the width of the rectangle\n");
    scanf("%d", &y);

    printf("The area of rectangle having length %d", x );
    printf(" and width %d", y);
    printf(" is");
    printf(" %d\n" ,x*y);

    printf("The perimeter of the rectangle is %d", 2*x + 2*y);
    return 0;
}