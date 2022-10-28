#include <stdio.h>
#include <stdlib.h>

/*
*   Scrivere un programma che definisca 2 variabili intere chiamate var1, var2. Il programma dovrà:
*   a. Assegnare i seguenti valori alle variabili definite:
*    - var1 -> 25
*    - var2 -> -53
*   b. Senza utilizzare una variabile di appoggio, scambiare i valori delle variabile var1 e var2.
*
*   Suggerimento: è consigliabile cercare su internet quali metodi matematici permettono di scambiare due variabili senza l’aiuto di una terza
*
*   Visualizzare il contenuto delle variabili mediante l’uso della opzione di debug: Debug -> Debbuging windows -> Watches
*/

int main()
{
    int var1 = 0, var2 = 0;

    var1 = 25;
    var2 = -53;

    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;

    return 0;
}
