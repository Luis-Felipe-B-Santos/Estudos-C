#include <stdio.h>
#include <stdlib.h>
// este programa recebe o cadastro de 10 veiculos, os preços oferecidos por 4 participantes diferentes por cada veiculo e exibe:
// os modelos cadastrados e os valores oferecidos, o valor medio oferecido por cada participante, o menor valor de cada participante e o maior valor geral

int main (void){
	int L[10][4], VM[10];
	int i, j, menor, maior;
	char M[10][20];
	
	for (i = 0; i < 10; i++){
		printf ("Informe o modelo do %i%c veiculo \n", i+1, 167); //167 na tabela equivale ao simbolo de primeiro, segundo, etc
		fflush (stdin);
		gets (M[i]);
		system ("cls");
	}
	
	for (i = 0; i < 10; i++){
		printf ("Quais sao os valores lancados pelo %i%c veiculo\n", i+1, 167);
		for (j = 0; j < 4; j++){
			printf ("Valor oferecido pelo participante %i: \n", j+1);
			scanf ("%i", &L[i][j]);
		}
		system ("cls");
	}
	printf ("Veiculos cadastrados: \n");
	for (i = 0; i < 10; i++){
		printf ("%i%c veiculo: %s \n", i+1, 167, M[i]);
	}
	system ("pause");
	system ("cls");
	
	for (i = 0; i < 10; i++){
		printf ("Valores oferecidos pelo veiculo %i \n", i+1);
		for (j = 0; j < 4; j++){
			printf ("Valor oferecido pelo participante %i: %i \n", j+1, L[i][j]);
			system ("pause");
			system ("cls");
		}
	}
	for (i = 0; i < 10; i++){
		j = 0;
		VM[i]= (L[i][j] + L[i][j+1] + L[i][j+2] + L[i][j+3]) / 4;
		printf ("Valor medio oferecido pelo veiculo %i: %i \n", i+1, VM[i]); 
		}
		system ("pause");
		system ("cls");
	
	maior = L[0][0];
	for (i = 0; i < 10; i++){
		for (j = 0; j < 4; j++){
			if (maior < L[i][j]){
				maior = L[i][j];
			}
		}
	}
	printf ("Maior Lance oferecido: %i \n", maior);
	menor = L[0][0];
	for (i = 0; i < 10; i++){
		for (j = 0; j < 4; j++){
			if (menor > L[i][j]){
				menor = L[i][j];
			}		
		}
		printf ("Menor lance oferecido pelo veiculo %i: %i \n", i+1, menor);
		menor = 1000000;
	}
}