#include <stdio.h>
#include <stdlib.h>

/*
*   Scrivere un programma che definisca 3 variabili reali (float) chiamate length, width e perimeter, corrispondenti a base, altezza e perimetro di 1 rettangolo:
*   a. Inizializzi le variabili length e width usando dei valori scelti dal programmatore
*   b. Partendo da questi dati, calcoli il perimetro del rettangolo e lo salvi nella variabile perimeter
*   Visualizzare il contenuto delle variabili mediante l’uso della opzione di debug: Debug -> Debbuging windows -> Watches
*/

int main()
{
    float length = 0;
    float width = 0;
    float perimeter = 0;

    length = 3.3;
    width = 5.5;

    perimeter = (length + width)*2;

    return 0;
}
