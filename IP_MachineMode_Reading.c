#include <stdio.h>
#include <stdlib.h>

int main()
{
     int IP[4];
    unsigned long int IP32BIT;
    int i;
    for (i = 0; i < 4; i++){
     printf ("\n IP number %i: ", i+1);
     scanf ("%i", &IP[i]);
     if ( IP[i] < 0 || IP[i] > 255){
         printf ("\n Incorrect IP Adress.");
         exit (1);
     }
    }
    IP32BIT += IP[0] * 256 * 256 * 256;
    IP32BIT += IP[1] * 256 * 256;
    IP32BIT += IP[2] * 256;
    IP32BIT += IP[3];
    printf ("\n Human-readable IP adress is: %i.%i.%i.%i", IP[0], IP[1], IP[2], IP[3]);
    printf ("\n IP adress as a 32-bit number: %lu", IP32BIT);
	return 0;
}