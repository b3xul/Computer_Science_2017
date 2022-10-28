#include <stdio.h>
#include <stdlib.h>
/*
    Si vuole linearizzare il valore letto da un sensore di temperatura, che fornisce in uscita (Vout) un valore tra 0 e 100 mV,
    mediante una spezzata. Sperimentalmente sono stati trovati i seguenti punti di ginocchio della spezzata:
 
    Realizzare un programma che permetta di introdurre da tastiera un valore di tensione intero in mV fornito dal sensore, 
    calcoli e stampi il valore di temperatura espresso in ºC. Il programma deve usare in modo sperimentale il costrutto 
    if-then-else.
 */

#define V0 0
#define T0 0
#define V1 20
#define T1 15
#define V2 55
#define T2 27
#define V3 100
#define T3 35


int main()
{
    int voltage;
    int temperature;
    int x1;
    int x2;
    int y1;
    int y2;

    printf("Insert a voltage value, (range; 0 mV - 100 mV): ");
    scanf("%d", &voltage);


    if ( (voltage >= V0) && (voltage <= V3) ) {
        if (voltage <= V1) {
            x1=V0; x2=V1; y1=T0; y2=T1;
        }
        else {
            if (voltage <= V2) {
                x1=V1;  x2=V2;  y1=T1;  y2=T2;
            }
            else {
                x1=V2;  x2=V3;  y1=T2;  y2=T3;
            }
        }

        temperature = y1 + (voltage-x1)*(y2-y1)/(x2-x1);
        printf("The temperature value corresponding to this voltage (%d mV) is %d C\n",
               voltage, temperature);
    }
    else {
        printf("Error! Insert an admitted voltage value. Range: 0 mV - 100mV\n");
    }

    return 0;
}

