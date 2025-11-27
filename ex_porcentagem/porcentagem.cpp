#include <stdio.h>
int main ()
{
	float percent, money, result;
	printf ("digite o valor da porcentagem:");
	scanf ("%f", & percent);
	printf ("digite o valor do dinheiro");
	scanf ("%f", & money);
	result = (percent/100) * money;
	printf (" o resultado e: %f", result);
	return 0;
}
	
