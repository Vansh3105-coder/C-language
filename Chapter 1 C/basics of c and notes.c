#include <stdio.h>
int main(void)
{
    int a; // Declaration of variable 
    a = 3; // Initialization of variable
    printf("hello world\n");
    printf("The output of this program is %d\n", a);
    int b;
    scanf("%d", &b);  // scanf user se input lege lekin sirf abi ek digit ya char  mein 
    printf("The value of b is %d\n", b);
    float c;
    scanf("%f", &c);
    printf("The value of c is %f\n", c);
    char d;
    scanf("%c", &d);
    printf("The value of d is %c\n", d);














    return 0;
/* int a mein a sirf integer ho skta h float mein  decimal points bi ho skta h aur char mein sirf alphabets ayega.
variales ko hum comments m bi declare kr skte h, char m alphabet dala toh usko single quote m hi dalne h*/

/* c language m 32 keywords reserved hota h inke nam sa variable ni bn skte.*/
}