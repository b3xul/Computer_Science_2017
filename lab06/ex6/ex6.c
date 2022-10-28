/* Laboratory 6 - Exercise 6 */

#include <stdio.h>
#include <stdlib.h>

#define NUM_SIZE 20


int from_base_10_to_base_n(int n, int base, int v[]);
int is_palindrome(int n, int base, int v[], int dim);


int main()
{
    int n, i, n_max, base, n_digits;
    int v[NUM_SIZE]; /* Vector used to store the representation of the number in a given base */

    do
    {
        printf("Insert a number: ");
        scanf("%d", &n_max);
    }
    while (n_max<1);

    for (n=2; n<=n_max; n++) /* Given a number n */
    {
        for (base=2; base<n; base++)
        {
            /* Convert the number in a given base */
            n_digits = from_base_10_to_base_n(n, base, v);

            if ( is_palindrome(n, base, v, n_digits) == 1) /* If the number is palindrome */
            {
                /* Print it */
                printf("PALINDROME: BASE(10)= %d  ---  BASE(%d)=", n, base);
                for (i=n_digits-1; i>=0; i--)
                {
                    printf(" %d", v[i]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}


int from_base_10_to_base_n(int n, int base, int v[])
{
    /* It converts the number in a given base, saves the result in v,
       and returns the number of digits of the number.
       The least significant digit is stored in the position v[0] of the vector.
       */
    int n_digits;

    n_digits = 0;
    while (n != 0)
    {
        v[n_digits] = n % base; /* Reminder */
        n = n / base;
        n_digits++;
    }

    return n_digits;
}


int is_palindrome(int n, int base, int v[], int dim)
{
    /* Check if the number stored in v is palindrome */
    int i, new_num, multiplier;

    new_num = 0;
    multiplier = 1;
    for (i=dim-1; i>=0; i--)
    {
        new_num = new_num + v[i] * multiplier;
        multiplier = multiplier * base;
    }

    if ( new_num==n )
    {
        return 1; /* Palindrome */
    }
    else
    {
        return 0; /* Not palindrome */
    }
}
