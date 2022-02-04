#include <stdlib.h>
#include <stdio.h>

int getMax (int vetor[], int numero);
void ordenador (int vetor[], int numero, int posicao);
void radixSort (int vetor[], int numero);

int main (void){
	int numero, i;
	
	printf ("Numero de elementos do vetor: ");
	scanf ("%i", &numero);
	
	int vetor[numero];
	
	for (i = 0; i < numero; i++){
	 	printf ("\n Digite o %i%c numero: ", i + 1, 167);
	 	scanf ("%i", &vetor[i]);
	 }
	system ("cls");
	
	printf ("Vetor inicial: ");
	for (i = 0; i < numero; i++){
		printf ("%i ", vetor[i]);
	}
	printf ("\n");
	
	radixSort (vetor, numero);	
	
	return (0);
}

int getMax (int vetor[], int numero){
	
	int i, max = vetor[0];
	
	for (i = 1; i < numero; i++ ){
		
		if (vetor[i] > max){
			
			max = vetor[i];
			
		}
	}
	return(max);
}

void ordenador (int vetor[], int numero, int posicao){
 	
	int arrayB[numero], count[10], i, k = 0;
	
	printf ("\n Vetor inicial: {666, 346, 23, 33, 12, 1, 90, 565, 238, 349}");
	printf ("\n Valor de n = %i", numero);
	printf ("\n Valor de pos = %i", posicao);
	
	printf ("\n===============================\n");
	
	for (i = 0; i < 10; i++){
		count[i] = 0;
		printf ("\n Count[%i] (inicial) = %i", i, count[i]);
	}
	
	printf ("\n===============================\n");
	
	for (i = 0; i < numero; i++){
		if ( ( (vetor[i] / posicao) % 10) > k){
			k = (vetor[i] / posicao) % 10;
			printf ("\n k comparado com vetor[%i] = %i", i, k);
		} 
	}
	printf ("\n k final = %i", k);
	
	printf ("\n===============================\n");
	
	for (i = 0; i < numero; i++){
		++count[ (vetor[i] / posicao) % 10];
	}
	
	for (i = 0; i < 10; i++){
		printf("\n count[%i] (nro de vezes que aparece) = %i", i, count[i]);
	}
	
	printf ("\n===============================\n");
	
	for (i = 1; i <= k; i++){
		count[i] = count[i] + count[ i - 1 ];
	}
	
	for (i = 0; i < 10; i++){
		printf ("\n count[%i] (posicao) = %i", i, count[i]);
	}
	
	printf ("\n===============================\n");
	
	for (i = numero - 1; i >= 0; i--){
		arrayB[ --count[ (vetor[i] / posicao) % 10 ]] = vetor[i];
	}
	
	for (i = 0; i < numero; i++){
		printf ("\n vetorB[%i] = %i", i, arrayB[i]);
	}

	printf ("\n===============================\n");

	for (i = 0; i < numero; i++){
		vetor[i] = arrayB[i];	
	}
	
	for (i = 0; i < numero; i++){
		printf ("\n vetor[%i] copiado = %i", i, vetor[i]);
	}
}

void radixSort (int vetor[], int numero){
	int posicao, i;
	int Max = getMax(vetor, numero);
	for (posicao = 1; (Max / posicao) > 0; posicao *= 10){
		ordenador (vetor, numero, posicao);
	}
	printf ("\n O vetor ordenado e: { ");
	for (i = 0; i < numero; i++){
	 	printf ("%i ", vetor[i]);
	 }
	 printf ("}");
}