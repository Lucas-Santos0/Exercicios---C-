#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int mes, ano;
	printf ("\nInsira um mês, de acordo com o número: ");
	printf ("\n 1=Janeiro \n 2=Fevereiro \n 3=Marco \n 4=Abril \n 5=Maio \n 6=Junho \n 7=Junho \n 8=Agosto \n 9=Setembro \n 10=Outubro \n 11=Novembro \n 12=Dezembro\n");
	printf ("Insira o mês aqui: ");
	scanf ("%d", &mes);
	printf ("\nInsira um ano: ");
	scanf ("%d", &ano);
	switch (mes)
	{
		case 1: 
			printf ("O mês de Janeiro possui 31 dias.");
			break;
			
		case 2: 
			if (ano % 4 == 00) {
				printf ("O ano é bissexto. Sendo assim, o mês de Fevereiro possui 29 dias.");
			}
			else {
				("O ano não é bissexto. Sendo assim, o mês de Fevereiro possui 28 dias.");
			}
			break;
			
		case 3: 
			printf ("O mês de Março possui 31 dias.");
			break;
			
		case 4: 
			printf ("O mês de Abril possui 30 dias.");
			break;
			
		case 5: 
			printf ("O mês de Maio possui 31 dias.");
			break;
			
		case 6: 
			printf ("O mês de Junho possui 30 dias.");
			break;
			
		case 7: 
			printf ("O mês de Julho possui 31 dias.");
			break;
			
		case 8: 
			printf ("O mês de Agosto possui 31 dias.");
			break;
			
		case 9: 
			printf ("O mês de Setembro tem 30 dias.");
			break;
			
		case 10: 
			printf ("O mês de Outubro possui 31 dias.");
			break;
			
		case 11: 
			printf ("O mês de Novembro tem 30 dias.");
			break;
			
		case 12: 
			printf ("O mês de Dezembro possui 31 dias.");
			break;
		
		default:
			printf ("Você selecionou uma opção inválida.");
			break;
	}
	return 0;
}
		