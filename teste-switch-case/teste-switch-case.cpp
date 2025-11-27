#include <stdio.h>
#include <conio.h>
int main (void)
{
	int valor;
	printf("\nDigite um valor de 1 a 7: ");
	scanf("%d", &valor);
	switch (valor)
	{
		case 1:
			printf("Domingo\n");
			break;
		case 2:
			printf("segunda\n");
			break;
		case 3:
			printf("terca\n");
			break;
		case 4:
			printf("quarta\n");
			break;
		case 5:
			printf("quinta\n");
			break;
		case 6:
			printf("sexta\n");
			break;
		case 7:
			printf("sabado\n");
			break;
		default:
			printf("Valor invalido");
		}
		
 getch();

	return 0;

}
