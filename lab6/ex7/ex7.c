/* Laboratory 6 - Exercise 7 */

#include <stdio.h>
#include <math.h> /* For sinf() and asinf() functions and for M_PI_2 constant (pi/2) */


double invsin(double z1, double z2, double k, double e);


int main()
{

    double a, b, c, x, res;

    do
    {
        printf("Insert left interval a: ");
        scanf("%lf", &a);

        printf("Insert left interval b: ");
        scanf("%lf", &b);

        printf("Insert step c: ");
        scanf("%lf", &c);
    }
    while( a<-1.0 || b>1.0 || b<a );


    for (x=a; x<=b; x=x+c)
    {
        /* The domain of the arcsin function is -pi/2 <= x <= pi/2, i.e, -M_PI_2 <= x <= M_PI_2 */
        res = invsin(-M_PI_2, M_PI_2, x, 0.001);

        printf("x: %9f  invsin(x)=%9f  asinf(x)=%9f  error=%9f\n", x, res, asin(x), asin(x)-res );
    }

    return 0;
}


double invsin(double z1, double z2, double k, double e)
{
    /* For a description of the bisection method see:
       https://en.wikipedia.org/wiki/Bisection_method */

    double zm;
    double res;

    do
    {
        zm = (z1+z2)/2.0;
        res = sin(zm)-k;

        if ( (sin(z1)-k) * res <= 0.0 ) /* Choose the first interval */
        {
            z2 = zm;
        }
        else /* Choose the second interval */
        {
            z1 = zm;
        }
    }
    while( (z2-z1)/2.0 > e && res != 0.0 );

    return zm;
}
