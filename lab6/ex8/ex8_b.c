/* Laboratory 6 - Exercise 8b */

#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

#define NO_OVERFLOW 0
#define YES_OVERFLOW 1
#define FALSE 0
#define TRUE 1


int is_pythagorean_triple(int a, int b, int c, int *p_state, int *p_limit_exceed);


int main()
{
    int a, b, c;
    int val_max;
    int condition;
    int limit_exceed;
    int triple_found;

    val_max = sqrt(INT_MAX);

    for (a=1; a<=val_max; a++)
    {
        condition = NO_OVERFLOW;
        /* In the case of overflow of the sum is useless to analyze values of b and c greater than the current b and c (this is why in the two for loops there is the boolean condition: condition==NO_OVERFLOW).

        The for loops regarding variable b and c start from b=a and c=b to avoid the printing of equivalent triples such as:
        a=3 b=4 c=5
        a=4 b=3 c=5
        a=5 b=4 c=3
        */
        for (b=a; b<=val_max && condition==NO_OVERFLOW; b++)
        {
            triple_found = FALSE;
            limit_exceed = FALSE;

            /* If c^2>a^2+b^2, it is unnecessary try to find pythagorean triples with even higher values of c (this fact has been managed by the boolean variable limit_exceed) */
            for (c=b; (c<=val_max) && (condition==NO_OVERFLOW) && !triple_found && !limit_exceed; c++)
                if ( is_pythagorean_triple(a, b, c, &condition, &limit_exceed) )
                {
                    printf("A=%d B=%d C=%d is a Pythagorean triple\n", a, b, c);
                    triple_found = TRUE;
                }

        }

    }

    return 0;
}


int is_pythagorean_triple(int a, int b, int c, int *p_state, int *p_limit_exceed)
{
    int result;
    int a_square_plus_b_square;

    a_square_plus_b_square = a * a + b * b;

    /* Overflow check */
    if ( a_square_plus_b_square < 0 )
    {
        *p_state = YES_OVERFLOW;
        result = FALSE;
    }
    else
    {
        *p_state = NO_OVERFLOW;
        /* Check for exiting from the loop:
           for ( c=b; (c<=val_max) && (condition==NO_OVERFLOW) && !triple_found && !limit_exceed; c++ ) */
        if ( c*c>a_square_plus_b_square )
        {
            *p_limit_exceed = TRUE;
            result = FALSE;
        }
        else
            result = (a_square_plus_b_square==c*c);
    }

    return result;
}
