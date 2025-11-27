#include <stdio.h>
#include <conio.h>
int main(void)
{
	float media;
	int idade, i;
	
	for(i=1; i<=2; i++){
		printf("Digite a idade da pessoa %d:", i);
		scanf("%d", &idade);
	}
	media = idade/10;
	printf("\nA media das idade eh %.2f \n",media);
	
	printf("-------------------------\n\n");
	
	getch();
	return(0);
}