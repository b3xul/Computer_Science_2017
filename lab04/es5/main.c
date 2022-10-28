#include <stdio.h>

#define VAL 20

int main()
{
    int i, fn, fn_1, fn_2;

    printf("The Fibonacci sequence is:\n");
    /* initialization with the first two values */
    fn_1 = 0;
    fn_2 = 1;
    printf("%d %d", fn_1, fn_2);
    i = 3;

    while (i<VAL)
    {
        fn = fn_2 + fn_1;
        printf(" %d",fn);
        fn_1 = fn_2;
        fn_2=fn;
        i=i+1;
    }

    printf("\nThe sequence Xi = Xi-1 * Xi-2 is:\n");
    /* initialization with the first two values */
    fn_1 = 1;
    fn_2 = 2;
    printf("%d %d", fn_1, fn_2);
    i = 3;

    while (fn_2 >= fn_1)
    {
        fn = fn_2 * fn_1;
        printf(" %d",fn);
        fn_1 = fn_2;
        fn_2=fn;
        i=i+1;
    }
    printf("\nThe maximum number of elements of the sequence that can be represented is %d:\n",i-2);

    return 0;
}
