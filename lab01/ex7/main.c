/*
Informatica/Computer Sciences

Lab 1

Exercise 7

*/#include <stdio.h>
#include <stdlib.h>
/*
Write a C program able to translate a temperature value from Celsius degrees to Fahrenheit degrees, and vice versa.
The program must ask the user for the temperature scale, provided as a letter: C for Celsius degrees and F for Fahrenheit.
Then, the user is asked to provide the temperature value to be translated. Finally, the program must transform the provided value
and show the obtained result into the screen.
*/

int main()
{
    int celsius_degs, fahrenheit_degs;
    char scale;

    printf("Program for converting Celsius degrees to Fahrenheit degrees and vice versa\n");
    printf("Please, enter the character for the scale: C for Celsius, F for Fahrenheit:\n");

    scanf("%c", &scale);

    if((scale == 'c')||(scale == 'C'))
    {
        printf("please, enter the value in Celsius degrees\n");
        scanf("%d",&celsius_degs);
        fahrenheit_degs = 32 + celsius_degs*(9/5);
        printf("%d Cesius deg. = %d Fahrenheit deg.\n",celsius_degs, fahrenheit_degs);
    }
    else if ((scale == 'f')||(scale == 'F'))
    {
        printf("please, enter the value in Fahrenheit degrees\n");
        scanf("%d",&fahrenheit_degs);
        celsius_degs = (fahrenheit_degs - 32)*5/9;
        printf("%d Fahrenheit deg. = %d Celsius deg.\n", fahrenheit_degs, celsius_degs);
    }
    else
    {
        printf("Not able to recognize the scale (%c)\n",scale);
    }

    return 0;
}
