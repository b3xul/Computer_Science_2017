#include <stdio.h>
#define N 5

//BASE
float avgVect(int v[], int n);
int upperLimit(int v[], int n, float limit);

//APPROFONDIMENTO
float overAvg(int v[], int n, int *upperLimit);

int main ()
{
	int vect[N] = {0};
	float avg = 0.0;
	int upperAvg = 0;
	int i;

	//Acquisizione vettore
	printf("Inserire il vettore: \n");
	for (i = 0; i < N; i++) {
		printf("\tvect[%d]: ", i);
		scanf("%d", &vect[i]);
	}

	//Calcolo della media.
	//Commentare per l'approfondimento
	avg = avgVect(vect, N);

	//Conteggio degli elementi superiori alla media
	//Commentare per l'approfondimento
	upperAvg = upperLimit(vect, N, avg);
	
	//Decommentare per utilizzare la soluzione dell'approfondimento
	//avg = overAvg(vect, N, &upperAvg);


	//Stampa risultati
	printf("La media e':\t\t\t\t\t%7.3f\n", avg);
	printf("Il numero di elementi superiori alla media e':\t%3d\n", upperAvg);

	return 0;
}

float avgVect(int v[], int n)
{
	int i;
	float avg = 0.0;

	//Calcola la media di un vettore

	//Somma degli elementi
	for (i = 0; i < n; i++) {
		avg += v[i];
	}

	//Media
	avg /= n; //Operazione e assgnazione. Equivale a avg = avg/n;

	return avg;
}

int upperLimit(int v[], int n, float limit)
{
	int i;
	int count = 0;
	
	//Conta gli elementi del vettore v maggiori di limit
	for (i = 0; i < N; i++) {
		if (v[i] > limit) {
			count++;
		}
	}

	return count;
}

//APPROFONDIMENTO

float overAvg (int v[], int n, int *aboveLimit)
{
	float avg;

	//Calcola la media di un vettore e ne conta gli elementi
	//maggiori della media. Utilizza due funzioni.

	//Richiama le due funzioni per ottenere i risultati richiesti
	avg = avgVect(v, n);
	*aboveLimit = upperLimit(v, n, avg);

	return avg;
}

