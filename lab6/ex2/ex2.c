/* Laboratory 6 - Exercise 2 */

#include <stdio.h>
#include <stdlib.h>


#define N 5


int main()
{
    int v1[N];
    int v2[N];
    int analyzed[N] = {0};
    int i, j;
    int flag;

    /* Read the two vectors */
    printf("First vector\n");
    for (i=0; i<N; i++)
    {
        printf("Insert element %d: ", i+1);
        scanf("%d", &v1[i]);
    }

    printf("Second vector\n");
    for ( i=0; i<N; i++ )
    {
        printf("Insert element %d: ", i+1);
        scanf("%d", &v2[i]);
    }

    /* Solution using a support vector (i.e., the vector "analyzed") */
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            if ( v1[i]==v2[j] && analyzed[j]==0 )
            {
                analyzed[j] = 1;
                break; /* Exit from the inner cycle: for( j=0; j<N; j++ ) */
            }

    /* If the vector analyzed contains all ones, the two vectors are the same */
    flag = 1;
    for (i=0; i<N && flag==1; i++)
        if ( analyzed[i] == 0 )
        {
            flag = 0;
        }

    if ( flag==1 )
        printf("Vectors contain the same elements\n");
    else
        printf("Vectors do not contain the same elements\n");


    return 0;
}
