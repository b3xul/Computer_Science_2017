#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define YES 1
#define NO 0

int main()
{
    int car; /* must be of type int because it must contain EOF value, a char is not able to do it */
    int previous_char = '\0';  /* see below */
    int foundC = NO;  /* flag, YES=char 'c' has just been found */

    do
    {
        car = getchar();       /* press ctrl-Z and Enter to finish */

        if (foundC == 1)       /* previous char was 'c' */
        {
            if (car == 'h')    /* actual char is 'h' */
            {
                putchar('k');
                foundC = NO;
            }
            else if (car != 'c') /* if actual char is not h nor c, output the previous one and it */
            {
                putchar(previous_char);
                putchar(car);
                foundC = NO;
            }
        }
        else                   /* previous char was NOT 'c' */
        {
            if (car == 'c')     /* found a c, it could be followed by h */
                foundC = YES;   /* do not output this char */
            else if (previous_char != car) /* suppress repeated characters */
                putchar(car);
        }
        previous_char = car;

    }
    while (car != EOF);

    return 0;
}
