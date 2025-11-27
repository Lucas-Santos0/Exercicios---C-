#include <stdio.h>
#include <conio.h>
int main(void)
{
	int i;
	float nota1, nota2, media, acima;
	
	acima=0;
	
	for(i=1; i<=20; i++){
		printf("Digite duas notas do aluno %d: ", i);
		scanf("%f %f", &nota1, &nota2);
		
		media=(nota1+nota2)/2;
		
		printf("A media do aluno %d foi %.1f \n", i, media);
		printf("--------------------------------\n");
		
		if(media>=6){
			acima=acima+1;
		}
	}
	
	printf("A quantidade de alunos que ficaram ACIMA da media foram %.1f\n",acima);
	printf("A quantidade de alunos que ficaram ABAIXO da media foram %.1f\n",20-acima);
	getch ();
	return 0;
	
}