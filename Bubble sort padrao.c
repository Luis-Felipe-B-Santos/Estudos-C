//bubble sort normal
// n^2

#include <stdlib.h>
#include <stdio.h>

int main (void){
	int i,j, aux, n;
	
	printf ("Numero de elementos do vetor: ");
	scanf ("%i", &n);
	
	int vetor[n];
	
	for (i = 0; i < n; i++){
	 	printf ("\n Digite o %i%c numero: ", i + 1, 167);
	 	scanf ("%i", &vetor[i]);
	}
	
	for (i=0; i < n-1; i++){                   //o primeiro loop trata no numero de passes, onde n-1 é o tamanho do vetor menos 1
		for (j=0; j < n-1; j++ ){              //o segundo loop trata do numero de comparações para cada passe
			if (vetor[j] > vetor[j+1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}	
	}
	
	printf ("\nVetor ordenado: ");
	for (i = 0; i < n; i++){
		printf ("%i ", vetor[i]);
	}
	return 0;
}