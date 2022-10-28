/* Laboratory 6 - Exercise 1 */

#include <stdio.h>


#define N 5


int main()
{
    int vect[N];
    int i;
    int is_pal; /* palindrome sequence flag. is_pal==1: sequence is palindrome, is_pal==0: sequence is not palindrome */

    /* Read N elements */
    printf("Insert %d numbers:\n", N);
    for (i=0; i<N; i++)
    {
        scanf("%d", &vect[i]);
    }

    is_pal = 1;
    /* Compare i-th element with (N-i-1)-th element - Remember indices go from 0 to N-1 */
    for (i=0; i<N/2; i++)
    {
        if ( vect[i]!=vect[N-1-i] )
        {
            /* If the compared elements are not equal the sequence is not palindrome */
            is_pal = 0;
            break; /* The program can exit from the loop */
        }
    }

    /* Print result */
    if ( is_pal )
        printf("The sequence is palindrome\n");
    else
        printf("The sequence is not palindrome\n");

    return 0;
}
