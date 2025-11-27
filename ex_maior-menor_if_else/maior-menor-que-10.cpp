#include <stdio.h>
#include <stdlib.h>
	int main (void)
	{
		int numb1,numb2,soma;
		printf("Digite um numero:");
		scanf("%d", &numb1);
		printf("Digite outro numero:");
		scanf("%d", &numb2);
		soma=numb1+numb2;
		printf ("o valor da soma = %d\n", soma);
		
		if (soma > 10)
			{
			printf("A soma e maior que 10!");
			}
			
		if (soma < 10)
			{
			printf("A soma e menor que 10!");
			}
		
		if (soma = 10)
			{
			printf("A soma e igual a 10!");
			}
			
			
		return (0);
		
	}
