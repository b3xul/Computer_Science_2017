 #include <stdio.h>
#include <ctype.h>

int main () {
	char c;

	//Inizializzazione contatori
	int chars = 0;
	int alpha = 0;
	int upper = 0;
	int num = 0;
	int spaces = 0;
	int words = 0;

	//Variabile flag
	int isword = 0;

	while ((c = getchar()) != '\n') {
		//Incrementa il numero di caratteri inseriti
		chars++;

		if (isalpha(c)) {
			//Carattere alfabetico.
			//Incrementa il contatore di caratteri alfabetici
			alpha++;
			//Setta il flag, siamo sicuramente all'interno o all'inizio di una parola
			isword = 1;
		}

		if (isupper(c)) {
			//Lettera maiuscola, incrementa il contatore delle lettere maiuscole.
			//A questo punto il corpo di if(isalpha(c)) e' stato sicuramente eseguito,
			// perche' un carattere maiuscolo e' anche un carattere alfabetico.
			upper++;
		}

		if (isdigit(c)) {
			//Incrementa il contatore di caratteri numerici
			num++;
		}

		if (isspace(c)) {
			//Incrementa il contatore di spazi
			spaces++;
		}

		if (isword && !isalpha(c)) {
			//Se si e' all'interno di una parola e il carattere inserito
			//non e' alfabetico, la parola termina. Incrementa il contatore di parole
			//inserite e resetta il flag isword.
			isword = 0;
			words++;
		}
	}

	//Stampa output
	printf("Statistiche raccolte:\n");
	printf("\tCaratteri:\t%d\n", chars);
	printf("\tAlfabetici:\t%d\n", alpha);
	printf("\tMaiuscoli:\t%d\n", upper);
	printf("\tCifre decimali:\t%d\n", num);
	printf("\tSpazi:\t%d\n", spaces);
	printf("\tParole:\t%d\n", words);

	return 0;
}
