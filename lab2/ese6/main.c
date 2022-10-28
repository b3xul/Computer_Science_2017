#include <stdio.h>
#include <stdlib.h>

/*
* Partendo dal flow-chart disegnato per l’esercizio 2 della settimana 1, si scriva un programma C per il calcolo del modulo (valore assoluto) di un numero; in particolare il programma dovrà:
* a. Acquisire da tastiera un valore intero, positivo o negativo, e memorizzarlo in una variabile opportunamente definita
* b. Stabilire utilizzando il costrutto condizionale if se tale variabile contiene un valore negativo e, in questo caso, trasformarlo nel corrispondente valore positivo
* c. Stampare a video il valore finale, ovvero il modulo del valore acquisito
*/

int main()
{
    int module;

    printf("Enter an inger number: ");
    scanf ("%d", &module);

    if (module < 0) {
        module = -module;
    }

    printf ("The module is: %d\n", module);

    return 0;
}
