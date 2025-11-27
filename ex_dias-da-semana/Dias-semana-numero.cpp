#include <stdio.h>
#include <stdlib.h>
	int main (void)
	{
	int numero;
	printf (" Digite um numero inteiro de 1 a 7: ");
	scanf("%d", &numero);
	printf (" o numero escolhido eh %d",numero);
	if (numero==1){
		printf("\n O Dia correspondente eh DOMINGO!");
	}
	if (numero==2){
		printf("\n O Dia correspondente eh SEGUNDA!");
	}
	if (numero==3){
		printf("\n O Dia correspondente eh TERCA!");
	}
	if (numero==4){
		printf("\n O Dia correspondente eh QUARTA!");
	}
	if (numero==5){
		printf("\n O Dia correspondente eh QUINTA!");
	}
	if (numero==6){
		printf("\n O Dia correspondente eh SEXTA!");
	}
	if (numero==7){
		printf("\n O Dia correspondente eh SABADO!");
	}
	
	return (0);
	}
