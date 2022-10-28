/* Laboratory 6 - Exercise 4 */

#include <stdio.h>


int power(int base, int exponent);


int main()
{
    int a, b; /* Operands */
    int res;  /* Result */

    printf("Insert two numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    res = power(a,b);
    printf("The result worked out by the power function is %d\n", res);

    return 0;
}


int power(int base, int exponent)
{
    int result=1;
    int i;

    for (i=0; i<exponent; i++)
        result *= base; /* Equivalently: result=result*base; */

    return result;
}
