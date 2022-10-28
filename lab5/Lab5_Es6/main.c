#include <stdio.h>
#include <stdlib.h>
#define N 5 /* Siccome non viene specificato, posso assumere di utilizzare un
               vettore di dimensione massima N */

int main()
{
  int j = 0, k = 0, i=0, z=0;
  int val=0, found=0, dupl=0;
  int v1[N] = {0};
  int  v2[N] = {0};
  /* Leggo i numeri e li memorizzo in un vettore. Continuo finché non viene
     introdotto un valore negativo, oppure c'è ancora spazio nel vettore */
  while((val >= 0) && (i < N)) {
    printf("Inserisci un valore: ");
    scanf("%d", &val);
    if(val > 0) {
      v1[i] = val;
      i++;
    }
  }
  /* Devo effettuare ricerche finché l'utente non seleziona un numero negativo */
  while(dupl>= 0) {
    /* Leggo il valore da cercare */
    printf("Cerca nel vettore il valore: ");
    scanf("%d",&dupl);
    found = 0;
    /* Leggo il vettore in cerca del valore specificato. Se lo trovo,
       lo salvo nella prima posizione libera del vettore v2 */
    k = 0;
    for(j = 0; j < i; j++) {
      if (dupl==v1[j]) {
        v2[k] = j;
        found = 1;
        k++;
      }
    }
    /* Se ho trovato almeno un'occorrenza del numero cercato stampo il vettore v2 */
    if (found==1) {
      printf("Il valore %d compare in posizione ", dupl);
      for(z = 0; z < k; z++) {
        printf ("%d ",v2[z]);
        /* Una volta stampata la posizione posso approfittarne per azzerare il
           vettore v2, in modo da poter effettuare un'altra ricerca */
        v2[z] = 0;
      }
      printf ("\n");
    } else {
      if(dupl > 0) {
        printf("Il valore %d non compare nel vettore\n",dupl);
      } else {
        printf("Ricerca terminata\n");
      }
    }
  }
  return 0;
}
