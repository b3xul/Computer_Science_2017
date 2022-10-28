#include <stdio.h>
#include <stdlib.h>


/*
*   Scrivere un programma che definisca:
*   a. 1 variabile di tipo intero chiamata g_int_var ed 1 variabile di tipo reale chiamata g_float_var
*   b. 1 variabile di tipo intero senza segno chiamata l_uint_var ed 1 variabile di tipo reale rappresentata con doppia precisione chiamata l_double_var
*   ed inoltre,
*   c. assegni i seguenti valori alle variabili definite:
*       g_int_var -> -3
*       g_float_var -> 2.5
*       l_uint_var -> 50
*       l_double_var -> 2/3
*/

int main()
{
    int g_int_var = 0;
    float g_float_var = 0;
    unsigned int l_uint_var = 0;
    double l_double_var = 0;

   /* Use "watches" to check the following assignments */
    g_int_var = -3;
    g_float_var = 2.5;
    l_uint_var = 50;
    l_double_var = 2/3;

    /* Does l_double_var assume the expected value? */
    /* Now check the following assignment */
    l_double_var = 2.0/3.0;

    return 0;

}
