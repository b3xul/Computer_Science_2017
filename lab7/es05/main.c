#include <stdio.h>
#include <ctype.h>

int main ()
{
	char a, b;
	char tmp;

	//Acquisizione input
	printf("Inserire il primo carattere: ");
	scanf("%c", &a);
	getchar();
	printf("Inserire il secondo carattere: ");
	scanf("%c", &b);

	//Controllo se sono caratteri
	if (isalpha(a) && isalpha(b)) {
		//Se a e' maggiore di b, vuol dire che lo segue in ordine
		//alfabetico. Esegui uno scambio, così che a contiene sempre
		//la prima lettera in ordine alfabetico
		if (a > b) {
			tmp = b;
			b = a;
			a = tmp;
		}
		
		//Stampa i due caratteri in ordine alfabetico
		printf("%c, %c\n", a, b);
	} else {
		//Se non sono caratteri controlla se almeno uno dei due e' numerico
		if (isdigit(a) || isdigit(b)) {
			printf("uno dei due caratteri e' numerico.\n");
		}
	}

	return 0;
}
