#include <stdio.h>
#include <locale.h>
int main()
{
	int par=0, num, i;
	for (i=1;i<=10;i++)
	{
		printf(" Digite um numero: ");
		scanf("%d", &num);
		if(num%2==0){
			par=par+1;
		}
	}
	printf("\n A Quantidade de numeros pares foi: %d\n", par);
	printf("\n A Quantidade de numeros impares foi: %d", 10-par);
	
	return 0;
}