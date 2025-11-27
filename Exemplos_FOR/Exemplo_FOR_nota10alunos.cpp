#include <stdio.h>
#include <conio.h>
int main(void)
{
	//declaraçao de variaveis
	float nota1, nota2, media;
	int i;
	
	//entrada de dados
	for(i=1; i<=10; i++){
		printf("Digite a Primeira nota do aluno %d\n", i);
		scanf("%f",&nota1);
		
		printf("Digite a Segunda nota do aluno %d\n", i);
		scanf("%f",&nota2);
		
	//processamento
	media= (nota1+nota2)/2;
	
	//saida
	printf("\nA media do aluno %d = %.1f\n",i,media);
	printf("-------------------------\n\n");
	}
	getch();
	return(0);
}