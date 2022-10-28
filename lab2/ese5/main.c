#include <stdio.h>
#include <stdlib.h>

/*
*   Scrivere un programma che definisca 3 variabili reali (float) chiamate price, tax e receipt, e:
*   a. Assegnare valori scelti dal programmatore per price e tax
*   b. Partendo da questi dati, calcoli il prezzo comprensivo delle tasse (price+price*tax/100) e lo salvi nella variabile receipt
*   Visualizzare il contenuto delle variabili mediante l’uso della opzione di debug: Debug -> Debbuging windows -> Watches
*/

int main()
{
    float price = 0, tax = 0, receipt = 0;

    price = 5.5;
    tax = 3.4;

    receipt = price + (price * tax/100);

    return 0;
}
