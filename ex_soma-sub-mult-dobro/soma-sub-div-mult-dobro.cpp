#include <stdio.h>

int main ()
{
	int numb1, numb2, soma, sub, mult, div, dobro, dobro2;
	printf ("digite o primeiro valor inteiro:");
	scanf ("%d", & numb1);
	printf ("digite o segundo valor inteiro:");
	scanf ("%d", & numb2);
		soma = numb1+numb2;
		sub = numb1-numb2;
		mult = numb1*numb2;
		div = numb1/numb2;
		dobro = numb1*2;
		dobro2 = numb2*2;
	printf (" a soma desses valores e:%d \n", soma);	
	printf (" a subtracao desses valores e: %d \n", sub);
	printf (" a multiplicacao desses valores e: %d \n", mult);
	printf (" a divisao desses valores e: %d \n", div);
	printf (" o dobro do primeiro valor e: %d \n", dobro);
	printf (" o dobro do segundo valor e: %d \n", dobro2);
return 0; 
}