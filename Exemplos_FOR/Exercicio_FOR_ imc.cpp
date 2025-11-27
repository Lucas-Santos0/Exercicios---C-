#include <stdio.h>
#include <conio.h>
int main(void)
{
	float imc, peso, altura;
	int i;
	
	for(i=1; i<=5; i++){
		printf("Digite o peso da pessoa %d:", i);
		scanf("%f",&peso);
		
		printf("Digite a altura da pessoa %d:", i);
		scanf("%f",&altura);
		
	imc= peso/(altura*altura);
	
	printf("\nO IMC da pessoa %d = %.1f\n",i,imc);
	printf("-------------------------\n\n");
	}
	getch();
	return(0);
}