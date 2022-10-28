#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n1, n2, n3, n4, max, min, diff;

    printf("Insert four positive <int> numbers < 1000: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    // a
    if ((n1<0)||(n1>1000))
    {
        n1 = 0;
        printf("The number n1 is converted to 0\n");
    }

    if ((n2<0)||(n2>1000))
    {
        n2 = 0;
        printf("The number n2 is converted to 0\n");
    }

    if ((n3<0)||(n3>1000))
    {
        n3 = 0;
        printf("The number n3 is converted to 0\n");
    }

    if ((n4<0)||(n4>1000))
    {
        n4 = 0;
        printf("The number n4 is converted to 0\n");
    }

    // b
    max = n1;
    if ((n2>n1) && (n2>n3) && (n2>n4))
        max = n2;
    if((n3>n1) && (n3>n2) && (n3>n4))
        max = n3;
    if((n4>n1) && (n4>n2) && (n4>n3))
        max = n4;

    min = n1;
    if ((n2<n1) && (n2<n3) && (n2<n4))
        min = n2;
    if((n3<n1) && (n3<n2) && (n3<n4))
        min = n3;
    if((n4<n1) && (n4<n2) && (n4<n3))
        min = n4;

    diff = max - min;

    // c
    printf("The max difference among n1, n2, n3, n4 is: %d\n", diff);

    return 0;
}

