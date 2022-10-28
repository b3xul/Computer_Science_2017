#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6 /* length of time strings */
#define M 21+3+1

int main()
{
    char time1[N], time2[N], result_string[M], sep;
    int h1, h2, m1, m2;
    int t1, t2;
    int distance;

    printf("Insert first time: ");
    scanf("%s", time1);
    if (sscanf(time1,"%d%c%d", &h1, &sep, &m1)!=3 || sep!=':' || (h1<0 || h1>23 || m1<0 || m1>59))
    {
        printf("\nFirst string has invalid format\n");
        return -1;
    }

    printf("insert second time: ");
    scanf("%s", time2);
    if (sscanf(time2,"%d%c%d", &h2, &sep, &m2)!=3 || sep!=':' || (h2<0 || h2>23 || m2<0 || m2>59))
    {
        printf("\nSecond string has invalid format\n");
        return -2;
    }

    t1 = h1 * 60 + m1;
    t2 = h2 * 60 + m2;

    if (t1<t2)
    {
        printf("\nt1 is before t2\n");
        distance = t2 - t1;
        sprintf(result_string, "\n<intervallo calcolato>_%d\n", distance);
        puts(result_string);
    }
    else
        printf("\nt1 is not before t2");

    return 0;
}
