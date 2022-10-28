/* LAB 3 - ESE 2 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Insert two <int> variables:\n");
    scanf("%d%d", &a, &b);

    c = (a==b);
    printf("c=(a==b) -> c = %d\n", c);

    c = (a!=b);
    printf("c=(a!=b) -> c = %d\n", c);

    c = (a<=b);
    printf("c=(a<=b) -> c = %d\n", c);

    c = (a>=b);
    printf("c=(a>=b) -> c = %d\n\n", c);

    return 0;
}

/* insight 1 

int main()
{
    int a, b, c;

    printf("c = ((a && b) || (!b)) && (!a)\n");

    a = 1;
    b = 1;
    c= ((a && b) || (!b)) && (!a);
    printf("a=1; b=1; c=%d\n",c);

    a = 1;
    b = 0;
    c = ((a && b) || (!b)) && (!a);
    printf("a=1; b=0; c=%d\n",c);

    a = 0;
    b = 1;
    c = ((a && b) || (!b)) && (!a);
    printf("a=0; b=1; c=%d\n",c);

    a = 0;
    b = 0;
    c = ((a && b) || (!b)) && (!a);
    printf("a=0; b=0; c=%d\n\n",c);

    return 0;
}
*/

/* insight 2 

int main()
{
    int a, b, c, x;

    printf("Insert three <int> variables: a ,b ,x:\n");
    scanf("%d%d%d", &a, &b, &x);

    c = (a<x) && (x<b);

    printf("a=%d\nb=%d\nx=%d\nc=(a<x)&&(x<b)\nc=%d", a, b, x, c);

    return 0;
}
    
*/
