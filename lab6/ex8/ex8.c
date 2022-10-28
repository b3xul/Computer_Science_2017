/* Laboratory 6 - Exercise 8 */

/*
   This solution check the value only in the range 1,...,sqrt(INT_MAX)

   This first solution is not optimized, i.e., all the possible values of a, b, c are checked.
   For a faster solution see ex8.c

   This program takes about 5 days in a test PC to obtain all the solutions, the optimized version only 8 hours. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h> /* Defines the constant INT_MAX */
#include <math.h>   /* For sqrt() function */


int is_pythagorean_triple(int a, int b, int c);


int main()
{
    int a, b, c, val_max;

    val_max = sqrt(INT_MAX);

    for (a=1; a<=val_max; a++)
    {
        for (b=1; b<=val_max; b++)
        {
            for (c=1; c<=val_max; c++)
            {

                if (is_pythagorean_triple(a, b, c) == 1)
                {
                    printf("A=%d B=%d C=%d is a Pythagorean triple\n", a, b, c);
                }

            }
        }
    }

    return 0;
}


int is_pythagorean_triple(int a, int b, int c)
{

    /* To avoid sum overflow the following equation will be checked:
       A^2 = C^2 - B^2
     */
    if ( a*a==c*c-b*b )
        return 1; /* True */
    else
        return 0; /* False */

}

