#include <stdio.h>

int main (void){
	char A, J;
	short B;
	int C;
	long D;
	long long E;
	float F;
	double G;
	int *H;
	char *I=&J;
    printf("This computing environment uses\n");
    printf("%i byte for char\n", sizeof (char));
    printf("%i byte for char Variables\n", sizeof (A));
    printf("%i bytes for short\n", sizeof (short));
    printf("%i bytes for short variables\n", sizeof (B));
    printf("%i bytes for int\n", sizeof (char));
    printf("%i bytes for int variables\n", sizeof (C));
    printf("%i bytes for long\n", sizeof (long));
    printf("%i bytes for long variables\n", sizeof (D));
    printf("%i bytes for long long\n", sizeof (long long));
    printf("%i bytes for long long variables\n", sizeof (E));
    printf("%i bytes for float\n", sizeof (float));
    printf("%i bytes for float variables\n", sizeof (F));
    printf("%i bytes for char\n", sizeof (double));
    printf("%i bytes for char\n", sizeof (G));
    printf("%i bytes for pointer\n", sizeof (int *));
    printf("%i bytes for pointer variable\n", sizeof (H));
    printf("%i bytes for adress of char variable\n", sizeof (&A));
    printf("%i bytes for pointer to char variable\n", sizeof (I));
    printf("%d byte for value stored by pointer to char variable\n", sizeof (*I));
    return 0;
}