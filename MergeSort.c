#include <stdlib.h>
#include <stdio.h>
// tempo O = (m + n) 

void merge(int vetor[], int LowerBound, int meio, int HigherBound)
{
    int i, j, k;
    int tam1 = meio - LowerBound + 1;
    int tam2 = HigherBound - meio;
  
    int L[tam1], R[tam2];
  
    for (i = 0; i < tam1; i++){
        L[i] = vetor[LowerBound + i];
    }
    for (j = 0; j < tam2; j++){
        R[j] = vetor[meio + 1 + j];
    }

    i = 0; 
    j = 0; 
    k = LowerBound; 
    while (i < tam1 && j < tam2) {
        if (L[i] <= R[j]) {
            vetor[k] = L[i];
            i++;
        }
        else {
            vetor[k] = R[j];
            j++;
        }
        k++;
    }
  
    while (i < tam1) {
        vetor[k] = L[i];
        i++;
        k++;
    }
  
    while (j < tam2) {
        vetor[k] = R[j];
        j++;
        k++;
    }
}
  
void mergeSort(int vetor[], int LowerBound, int HigherBound)
{
    if (LowerBound < HigherBound) {
    	
        int meio = LowerBound + (HigherBound - LowerBound) / 2;
  
        mergeSort(vetor, LowerBound, meio);
        mergeSort(vetor, meio + 1, HigherBound);
  
        merge(vetor, LowerBound, meio, HigherBound);
    }
}
  
  
int main(){
	int i, tamanho;
	
    printf ("Quantos elementos tera o vetor: ");
	scanf ("%i", &tamanho);
	
	int vetor[tamanho];
	for (i = 0; i < tamanho; i++){
	printf ("\n %i%c elemento: ", i+1, 167);
	scanf ("%i", &vetor[i]);
	}
    mergeSort(vetor, 0, tamanho - 1);
  
    printf("\nO vetor ordenado e: ");
    for (i = 0; i < tamanho; i++){
    	printf ("%i ", vetor[i]);
	}
    return 0;

}