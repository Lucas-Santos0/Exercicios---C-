#include <stdio.h>
	int main ()
{
	float alt1, alt2, soma;
	printf("digite a altura do usuario 1:");
	scanf ("%f", & alt1);
	printf ("digite sua altura usuario 2:");
	scanf ("%f", & alt2);
	soma = alt1 + alt2;
	printf ("a soma das suas alturas e: %f", soma);
	return 0;
}
