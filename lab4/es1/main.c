#include <stdio.h>

int main()
{
    float a,b,c,delta;
    printf("Please insert the three coefficients of the equation a*x^2+b*x+c=0\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    delta=b*b-4*a*c;
    if (delta < 0)
        printf("The equation does not have real solutions\n");
    else {
        if (delta == 0)
            printf("The equation has 2 equal real solutions \n");
        else
            printf("The equation has 2 different real solutions \n");
    }

    return 0;
}


