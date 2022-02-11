#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void){
	int i;
	float Media, LC;
	struct CAD_LIVROS{
		char Titulo[50];
		int Ano, Paginas;
		float Valor;
	};
	struct CAD_LIVROS Livro[5];
	
	for (i=0; i<5; i++){
		printf ("Qual o titulo do %i%c livro? \n", i+1, 167);
		fflush (stdin);
		gets (Livro[i].Titulo);
		printf ("Em que ano o livro foi publicado? \n");
		scanf ("%i", &Livro[i].Ano);
		printf ("Quantas paginas possui o livro? \n");
		scanf ("%i", &Livro[i].Paginas);
		printf ("Qual foi o valor do livro? \n");
		scanf ("%f", &Livro[i].Valor);
		system ("cls");
	}
	system ("pause");
	system ("cls");
	
	for (i=0; i<5; i++){
		printf ("Titulo do %i%c livro: %s \n", i+1, 167, Livro[i].Titulo);
		printf ("Ano em que o livro foi publicado: %i\n", Livro[i].Ano);
		printf ("Numero de paginas do livro: %i\n", Livro[i].Paginas);
		printf ("Valor do livro: R$ %2.f\n", Livro[i].Valor);
		printf ("Pressione qualquer tecla para exibir o proximo livro\n");
		getch ();
		system ("cls");
	}
	
	Media = (Livro[0].Paginas + Livro[1].Paginas + Livro[2].Paginas + Livro[3].Paginas + Livro[4].Paginas) / 5;
	printf ("Media do numero de paginas de todos os livros: %f \n", Media);
	
	LC = Livro[0].Valor;
	for (i=0; i<5; i++){
		if (LC < Livro[i].Valor){
			LC = Livro[i].Valor;
		}
	}
	
	for (i=0; i<5; i++){
		if (LC == Livro[i].Valor){
			printf ("O livro com o maior valor e %s, que custa R$ %2.f", Livro[i].Titulo, Livro[i].Valor);
		}
	}
	return 0;
}