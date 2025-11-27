#include <stdio.h>
#include <conio.h>
int main(void)
{
	int contador;//VARIAVEL DE CONTROLE DO LOOP
	
	for (contador = 2; contador<=20; contador+=2)
	{
			printf("%d ",contador);	
	}
		
	getch();
	return(0);
	}