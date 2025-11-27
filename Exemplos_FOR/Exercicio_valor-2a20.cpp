#include <stdio.h>
#include <conio.h>
int main (void)
{
	int valor;
	printf("Digite um valor inteiro de 2 a 20: ");
	scanf("%d", &valor);
	if(valor<2 || valor >20){
		printf("O valor digitado eh um valor invalido!!");
	}
	
	else{
		printf("O valor digitado foi %d", valor);
	}
	
	return 0;
}