#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// esse programa recebe o numero de casos suspeitos, confirmados e de obitos de uma doença e mostra os resultados na tela
int main void(){
	
	int sd, cd, md, td;
	printf("Insira o numero de casos suspeitos, condirmados e obitos devido a doenca: ");
	scanf("%i%i%i", &sd, &cd, &md);
	
	system ("cls");
	
	td = sd + cd + md;
	
	printf ("\n casos suspeitos: %i", sd);
	printf ("\n casos confirmados: %i", cd);
	printf ("\n obitos devido a doenca: %i", md);
	printf ("\n total de casos: %i", td);
	getch ();
	return 0;
}
