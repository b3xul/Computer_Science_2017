/* Laboratory 6 - Exercise 2b */

#include <stdio.h>
#include <stdlib.h>


#define N 5


int main()
{
    int v1[N];
    int v2[N];
    int analyzed[N] = {0};
    int i, j;
    int tmp;
    int flag;

    /* Read the two vectors */
    printf("First vector\n");
    for (i=0; i<N; i++)
    {
        printf("Insert element %d: ", i+1);
        scanf("%d", &v1[i]);
    }

    printf("Second vector\n");
    for (i=0; i<N; i++)
    {
        printf("Insert element %d: ", i+1);
        scanf("%d", &v2[i]);
    }


    for (i=0; i<N; i++)  /* Fix i index */
        for (j=i; j<N; j++) /* Fix j index */
            if ( v1[i]==v2[j] ) /* Find in v2 a number v2[j] equal to v1[i] */
            {
                /* Move the number v2[j] in the same position of the number v1[i] (i.e., put v2[j] in the position i of the vector v2),
                   the element previous stored in v2[i] must be placed in the only free position of the vector that is v2[j].
                   This operation can be performed with a swap of the elements v2[i] and v2[j] */
                tmp = v2[i];
                v2[i] = v2[j];
                v2[j] = tmp;
            }

    /* if and only if the new vectors v1 and v2 are exactly the same, the two vectors contain the same elements */
    flag = 0;
    for (i=0; i<N && flag==0; i++)
        if ( v1[i]!=v2[i] )
            flag=1;

    if ( flag==0 )
        printf("Vectors contain the same elements\n");
    else
        printf("Vectors do not contain the same elements\n");


    return 0;
}
