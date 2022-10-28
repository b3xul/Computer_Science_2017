#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
  int v1[N]={0};
  int v2[N]={0};
  int i = 0, j = 0, k = 0, q = 0;
  int val, max_v1, max_v2;
  /* Il ciclo while termina quando almeno uno dei due vettori è pieno */
  while(i!=N && j!=N) {
    printf("Inserisci un valore: ");
    scanf("%d", &val);
    /* Controolo che il numero inserito sia maggiore di 0, oppure minore di 0
       e, allo stesso tempo multiplo di 3 e lo inserisco in v1 */
    if((val>0) || ((val<0) && (val%3==0))) {
      v1[i] = val;
      i++;
    } else if ((val<0) && (val%3!=0) && (val%2!=0)) {
      /* Se, invece, il numero inserito è minore di 0 e, allo stesso tempo,
         non divisibile né per 3, né per 2, lo inserisco in v2 */
      v2[j] = val;
      j++;
    }
  }
  /* Arrivati a questo punto, gli indici "i" e "j" conterranno il numero
     di valori inseriti in v1 e v2, rispettivamente. Dunque, posso riutilizzarli
     nel seguente modo: */
  printf("Nel primo vettore sono contenuti i seguenti valori: ");
  for(k = 0; k < i; k++) {
    printf("%d ", v1[k]);
  }
  printf("\n");
  printf("Nel secondo vettore sono contenuti i seguenti valori: ");
  for(q = 0; q < j; q++) {
    printf("%d ", v2[q]);
  }
  printf("\n");
  return 0;
}
