#include <stdio.h>
#include <stdlib.h>



int main(void){
	
	int n, m, i, j;
	
	printf("Quantos veiculos deseja cadastrar?\n");
	scanf ("%i", &n);
	printf ("Quantas pessoas participarao do leilao?\n");
	scanf ("%i", &m);
	
	typedef struct{
		char nome[100];
		float lanceMedio;
	}Veiculos;
	
	float vm[n], lanceMedio[n], maiorLance[n], menorLance[n];
	
	
	typedef struct{
		char nome[100];
		float lances[n];
	}Participantes;
	
	Veiculos veiculo[n];
	Participantes participante[m];
	
	for (i = 0; i < n; i++){
		vm[i] = 0;
		lanceMedio[i] = 0;
		maiorLance[i] = 0;
	}
	
	
	for (i = 0; i < n; i++){
		printf ("\nDigite o modelo do %i%c veiculo: ", i+1, 167);
		fflush(stdin);
		gets(veiculo[i].nome);
	}
	
	for (i = 0; i < m; i++){
		printf ("\nDigite o nome do %i%c participante: ", i+1, 167);
		fflush(stdin);
		gets(participante[i].nome);
		for (j = 0; j < n; j++){
			printf ("\nInsira o lance do participante pelo %i%c veiculo: ", j+1, 167);
			scanf ("%f", &participante[i].lances[j]);
			vm[j] += participante[i].lances[j];
			if (participante[i].lances[j] > maiorLance[j]){
				maiorLance[j] = participante[i].lances[j];
			}
		}
	}
	
	for (i = 0; i < n; i++){
		menorLance[i] = participante[0].lances[i];
	}
	
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			if (participante[i].lances[j] < menorLance[j]){
				menorLance[j] = participante[i].lances[j];
			}
		}
	}
	
	
	
	for (i = 0; i < n; i++){
		lanceMedio[i] = vm[i] / n;
		veiculo[i].lanceMedio = lanceMedio[i];
	}
	
	for (i = 0; i < n; i++){
		printf ("\n");
		printf ("Veiculo: %s \n", veiculo[i].nome);
		printf ("Lance Medio: R$%.2f \n", veiculo[i].lanceMedio);
		printf ("Maior Lance: R$%.2f \n", maiorLance[i]);
		printf ("Menor Lance: R$%.2f \n", menorLance[i]);
	}
	
	return 0;
	
	
	
	
	
}
