#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main (void){
	char* matriz[3][3]={
	{"Joao", "Sao Paulo", "(11) 999991111"},
	{"Maria", "Ribeirao Preto", "(16) 99992222"},
	{"Ana", "Manaus", "(92) 999993333"}
	};
	int i, j;
	
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf ("%s \n", matriz[i][j]);
		}
	}
	return 0;
}