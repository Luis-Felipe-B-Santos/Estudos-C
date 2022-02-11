#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
	char nome [50];
	int codigo;
	char produtos [10][50];
	float media, precos[10], maior;
}CAD_CLIENTE;

CAD_CLIENTE clientes[5];

int main (void){
	int i, j, k;
	char aux[30], aux1[30];
	
	for (i=0; i<5; i++){
		clientes[i].maior = 0;
		printf ("Qual e o nome do %i%c cliente? \n", i + 1, 167);
		fflush (stdin);
		gets (clientes[i].nome);
		printf ("Qual e o codigo do cliente? \n");
		scanf ("%i", &clientes[i].codigo);
		for (j = 0; j < 9; j = j + 2){
			printf ("\nNome do produto: ");
			fflush (stdin);
			gets (clientes[i].produtos[j]);
			printf ("\nValor do produto: R$ ");
			scanf ("%s", &clientes[i].produtos[j+1]);
			}
			printf ("\nDigite novamente os valores dos produtos na mesma ordem para confirmacao");
			for (k = 0; k < 5; k++){
				printf ("\n Valor %i: ", k);	
				scanf ("%f", &clientes[i].precos[k]);
				if (clientes[i].precos[k] > clientes[i].maior){
				clientes[i].maior = clientes[i].precos[k];
			}	
		}
		clientes[i].media = (clientes[i].precos[0] + clientes[i].precos[1] + clientes[i].precos[2] + clientes[i].precos[3] + clientes[i].precos[4]) / 5;
		system ("cls");
	}
	
	for (i = 0; i < 5; i++){
		printf ("====== Cliente numero %i ====== \n", i + 1);
		printf ("\n Nome: %s", clientes[i].nome);
		printf ("\n Codigo: %i", clientes[i].codigo);
		printf ("\n Produtos -------- Valores ");
		for (k = 0; k < 9; k = k + 2){
			printf ("\n %s -------- R$ %s", clientes[i].produtos[k], clientes[i].produtos[k+1]);
		}
		for (j = 0; j < 9; j = j + 2){
			if (strcmp (clientes[i].produtos[j], clientes[i].produtos[j+2]) > 0){
				strcpy (aux, clientes[i].produtos[j]);
				strcpy (clientes[i].produtos[j], clientes[i].produtos[j+2]);
				strcpy (clientes[i].produtos[j+2], aux);
			}
		}
		printf ("\n Produtos ordenados Alfabeticamente: ");
		for (k = 0; k < 9; k = k + 2){
			printf ("\n %s ", clientes[i].produtos[k]);
		}
		printf ("\n O produto mais caro custa: R$ %f.2", clientes[i].maior);
		printf ("\n O valor medio dos produtos e: R$ %f.2", clientes[i].media);
		system ("pause");
		system ("cls");
	}
	return 0;
}