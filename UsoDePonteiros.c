#include <stdio.h>

int main (void){
	int variavel, *ponteiro;
	
	variavel = 5;
	ponteiro = &variavel; //O operador unario & é usado para indicar para onde o ponteiro irá apontar
	*ponteiro = 4; // o valor do ponteiro não mudou, o que mudou foi o valor da variavel apontada pelo ponteiro

	printf ("%i \n", variavel);
	
	// O teste a seguir nos informa a diferença na forma de declaração e da diferença entre
	// printar o ponteiro em si e printar o valor ao qual o ponteiro está apontando
	
	char Var = 'j', Var1 = 'Z', Var2 = 'F';
	char *pont=&Var, *pont1, *pont2;
	
	pont1 = &Var1;
	
    printf("%c ponteiro\n", pont);        
    printf("%c *ponteiro\n", *pont);      
    printf("%c ponteiro1 \n", pont1);      
    printf("%c *ponteiro1 \n", *pont1);
    printf("%c ponteiro2 \n", pont2);
    printf("%c *ponteiro2 \n", *pont2);
    // Pode-se perceber que as formas de declaração *pont=&Var e pont1 = &Var1 são equivalentes
    return 0;
}