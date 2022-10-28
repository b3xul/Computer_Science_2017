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
		if (isalpha(text[i])) { //Controlla se il carattere corrente e' alfabetico
			if (!inword) {
				//Se il carattere e' alfabetico e non siamo in una
				//parola, siamo all'inizio di una parola.
				//Esegui la conversione a carattere maiuscolo e setta il flag inword.

				text[i] -= LOWTOUP; //Operazione e assegnazione. Equivale a text[i] = text[i]-LOWTOUP
				inword = 1;
			}
		} else {
			//Se il carattere non e' alfabetico non siamo in una parola.
			//Resetta il flag
			inword = 0;
		}
	}

	//Stampa l'output.
	printf("\n\nTesto convertito:\n%s\n", text);

	return 0;
}
