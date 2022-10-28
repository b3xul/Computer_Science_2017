#include <stdio.h>
#include <ctype.h>

//Lunghezza massima dell'input
#define MAXLEN 65535

//Costante da sottrarre ad un carattere per convertirlo nel
//corrispondente carattere maiuscolo
#define LOWTOUP 32

int main () {
	//Flag che indica se si e' all'interno di una parola
	int inword = 0;
	
	//Contatore del loop
	int i;
	
	//Contatore di caratteri inseriti, serve nella fase di elaborazione
	int count = 0;

	//Stringa che contiene il testo inserito
	char text[MAXLEN] = {0};

	//Variabile di acquisizione
	char c;

	//Contatori di parole e righe
	int words = 0, rows = 0;

	//Lunghezza media delle parole
	float avgwlen = 0.0;

	//Acquisizione input
	printf("Inserisci un testo terminato da CTRL+D (ATTENZIONE! Lunghezza massima del testo: %d caratteri)\n", MAXLEN);
	while ((c = getchar()) != EOF) {
		//Aggiungi il carattere inseirito alla stringa di input
		//e incrementa il contatore dei caratteri inseriti
		text[count] = c;
		count++;
	}
	
	//Itera sulla stringa ricevuta in input per elaborarla.
	//Il loop va da 0 al numero di caratteri inseriti conservato in count.	
	for (i = 0; i < count; i++) {
		if (isalpha(text[i])) {
			if (!inword) {
				//Se il carattere e' alfabetico e non siamo all'interno di una parola,
				//incrementa il contatore di parole e setta il flag inword
				words++;
				inword = 1;
			}
			
			//Incrementa la somma dei caratteri contenuti nelle parole
			avgwlen++;
		} else {
			//Se il carattere non e' alfabetico, non siamo piu' in una parola
			inword = 0;
		}

		if (text[i] == '\n') {
			//Se c'e' un carattere di a capo, incrementa il numero di righe
			rows++;
		}
	}

	//Calcola la media
	avgwlen /= words; //Operazione e assegnazione. Equivale a awglen = awglen/words

	//Stampa i risultati
	printf("\n\nStatistiche estratte:\n\tNumero di righe: %d\n\tNumero di parole: %d\n\tLunghezza media di una parola: %.1f\n", rows, words, avgwlen);

	return 0;
}
