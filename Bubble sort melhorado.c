//bubble sort melhorado
//n^2

#include <stdlib.h>
#include <stdio.h>

int main (void){
	int i, j, aux, n, flag, vetor[n];
	
	for (i=0; i < n-1; i++){                    //para melhorar esse algoritmo, modificamos o loop responsavel pelas comparações (loop j)
	    flag = 0;                               //flag é adicionada para verificar se houve ou não uma nova ordenação
		for (j=0; j < n-1-i; j++ ){           //de forma que o limite de suas comparações ignorem as comparações repetidas  
			if (vetor[j] > vetor[j+1]){           
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
				flag = 1;
			}
		}
	if (flag == 0){
		break;
	}		
}
}