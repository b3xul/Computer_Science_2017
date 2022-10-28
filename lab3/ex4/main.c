/* LAB 3 - ESE 4 */

#include <stdio.h>
#include <stdlib.h>

//a
#define p 400
#define f 40
#define m 20

int main()
{
    //b
    int  price, features, months, years;

    //c
    printf("Insert the number of features (<int>) and the number of years (<int>\n:");
    scanf("%d%d", &features, &years);

    //d
    months = years * 12;

    //e
    price = p + f*features - m*months;

    //f
    printf("The final price is %d", price);

    return 0;
}

