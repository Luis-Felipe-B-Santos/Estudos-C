//insertion sort
//n^2 no pior caso, ou seja, quando o vetor esta em ordem descendente (maior pro menor) e temos que arranja-lo em ordem ascendente
//n no melhor caso, ou seja, quando o vetor esta em ordem ascendente e queremos arranja-lo em ordem ascendente

#include <stdlib.h>
#include <stdio.h>

int main (void){
	int i, j, temp, n;
	
	printf ("Numero de elementos do vetor: ");
	scanf ("%i", &n);
	
	int vetor[n];
	
	for (i = 0; i < n; i++){
	 	printf ("\n Digite o %i%c numero: ", i + 1, 167);
	 	scanf ("%i", &vetor[i]);
	}
	
	for (i = 1; i < n; i++){ 
		temp = vetor[i];
		j = i-1;
		while (j >= 0 && vetor[j] > temp){
			vetor[j+1] = vetor[j];
			j--;
		}
		vetor[j+1] = temp;
	}
	
	printf ("\nVetor ordenado: ");
	for (i = 0; i < n; i++){
		printf ("%i ", vetor[i]);
	}
	return 0;	
}