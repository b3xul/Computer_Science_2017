/*
Informatica/Computer Sciences

Lab 1

Exercise 3

*/

#include <stdio.h>

int main (void)
{
  int x;
  printf("Inserisci un numero: ");
  scanf("%d", &x);
  if (x>0)
    printf("Il valore %d e' positivo\n", x);
  else
    printf("Il valore %d e' negativo o pari a 0\n", x);
  return 0;
}
