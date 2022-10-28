/* Laboratory 6 - Exercise 3 */

#include <stdio.h>

#define N 10


int main()
{
    int v[N];
    int v2[N];  /* occurences vector */
    int i,j;    /* loop index */


    /* Fill v1 from input */
    printf("Insert %d numbers:\n", N);
    for (i=0; i<N; i++)
    {
        scanf("%d", &v[i]);
        v2[i]=1;
    }

    /* Check all elements with a loop */
    for (i=0; i<N; i++)
    {
        /* for each element, check whether there are other elements which are equal. */
        for (j=0; j<i && v2[i]==1; j++)
        {
            if ( v[j]==v[i] )
            {
                /* Duplicate element found */
                v2[j] ++;   /* occurrences vector increment*/
                v2[i] = 0;  /* i-th element is a duplicate */
            }
        }
    }

    for (i=0; i<N; i++)
    {
        if ( v2[i]>1 )  /* if there are replicated values for that number */
        {
            printf("Replicated element %d - first position %d (# of occurrences: %d)\n", v[i], i+1, v2[i]);

        }
    }
    printf("\n");

    return 0;
}
