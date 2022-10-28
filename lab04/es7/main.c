#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value, previous;
    unsigned int uvalue, uprevious;

    // a
    value = 3000000000;
    printf("value = %d\n", value);

    // b

    value = 0;
    while (value >= 0)
    {
        previous = value;
        value++;
    }
    printf("The maximum integer is %d\n", previous);


    uvalue = 0;
    do
    {
        uprevious = uvalue;
        uvalue ++;
    }while (uvalue > uprevious);
    printf("The maximum unsigned integer is %u\n", uprevious);

    return 0;
}
