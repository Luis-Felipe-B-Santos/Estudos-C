#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void testeTotais (int* totAU, int* totDI, int* totVI, int* totCI);
void resultado (FILE* ponteiro, char nome[], int TOTVI, int TOTAU, int TOTCI, int TOTDI);

int main (void) 
{ 
int TOTVI, TOTDI, TOTAU, TOTCI;
int i, NroFrase, cinestesico, auditivo, visual, digital;
char NOME[100], PRONTUARIO[100], FileName[100], frase[100], item_1[100], item_2[100], item_3[100], item_4[100];
char op, col1[20], col2[20], col3[20], col4[20], col5[20], col6[20], col7[20], col8[20], col9[20], col10[20];

printf ("\n DIGITE SEU NOME \t :  ");
fflush (stdin); // limpa o buffer do teclado
gets (NOME); // recebe a string que for digitada
printf ("\n DIGITE SEU PRONTUARIO \t :  ");
fflush (stdin);
gets (PRONTUARIO); 
if (strcmp(NOME,"MASTER") == 0)
{do {
	system ("CLS");
	printf("==================================================== \n");
	printf("\t TESTE DOS SISTEMAS REPRESENTACIONAIS \n");
	printf("====================================================\n");
	printf("\t 1. Cadastrar questionario \n");
	printf("\t 2. Visualizar questionario \n");
	printf("\t 3. Realizar teste \n");
	printf("\t 4. Sobre o teste \n");
	printf("\t F. Fim \n");
	printf("====================================================\n");
	printf("\t Escolha -> ");
	op = getch ();
	if (op == '1'){
			system ("CLS");
			FILE *ponteiro3;
			ponteiro3 = fopen ("TESTE_SISTEMA_REPRESENTACIONAL.DAT", "w");
			if (ponteiro3 == NULL){
				printf ("Erro na abertura do arquivo");
			}
			else{
				printf ("Arquivo aberto com sucesso\n");
			}
			printf ("Qual e o nome da coluna 1? \n");
			scanf  ("%s", &col1);
			printf ("Qual e o nome da coluna 2? \n");
			scanf  ("%s", &col2);	
			printf ("Qual e o nome da coluna 3? \n");
			scanf  ("%s", &col3);	
			printf ("Qual e o nome da coluna 4? \n");
			scanf  ("%s", &col4);	
			printf ("Qual e o nome da coluna 5? \n");
			scanf  ("%s", &col5);	
			printf ("Qual e o nome da coluna 6? \n");
			scanf  ("%s", &col6);	
			printf ("Qual e o nome da coluna 7? \n");
			scanf  ("%s", &col7);	
			printf ("Qual e o nome da coluna 8? \n");
			scanf  ("%s", &col8);	
			printf ("Qual e o nome da coluna 9? \n");
			scanf  ("%s", &col9);	
			printf ("Qual e o nome da coluna 10? \n");
			scanf  ("%s", &col10);				
			system ("cls");
			fprintf (ponteiro3, "%-9s%-50s%-12s%-63s%-9s%-53s%-7s%-57s%-8s%-68s\n", col1, col2, col3, col4, col5, col6, col7, col8, col9, col10);
			{printf ("Quais sao os itens da linha 1? \n");
			printf ("%s: ", col1);
			scanf  ("%i", &NroFrase);
			printf ("\n%s: ", col2);
			fflush (stdin);
			gets   (frase); 
			printf ("\n%s: ", col3);
			scanf  ("%i", &cinestesico);
			printf ("\n%s: ", col4);
			fflush (stdin);
			gets   (item_1);
			printf ("\n%s: ", col5);
			scanf  ("%i", &auditivo);
			printf ("\n%s: ", col6);
			fflush (stdin);
			gets   (item_2);
			printf ("\n%s: ", col7);
			scanf  ("%i", &visual);
			printf ("\n%s: ", col8);
			fflush (stdin);
			gets   (item_3);
			printf ("\n%s: ", col9);
			scanf  ("%i", &digital);
			printf ("\n%s: ", col10);
			fflush (stdin);
			gets   (item_4);
			system ("cls");
			fprintf (ponteiro3, "%-9i%-50s%-12i%-63s%-9i%-53s%-7i%-57s%-8i%-68s\n", NroFrase, frase, cinestesico, item_1, auditivo, item_2, visual, item_3, digital, item_4);}
			{printf ("Quais sao os itens da linha 2? \n");
			printf ("\n%s: ", col1);
			scanf  ("%i", &NroFrase);
			printf ("\n%s: ", col2);
			fflush (stdin);
			gets   (frase); 
			printf ("\n%s: ", col3);
			scanf  ("%i", &cinestesico);
			printf ("\n%s: ", col4);
			fflush (stdin);
			gets   (item_1);
			printf ("\n%s: ", col5);
			scanf  ("%i", &auditivo);
			printf ("\n%s: ", col6);
			fflush (stdin);
			gets   (item_2);
			printf ("\n%s: ", col7);
			scanf  ("%i", &visual);
			printf ("\n%s: ", col8);
			fflush (stdin);
			gets   (item_3);
			printf ("\n%s: ", col9);
			scanf  ("%i", &digital);
			printf ("\n%s: ", col10);
			fflush (stdin);
			gets   (item_4);
			system ("cls");
			fprintf (ponteiro3, "%-9i%-50s%-12i%-63s%-9i%-53s%-7i%-57s%-8i%-68s\n", NroFrase, frase, cinestesico, item_1, auditivo, item_2, visual, item_3, digital, item_4);}
			{printf ("Quais sao os itens da linha 3? \n");
			printf ("\n%s: ", col1);
			scanf  ("%i", &NroFrase);
			printf ("\n%s: ", col2);
			fflush (stdin);
			gets   (frase); 
			printf ("\n%s: ", col3);
			scanf  ("%i", &cinestesico);
			printf ("\n%s: ", col4);
			fflush (stdin);
			gets   (item_1);
			printf ("\n%s: ", col5);
			scanf  ("%i", &auditivo);
			printf ("\n%s: ", col6);
			fflush (stdin);
			gets   (item_2);
			printf ("\n%s: ", col7);
			scanf  ("%i", &visual);
			printf ("\n%s: ", col8);
			fflush (stdin);
			gets   (item_3);
			printf ("\n%s: ", col9);
			scanf  ("%i", &digital);
			printf ("\n%s: ", col10);
			fflush (stdin);
			gets   (item_4);
			system ("cls");
			fprintf (ponteiro3, "%-9i%-50s%-12i%-63s%-9i%-53s%-7i%-57s%-8i%-68s\n", NroFrase, frase, cinestesico, item_1, auditivo, item_2, visual, item_3, digital, item_4);}
			{printf ("Quais sao os itens da linha 4? \n");
			printf ("\n%s: ", col1);
			scanf  ("%i", &NroFrase);
			printf ("\n%s: ", col2);
			fflush (stdin);
			gets   (frase); 
			printf ("\n%s: ", col3);
			scanf  ("%i", &cinestesico);
			printf ("\n%s: ", col4);
			fflush (stdin);
			gets   (item_1);
			printf ("\n%s: ", col5);
			scanf  ("%i", &auditivo);
			printf ("\n%s: ", col6);
			fflush (stdin);
			gets   (item_2);
			printf ("\n%s: ", col7);
			scanf  ("%i", &visual);
			printf ("\n%s: ", col8);
			fflush (stdin);
			gets   (item_3);
			printf ("\n%s: ", col9);
			scanf  ("%i", &digital);
			printf ("\n%s: ", col10);
			fflush (stdin);
			gets   (item_4);
			system ("cls");
			fprintf (ponteiro3, "%-9i%-50s%-12i%-63s%-9i%-53s%-7i%-57s%-8i%-68s\n", NroFrase, frase, cinestesico, item_1, auditivo, item_2, visual, item_3, digital, item_4);}
			{printf ("Quais sao os itens da linha 5? \n");
			printf ("\n%s: ", col1);
			scanf  ("%i", &NroFrase);
			printf ("\n%s: ", col2);
			fflush (stdin);
			gets   (frase); 
			printf ("\n%s: ", col3);
			scanf  ("%i", &cinestesico);
			printf ("\n%s: ", col4);
			fflush (stdin);
			gets   (item_1);
			printf ("\n%s: ", col5);
			scanf  ("%i", &auditivo);
			printf ("\n%s: ", col6);
			fflush (stdin);
			gets   (item_2);
			printf ("\n%s: ", col7);
			scanf  ("%i", &visual);
			printf ("\n%s: ", col8);
			fflush (stdin);
			gets   (item_3);
			printf ("\n%s: ", col9);
			scanf  ("%i", &digital);
			printf ("\n%s: ", col10);
			fflush (stdin);
			gets   (item_4);
			system ("cls");
			fprintf (ponteiro3, "%-9i%-50s%-12i%-63s%-9i%-53s%-7i%-57s%-8i%-68s\n", NroFrase, frase, cinestesico, item_1, auditivo, item_2, visual, item_3, digital, item_4);}
			fclose (ponteiro3);
			//criar a tabela e gerar o arquivo dat
			//retornar ao menu
			system ("pause");
			}
			else if (op == '2'){
				system ("CLS");
				//ler o arquivo dat
				//cadastrar o arquivo dat em um txt
				//retornar ao menu
				FILE *file;
				file = fopen ("TESTE_SISTEMA_REPRESENTACIONAL.dat", "r");
				FILE *file1;
				file1 = fopen ("QUESTIONARIO_1.txt", "w");
				char leitor[1000];
				while (fgets (leitor, 1000, file) !=NULL){
					fputs (leitor, file1);	
				}
				fclose (file);
				fclose (file1);
				FILE *file3;
				file3 = fopen ("QUESTIONARIO_1.txt", "r");
				char D;
				while ((D = fgetc(file3)) != EOF){
					putchar (D);
				}
				fclose (file3);
				system ("pause");
				}
				else if (op == '3'){
					system ("CLS");
					testeTotais (&TOTAU, &TOTDI, &TOTVI, &TOTCI);
					system ("pause");
					//colocar o resultado de tudo isso em um arquivo txt
					//exibir tudo isso na tela
					FILE *ponteiro;
					sprintf (FileName, "Resultado_%s_%s.txt", NOME, PRONTUARIO); // transforma filename em um ponteiro que vale Resultado_Nome_Prontuario
					ponteiro = fopen(FileName, "w+");
					if (ponteiro == NULL){
					printf("Erro na abertura do arquivo");
					return 1;
					} else
					resultado (ponteiro, NOME, TOTVI, TOTAU, TOTCI, TOTDI);
					fclose (ponteiro);
					FILE *ponteiro1;
					ponteiro1 = fopen (FileName, "r");
					char B;
					while ((B = fgetc (ponteiro)) != EOF)
					putchar (B);
					fclose (ponteiro1);			
					system ("pause");
					}
					else if (op == '4'){
					system ("CLS");	
					char A;
					FILE *arq;
					arq = fopen ("REFERENCIAL_TEORICO.TXT", "r");
					while ((A = fgetc (arq)) != EOF)
					putchar (A);	
					fclose (arq);
					system ("pause");
					}
					else if (op == 'F' || op == 'f'){
					system ("CLS");
					return 0;
					}
					else {
					printf ("Erro ao escolher \n");
					system ("pause");
					}
} while (op != 'F' && op != 'f');
return 0;
	}
else {
	system ("CLS");
		testeTotais (&TOTAU, &TOTDI, &TOTVI, &TOTCI);
		FILE *ponteiro2;
		sprintf (FileName, "Resultado_%s_%s.txt", NOME, PRONTUARIO);
		ponteiro2 = fopen(FileName, "w+");
		if (ponteiro2 == NULL){
		printf("Erro na abertura do arquivo");
		return 1;
		} else
		resultado (ponteiro2, NOME, TOTVI, TOTAU, TOTCI, TOTDI);
		fclose (ponteiro2);
		FILE* ponteiro3;
		ponteiro3 = fopen(FileName, "r");
		char C;
		while ((C = fgetc (ponteiro2)) != EOF)
		putchar (C);
		fclose (ponteiro3);
		system ("pause");
		exit (0);
}
}

void resultado (FILE* ponteiro, char nome[], int TOTVI, int TOTAU, int TOTCI, int TOTDI){
	fprintf (ponteiro, "==================== PERFIL REPRESENTACIONAL DE %s ====================\n", nome);
	fprintf (ponteiro, "%i Visual    %i Auditivo    %i Cinestesico     %i Digital\n", TOTVI, TOTAU, TOTCI, TOTDI);
	fprintf (ponteiro, "=======================================================================\n");
	fprintf (ponteiro, "\n");
	fprintf (ponteiro, "Algumas pessoas captam melhor as mensagens do mundo exterior atraves da audicao, sao as pessoas chamadas auditivas.\n");
	fprintf (ponteiro, "Outras pessoas sentem necessidade de perguntar muito, necessitam de muitas informacoes e fatos. Estas sao as digitais.\n");
	fprintf (ponteiro, "As cinestesicas aprendem melhor por meio das sensacoes tateis, como o tato, a temperatura, a umidade, as sensacpes internas e as emocoes.\n");
	fprintf (ponteiro, "Ja as pessoas visuais aprendem melhor quando se valendo da visao.\n\n");
	fprintf (ponteiro, "=======================================================================\n");
	if (TOTAU > TOTVI && TOTAU > TOTCI && TOTAU > TOTDI){
	fprintf (ponteiro, "Seu perfil e AUDITIVO\n");
	fprintf (ponteiro, "=======================================================================\n");}
	else if (TOTVI > TOTAU && TOTVI > TOTCI && TOTVI > TOTDI){
	fprintf (ponteiro, "Seu perfil e VISUAL\n");
	fprintf (ponteiro, "=======================================================================\n");}	
	else if (TOTDI > TOTAU && TOTDI > TOTVI && TOTDI > TOTCI){
	fprintf (ponteiro, "Seu perfil e DIGITAL\n");
	fprintf (ponteiro, "=======================================================================\n");}
	else if (TOTCI > TOTAU && TOTCI> TOTVI && TOTCI > TOTDI){
	fprintf (ponteiro, "Seu perfil e CINESTESICO\n");
	fprintf (ponteiro, "=======================================================================\n");}
	else{
	fprintf (ponteiro, "Seu perfil e um misto dos tipos empatados!\n");
	fprintf (ponteiro, "=======================================================================\n");}	
}

void testeTotais (int* totAU, int* totDI, int* totVI, int* totCI){
	
	int AU1, AU2, AU3, AU4, AU5, CI1, CI2, CI3, CI4, CI5, VI1, VI2, VI3, VI4, VI5, DI1, DI2, DI3, DI4, DI5;
	int TOT[4];

	printf ("nas frases a seguir pontue com: \n");
	printf ("4 a que melhor descreve voce; \n");
	printf ("3 a proxima melhor descricao; \n");
	printf ("2 a proxima melhor, e \n");
	printf ("1 aquela que menos descreve voce.\n\n\n");
	printf ("1. Eu tomo decisoes importantes baseado em: \n");
	printf ("a) intuicao \n");
	printf ("b) o que me soa melhor \n");
	printf ("c) o que me parece melhor \n");
	printf ("d) um estudo minucioso do assunto \n");
	printf ("[a] -> ");
	scanf  ("%i", &CI1);
	printf ("[b] -> ");
	scanf  ("%i", &AU1);
	printf ("[c] -> ");
	scanf  ("%i", &VI1);
	printf ("[d] -> ");
	scanf  ("%i", &DI1);
	system ("CLS");
	if (AU1 > 4 || AU1 < 1 || CI1 > 4 || CI1 <1 || VI1 > 4 || VI1 < 1 || DI1 > 4 || DI1 < 1){
		printf ("Os unicos valores aceitos sao de 1 a 4 \n");
		exit (0);
	}
	else if (AU1==CI1 || AU1==VI1 || AU1==DI1 || CI1==VI1 || CI1==DI1 || VI1==DI1){
		printf ("Valores repetidos nao sao aceitos");
		exit (0);
	}
	else {
		printf ("nas frases a seguir pontue com: \n");
		printf ("4 a que melhor descreve voce; \n");
		printf ("3 a proxima melhor descricao; \n");
		printf ("2 a proxima melhor, e \n");
		printf ("1 aquela que menos descreve voce.\n\n\n");
		printf ("2. durante uma discussao sou mais influenciado por: \n");
		printf ("a) o tom da voz da outra pessoa \n");
		printf ("b) se eu posso ou nao ver o argumento da outra pessoa \n");
		printf ("c) a logica do argumento da outra pessoa \n");
		printf ("d) se eu entro em contato ou nao com os sentimentos reais do outro \n");
		printf ("[a] -> ");
		scanf  ("%i", &AU2);
		printf ("[b] -> ");
		scanf  ("%i", &VI2);
		printf ("[c] -> ");
		scanf  ("%i", &DI2);
		printf ("[d] -> ");
		scanf  ("%i", &CI2);
		system ("CLS");	
	}
	if (AU2 > 4 || AU2 < 1 || CI2 > 4 || CI2 <1 || VI2 > 4 || VI2 < 1 || DI2 > 4 || DI2 < 1){
		printf ("Os unicos valores aceitos sao de 1 a 4");
		exit (0);
	}
	else if (AU2==CI2 || AU2==VI2 || AU2==DI2 || CI2==VI2 || CI2==DI2 || VI2==DI2){
		printf("Valores repetidos nao sao aceitos");
		exit(0);
	}
	else{
		printf ("nas frases a seguir pontue com: \n");
	    printf ("4 a que melhor descreve voce; \n");
		printf ("3 a proxima melhor descricao; \n");
		printf ("2 a proxima melhor, e \n");
		printf ("1 aquela que menos descreve voce.\n\n\n");
		printf ("3. Eu comunico mais facilmente o que se passa comigo: \n");
		printf ("a) do modo como me visto e aparento \n");
		printf ("b) pelos sentimentos que compartilho \n");
		printf ("c) pelas palavras que escolho \n");
		printf ("d) pelo tom da minha voz \n");
		printf ("[a] -> ");
		scanf  ("%i", &VI3);
		printf ("[b] -> ");
		scanf  ("%i", &CI3);
		printf ("[c] -> ");
		scanf  ("%i", &DI3);
		printf ("[d] -> ");
		scanf  ("%i", &AU3);
		system ("CLS");
	}
	if (AU3 > 4 || AU3 < 1 || CI3 > 4 || CI3 <1 || VI3 > 4 || VI3 < 1 || DI3 > 4 || DI3 < 1){
		printf ("Os unicos valores aceitos sao de 1 a 4");
		exit (0);
		}
	else if (AU3==CI3 || AU3==VI3 || AU3==DI3 || CI3==VI3 || CI3==DI3 || VI3==DI3){
		printf("Valores repetidos nao sao aceitos");
		exit(0);
	}
	else{
		printf ("nas frases a seguir pontue com: \n");
		printf ("4 a que melhor descreve voce; \n");
		printf ("3 a proxima melhor descricao; \n");
		printf ("2 a proxima melhor, e \n");
		printf ("1 aquela que menos descreve voce.\n\n\n");
		printf ("4. E muito facil para mim: \n");
		printf ("a) achar o volume e a sintonia ideais num sistema de som \n");
		printf ("b) selecionar o ponto mais relevante relativo a um assunto interessante \n");
		printf ("c) escolher os moveis mais confortaveis \n");				
		printf ("d) escolher as combinacoes de cores mais ricas e atraentes \n");
		printf ("[a] -> ");
		scanf  ("%i", &AU4);
		printf ("[b] -> ");
		scanf  ("%i", &DI4);
		printf ("[c] -> ");
		scanf  ("%i", &CI4);
		printf ("[d] -> ");				
		scanf  ("%i", &VI4);
		system ("CLS");
	}
	if (AU4 > 4 || AU4 < 1 || CI4 > 4 || CI4 <1 || VI4 > 4 || VI4 < 1 || DI4 > 4 || DI4 < 1){
		printf ("Os unicos valores aceitos sao de 1 a 4");
		exit (0);
	}
	else if (AU4==CI4 || AU4==VI4 || AU4==DI4 || CI4==VI4 || CI4==DI4 || VI4==DI4){
		printf("Valores repetidos nao sao aceitos");
		exit(0);
	}
	else{
		printf ("nas frases a seguir pontue com: \n");
		printf ("4 a que melhor descreve voce; \n");
		printf ("3 a proxima melhor descricao; \n");
		printf ("2 a proxima melhor, e \n");
		printf ("1 aquela que menos descreve voce.\n\n\n");
		printf ("5. Eu me percebo assim: \n");
		printf ("a) se estou muito em sintonia com os sons dos ambientes \n");
		printf ("b) se sou muito capaz de raciocinar com fatos e dados novos \n");
		printf ("c) eu sou muito sensivel a maneira como a roupa veste o meu corpo \n");
		printf ("d) eu respondo fortemente as cores e a aparencia de uma sala \n");
		printf ("[a] -> ");
		scanf  ("%i", &AU5);
		printf ("[b] -> ");
		scanf  ("%i", &DI5);
		printf ("[c] -> ");
		scanf  ("%i", &CI5);
		printf ("[d] -> ");
		scanf  ("%i", &VI5);
		system ("CLS");
	}
	if (AU5 > 4 || AU5 < 1 || CI5 > 4 || CI5 <1 || VI5 > 4 || VI5 < 1 || DI5 > 4 || DI5 < 1){
		printf ("Os unicos valores aceitos sao de 1 a 4");
		exit (0);
	}
	else if (AU5==CI5 || AU5==VI5 || AU5==DI5 || CI5==VI5 || CI5==DI5 || VI5==DI5){
		printf("Valores repetidos nao sao aceitos");
		exit(0);
	}
	else{
		*totAU = 2 * (AU1 + AU2 + AU3 + AU4 + AU5); //TOTAU
		*totDI = 2 * (DI1 + DI2 + DI3 + DI4 + DI5); //TOTDI
		*totVI = 2 * (VI1 + VI2 + VI3 + VI4 + VI5); //TOTVI
		*totCI = 2 * (CI1 + CI2 + CI3 + CI4 + CI5); //TOTCI
	}
}