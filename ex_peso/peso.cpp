#include <stdio.h>
	int main ()
{
	float peso1, peso2, soma;
	printf("digite o peso do usuario 1:");
	scanf ("%f", & peso1);
	printf ("digite o peso usuario 2:");
	scanf ("%f", & peso2);
	soma = peso1 + peso2;
	printf ("a soma dos pesos e: %f", soma);
	return 0;
}
