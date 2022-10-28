#include <stdio.h>
#include <stdlib.h>
#define N 10

int main() {
  int i = 0,
      sum = 0,
      max = 0;
  float mean = 0.0;
  int v[N] = {0};
  /* Nello stesso ciclo effettuo le seguenti operazioni:
     (i) leggo il vettore,
     (ii) calcolo la somma dei valori inseriti,
     (iii) determino il numero più grande e la sua posizione nel vettore. */
  for(i = 0; i < N; i++) {
    printf("Inserisci il valore dell'elemento %d del vettore: ", (i + 1));
    scanf("%d", &v[i]);
    /* Quando solo il primo numero è stato inserito, ossia quando "i" è 0,
       vado ad aggiornare il valore relativo al numero massimo */
    if(i == 0) {
      max = v[0];
    }
    /* Aggiorno la somma progressiva */
    sum += v[i];
    /* Aggiorno il valore massimo */
    if(v[i] > max) {
      max = v[i];
    }
  }
  /* Stampo il contenuto del vettore */
  printf("I valori contenuti nel vettore sono: ");
  for(i = 0; i < N; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
  /* Calcolo la media */
  mean = (float)sum / i;
  printf("La media dei valori contenuti nel vettore e\': %.2f\n", mean);
  /* Determino la posizione del numero più alto trovato in precedenza,
     e stampo a video le posizioni in cui si trova */
  printf("Il massimo valore contenuto nel vettore e\' %d, in posizione ", max);
  for(i = 0; i < N; i++) {
    if(v[i] == max)
      printf("%d ", (i + 1));
  }
  printf("\n");
  return 0;

}
