/* Laboratory 6 - Exercise 4 */

#include <stdio.h>
#include <stdlib.h>

#define N 5


int main()
{
    int v[N], value;
    unsigned int n_elements; /* The current number of elements stored in v */
    unsigned int i;

    for (n_elements=0; n_elements<N; n_elements++)
    {

        printf("Insert a value: ");
        scanf("%d", &value);

        for (i=n_elements; i>0; i--)   /* From the last to the second element of the vector */
        {
            if ( value<v[i-1] ) /* If the new value is smaller than the element i-1 of the vector */
            {
                v[i] = v[i-1]; /* Scale the element i-1 of one position */
            }
            else
            {
                break; /* Exit the cycle: the correct position (i) of the new value has been found */
            }
        }
        v[i] = value; /* Insert the new value in the correct position */

    }

    /* Print the vector */
    printf("VEC:");
    for (i=0; i<N; i++)
    {
        printf(" %d", v[i]);
    }
    printf("\n");

    return 0;
}
