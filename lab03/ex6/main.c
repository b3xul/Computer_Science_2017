/* LAB 3 - ESE 6 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  x, y, sum;
    float mean;

    printf("Insert two <int> numbers: ");
    scanf("%d%d", &x, &y);

    //a
    sum = x + y;

    //b
    mean = (float)sum / 2 ;

    //c
    printf("The aritmetic mean is: %f", mean);

    return 0;
}

