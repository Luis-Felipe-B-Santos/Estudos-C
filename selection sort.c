//selection sort
//n^2 tanto no melhor quanto no pior caso

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i, j, temp, n, min;
	
	printf ("Numero de elementos do vetor: ");
	scanf ("%i", &n);
	
	int vetor[n];
	
	for (i = 0; i < n; i++){
	 	printf ("\n Digite o %i%c numero: ", i + 1, 167);
	 	scanf ("%i", &vetor[i]);
	}
	
	for (i = 0; i < n-1; i++){
		min = i;
		for (j = i+1; j < n; j++){
			if (vetor[j] < vetor[min]){
				min = j;
			}
		}
		if (min != i){
			temp = vetor[i];
			vetor[i] = vetor[min];
			vetor[min] = temp;
		}
	}
	
	printf ("\nVetor ordenado: ");
	for (i = 0; i < n; i++){
		printf ("%i ", vetor[i]);
	}
	return (0);	
}