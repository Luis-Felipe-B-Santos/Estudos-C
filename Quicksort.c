#include <stdio.h>
#include <stdlib.h>
// melhor caso teremos O = n log(n)
// pior caso teremos O = n^2

void quicksort (int vetor[], int lb, int ub);
int particionar (int vetor[], int lb, int ub);

int main (void){
	int i, n, lb, ub; // n = tamanho, lb = lower boundary, ub, upper boundary
	
	printf ("Quantos elementos tera o vetor: ");
	scanf ("%i", &n);
	
	int vetor[n];
	
	for (i = 0; i < n; i++){
		printf ("\n %i%c elemento: ", i+1, 167);
		scanf ("%i", &vetor[i]);
	}
	lb = 0;
	ub = n-1;
	
	quicksort (vetor, lb, ub);
	
	printf ("\n Vetor ordenado: ");
	for (i = 0; i < n; i++){
		printf ("%i ", vetor[i]);
	}
	return 0;
}





void quicksort (int vetor[], int lb, int ub){
	
	if (lb < ub){
		int local;
		local = particionar (vetor, lb, ub);
		quicksort (vetor, lb, local - 1);
		quicksort (vetor, local + 1, ub);
	}
	
}
int particionar (int vetor[], int lb, int ub){
	
	int pivo = vetor[lb], inicio = lb, final = ub, aux;
	
	while (inicio < final){
		while (vetor[inicio] <= pivo){
			inicio ++;
		}
		while (vetor[final] > pivo){
			final --;
		}
		if (inicio < final){
			aux = vetor[inicio];
			vetor[inicio] = vetor[final];
			vetor[final] = aux; 
		}
	}
	aux = vetor[lb];
	vetor[lb] = vetor[final];
	vetor[final] = aux;
	return (final);
}