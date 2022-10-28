#include <stdio.h>

#define N 5

//Dichiarazione funzione power
int power(int base, int exponent);

int main ()
{
	int vbase[N], vexponent[N], vres[N];
	int i;

	//Acquisizione vettore delle basi
	for (i = 0; i < N; i++) {
		printf("vbase[%d]: ", i);
		scanf("%d", &vbase[i]);
	}

	//Acquisizione vettore degli esponenti
	for (i = 0; i < N; i++) {
		printf("vexponent[%d]: ", i);
		scanf("%d", &vexponent[i]);
	}


	//Calcolo del vettore risultato tramite funzione power
	for (i = 0; i < N; i++) {
		//L'i-esimo risultato viene calcolato elevando l'i-esima base all'i-esimo esponente
		vres[i] = power(vbase[i], vexponent[i]);
	}

	//Stampa dell'output
	for (i = 0; i < N; i++) {
		printf("%d^%d = %d\n", vbase[i], vexponent[i], vres[i]);
	}

	return 0;
}

int power (int base, int exponent) {
	int res = 1;
	int i;

	//Metodo iterativo per il calcolo della potenza:
	// moltiplica la base per se stessa exponent volte
	for (i = 0; i < exponent; i++) {
		res *= base;
	}

	return res;
}
