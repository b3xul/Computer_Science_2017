#include <stdio.h>

#define N 5

//Dichiarazione funzione mult
void mult(int v[], int n, int x);

int main ()
{
	int vett[N] = {0};
	int x = 0;
	int i;

	//Acquisizione vettore
	printf("inserisci elementi vettore:\n");
	for (i = 0; i < N; i++) {
		printf("\tvett[%d]: ", i);
		scanf("%d", &vett[i]);
	}

	//Acquisizione fattore
	printf("inserisci x: ");
	scanf("%d", &x);

	//Moltiplicazione del vettore per il fattore tramite la funzione mult
	mult(vett, N, x);

	//Stampa del vettore risultato
	printf("Risultati:\n");
	for (i = 0; i < N; i++)
	{
		printf("\tvett[%d] = %d\n", i, vett[i]);
	}

	return 0;
}

void mult(int v[], int n, int x)
{
	int i;

	//Itera sul vettore e moltiplica 
	//l'i-esimo elemento del vettore per il fattore x
	for (i = 0; i < n; i++) {
		v[i] *= x; //operazione e assegnazione. Equivale a v[i] = v[i]*x;
	}
}
