#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y, max, min, r=1;
  printf("Inserisci un numero intero positivo: ");
  scanf("%d", &x);
  printf("Inserisci un numero intero positivo: ");
  scanf("%d", &y);
  /* Controllo che i due numeri siano positivi */
  if(x<=0 || y<=0) {
    /* Nel caso almeno uno risulti negativo faccio stampare un messaggio
       d'errore e termino il programma */
    printf("La coppia inserita non è valida! ");
    return(EXIT_FAILURE);
  }
  /* Assegno il numero più alto alla variabile max,
     il più piccolo alla variabile min */
  max = min = x;
  if(x >= y) {
    min = y;
  } else {
    max = y;
  }
  printf("MCD tra %d e %d e\': ", max, min);
  /* Applico il metodo dei resti */
  while(r != 0) {
    r = max % min;
    max = min;
    min = r;
  }
  /* Arrivati a questo punto del programma, la
     variabile "max" conterrà il MCD */
  printf("%d\n", max);
  return(EXIT_SUCCESS);
}
