#include <stdio.h>

int main ()
{
	float metros, centimetros;
	printf ("Digite o valor em metros a ser convertido:");
	scanf ("%f", & metros);
		centimetros = metros * 100;
	printf (" o valor em centimetros e %f", centimetros);
return 0; 
}