#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int x , y, result, op;
	x=0;
	y=0;
	result=0;
	op=0;
	
	printf(" Digite o valor do primeiro operando :");
	scanf("%d", & x);
	printf(" \n Digite o valor do segundo operando: ");
	scanf("%d", & y);
	
	printf( "\n Escolha uma das opcoes abaixo: ");
	printf( "\n 1. Soma ");
	printf( "\n 2. Subtracao");
	printf( "\n 3. Multiplicacao");
	printf( "\n 4. Divisao ");
	
	printf("\n Digite a opcao desejada: ");
	scanf("%d", &op);
	
	switch (op)
{

	case 1:
		printf(" \n opcao selecionada: 1. Soma");
		result= x + y ;
		printf(" \n A soma dos dois numeros eh %d", result);
		break;
		
	case 2:
		printf(" \n opcao selecionada: 2. Subtracao");
		result= x - y ;
		printf(" \n A subtracao dos dois numeros eh %d", result);
		break;
		
	case 3:
		printf(" \n opcao selecionada: 3. Multiplicacao");
		result= x * y ;
		printf(" \n A multiplicacao dos dois numeros eh %d", result);
		break;
		
	case 4:
		printf(" \n opcao selecionada: 4. Divisao");
		if(y==0)
		{
			printf("Nao eh possivel Dividir por 0");
		}
		else
		{
			result= x / y ;
			printf(" \n A divisao dos dois numeros eh %d", result);
		}
	
		break;
	default:
		printf(" \n Voce digitou uma opcao invalida");
}
return 0;
}
