#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
  int i;
  int v[N] = {0};
  /* Leggo N numeri e li salvo in un vettore */
  for(i = 0; i < N; i++) {
    printf("Inserisci il valore dell'elemento %d del vettore: ", i);
    scanf("%d", &v[i]);
  }
  /* Partendo dalla prima posizione, cerco se i numeri nelle posizioni +1 e +2
     formano una sequenza crescente */
  for(i = 0; i < N; i++) {
    if((v[i]<v[i+1])&&(v[i+1])<v[i+2]) {
      printf("La sequenza numerica è %d %d %d ed inizia in posizione %d\n", v[i], v[i+1], v[i+2], i);
    }
  }
  return 0;
}
