#include <stdio.h>
int main(void)
{
    int i = 10; // declare and initialize i with 10 
    int j = i; 
    printf("The value of i is %d and value of j is %d ", i , j);
    //%d is called format specifier 
    // j1 = j - i + 1 valid h ye 
    // invalid : a is used before declaration.
    // we can assign multiple variables same values.
    // + -- add, - -- subtract, * -- multiply, / -- divide, % -- modulus. 
    // modulus operator is used to get the value  of the remainder. 
    // there is no operator for exponentiation in C.
    // */% are the top in priority list and +- are second least one is =
    // parenthesis will be done first as always. 
    // typecasting mein kisi bi ek variable k data type change kr skta h.
    /* int -- float and vice versa. for eg:
    int n = 45
    float m = 32.44
    n = (int)m typecasting syntax m ko float sa int bna dia                     */
    return 0;
}