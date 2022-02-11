#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int main (void){
	int F[DIM], C[DIM], i;
	char T;
	
	printf ("Do you whish to convert Farenheit to Celsius? \n Y/N \n");
	scanf ("%c", &T);
	
	if (T == 'y' || T == 'Y'){
		system ("cls");
		printf ("Type 10 farenheit temperatures you whish to convert to Celsius: \N");
		
		for (i = 0; i < DIM; i++0{
			scanf ("%i", &F[i]);
			}
		
		for (i = 0; i < DIM; i++){
			C[i] = ((5/9) + 0.5) * (F[i] - 32);
			}
		
		system ("CLS");
		printf ("F-------C \n");
		
		for (i=0; i<DIM; i++){
			printf ("%i-------%i\n", F[i], C[i]);
			}
		}
	else {
		printf ("Type 10 temperatures you wish to convert to Farenheit\n");
		for (i = 0; i < DIM; i++){
		scanf ("%i", &C[i]);
			}
	for (i = 0; i < DIM; i++){
		F[i]= (C[i] * 1.8) + 32;
		}
	system ("cls");
	printf ("F-------C \n");
	for (i=0; i<DIM; i++){
		printf ("%i-------%i\n", F[i], C[i]);
		}
	}
	return 0;
}
