#include <stdio.h>
#include <stdlib.h>

/*
*   Scrivere un programma che definisca 3 variabili intere chiamate var1, var2 e tmp. Il programma dovrà:
*   a. Assegnare i seguenti valori alle variabili definite:
*       var1 -> -3
*       var2 -> 12
*   b. Utilizzando la variabile tmp, scambiare i valori di var1 e var2.

*   Visualizzare il contenuto delle variabili mediante l’uso della opzione di debug: Debug -> Debbuging windows -> Watches
*/

int main()
{
    int var1 = 0, var2 = 0, temp = 0;

    var1 = -3;
    var2 = 12;

    temp = var1;
    var1 = var2;
    var2 = temp;

    return 0;
}
