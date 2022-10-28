/* LAB 3 - ESE 3 */

#include <stdio.h>
#include <stdlib.h>

//a
#define k 10

int main()
{
    //b
    int a, b, c, d;
    float x;

    //c
    printf("Consider this equation 'ax + bcx + dK = 0'\nInsert four <int> values: a, b, c, d\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    //d
    x = (float)(-d*k)/(a+b*c);

    //e
    printf("x=%f",x);

    return 0;
}

