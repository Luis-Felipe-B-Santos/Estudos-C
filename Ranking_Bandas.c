#include <stdlib.h>
#include <stdio.h>

int main (void){
	int i;
	struct Cad_Bandas{
		char Nome[50], Tipo[20];
		int Integrantes, Ranking;
	};
	struct Cad_Bandas Bandas[10];
	
	for (i = 0; i < 10; i++){
		printf ("\nNome da banda: ");
		fflush (stdin);
		gets (Bandas[i].Nome);
		printf ("\n Estilo musical da banda: ");
		fflush (stdin);
		gets (Bandas[i].Tipo);
		printf ("\nQuantos integrantes fazem parte da banda? ");
		scanf ("%i", &Bandas[i].Integrantes);
		printf ("\nQual posicao no top 10 essa banda merece? ");
		scanf ("%i", &Bandas[i].Ranking);
		system ("cls");
	}
}