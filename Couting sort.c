// Counting sort - conta os key values do array
// passo 1 - achar o valor minimo dos elementos
// passo 2 - achar o valor maximo K dos elementos
// passo 3 - criar um novo array COUNT com numero de elementos K+1
// passo 4 - COUNT deve ser iniciado com todos os valores = 0
// passo 5 - Incrementar em 1 o valor corresponente de COUNT para cada repetição do Key value
// passo 6 - atualizar os valores de COUNT para que ele reflita as posições do Array ja ordenado
// passo 7 - criar um novo array com o mesmo tamanho do array inicial para receber os valores ordenados
// passo 8 - Copiar os valores do array 1 para o array 2 utilizando COUNT para a ordenação
/* Exemplo: 

	Array[10] = {1, 0, 1, 2, 2, 2, 3, 4, 6, 4}
	
	Os Key values são - 0, 1, 2, 3, 4 e 6
	
	O valor minimo é 0 e o maximo 6, entao o range é de 0 a 6
	 
	COUNT[K+1 = 7] = COUNT[0] = 0, COUNT[1] = 0, COUNT[2] = 0, COUNT[3] = 0, COUNT[4] = 0, COUNT[5] = 0, COUNT[6] = 0 	Inicial 0
	COUNT[K+1 = 7] = COUNT[0] = 0, COUNT[1] = 1, COUNT[2] = 0, COUNT[3] = 0, COUNT[4] = 0, COUNT[5] = 0, COUNT[6] = 0 	COUNT[1] recebeu 1
	COUNT[K+1 = 7] = COUNT[0] = 1, COUNT[1] = 1, COUNT[2] = 0, COUNT[3] = 0, COUNT[4] = 0, COUNT[5] = 0, COUNT[6] = 0 	COUNT[0] recebeu 1
	COUNT[K+1 = 7] = COUNT[0] = 1, COUNT[1] = 2, COUNT[2] = 0, COUNT[3] = 0, COUNT[4] = 0, COUNT[5] = 0, COUNT[6] = 0 	COUNT[1] recebeu 1
	COUNT[K+1 = 7] = COUNT[0] = 1, COUNT[1] = 2, COUNT[2] = 1, COUNT[3] = 0, COUNT[4] = 0, COUNT[5] = 0, COUNT[6] = 0 	COUNT[2] recebeu 1
	COUNT[K+1 = 7] = COUNT[0] = 1, COUNT[1] = 2, COUNT[2] = 2, COUNT[3] = 0, COUNT[4] = 0, COUNT[5] = 0, COUNT[6] = 0 	COUNT[2] recebeu 1
	COUNT[K+1 = 7] = COUNT[0] = 1, COUNT[1] = 2, COUNT[2] = 3, COUNT[3] = 0, COUNT[4] = 0, COUNT[5] = 0, COUNT[6] = 0 	COUNT[2] recebeu 1
	COUNT[K+1 = 7] = COUNT[0] = 1, COUNT[1] = 2, COUNT[2] = 3, COUNT[3] = 1, COUNT[4] = 0, COUNT[5] = 0, COUNT[6] = 0 	COUNT[3] recebeu 1
	COUNT[K+1 = 7] = COUNT[0] = 1, COUNT[1] = 2, COUNT[2] = 3, COUNT[3] = 1, COUNT[4] = 1, COUNT[5] = 0, COUNT[6] = 0 	COUNT[4] recebeu 1
	COUNT[K+1 = 7] = COUNT[0] = 1, COUNT[1] = 2, COUNT[2] = 3, COUNT[3] = 1, COUNT[4] = 1, COUNT[5] = 0, COUNT[6] = 1 	COUNT[6] recebeu 1
	COUNT[K+1 = 7] = COUNT[0] = 1, COUNT[1] = 2, COUNT[2] = 3, COUNT[3] = 1, COUNT[4] = 2, COUNT[5] = 0, COUNT[6] = 1 	COUNT[4] recebeu 1
	COUNT[7] = {1, 2, 3, 1, 2, 0, 1}
	
	COUNT[7] = {1, 3, 6, 7, 9, 9, 10}
	
	Array[10] = {1, 0, 1, 2, 2, 2, 3, 4, 6, 4}
	
	ARRAY1[10] = {0, 1, 1, 2, 2, 2, 3, 4, 4, 6} (ORDENADO)	 */	 
	
#include <stdlib.h>
#include <stdio.h>


int main (void){
	 int n, i, k = 0;
	 
	 printf ("\n Insira o numero de elementos do vetor: ");
	 scanf ("%i", &n);
	 
	 int A[n], B[n];
	 
	 for (i = 0; i < n; i++){
	 	printf ("\n insira o %i%c elemento: ", i + 1, 167);
	 	scanf ("%i", &A[i]);
	 }
	 system ("cls");
	 
	 int CountingSort( int n, int A[]);
	 
	 CountingSort (n, A);
	 
	 printf ("O vetor ordenado e: { ");
	 for (i = 0; i < n; i++){
	 	printf ("%i ", A[i]);
	 }
	 printf ("}");
	 return (0);
}

int CountingSort(int n, int A[]){
	int B[n], i, k = 0;
	
	for (i = 0; i < n; i++){
		if (A[i] > k){
			k = A[i];
		} 
	}
	int COUNT[k+1];
	for (i = 0; i < k + 1; i++){
		COUNT[i] = 0;
	}
	for (i = 0; i < n; i ++){
		COUNT[ A[i] ]++;
	}
	for (i = 1; i <= k; i++){
	COUNT[i] = COUNT[i] + COUNT[i - 1];
	}
	for (i = n-1; i >= 0; i--){
		B[ --COUNT [ A[i] ] ] = A[i];
	}
	for (i = 0; i < n; i++){
		A[i] = B[i];	
	}
	return 0;
}




