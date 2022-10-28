#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
  int decreasing = -1;
  int monotone = 1;
  int increasing = -1;
  int i = 0;
  int j = 0;
  int val[N] = {0};
  /* Leggo il primo numero fuori dal ciclo while */
  printf("Inserisci un valore:");
  scanf("%d", &val[i]);
  i++;
  /* Il ciclo while deve continuare a leggere valori da tastiera finché:
     (i) l'untente ha inserito N numeri,
     (ii) la sequenza non è più monotona */
  while((monotone == 1) && (i < N)) {
    printf("Inserisci un valore:");
    scanf("%d", &val[i]);
    if(val[i] > val[i-1]) {
      increasing = 1;
    } else if (val[i] < val[i-1]) {
      decreasing=1;
    }
    /* Se l'ultimo numero inserito ha interrotto l'andamento della serie
       posso interrompere il ciclo (tramite il flag monotone) */
    if((increasing - decreasing) == 0) {
      monotone = 0;
    } else {
    /* Nel caso in cui la serie risulti ancora monotona allora aggiorno
       l'indice "i" di una posizione */
      i++;
    }
  }
  printf("Il vettore contiene i seguenti valori: ");
  for (j = 0; j < i; j++) {
    printf("%d ",val[j]);
  }
  printf("\n");
  return 0;
}
