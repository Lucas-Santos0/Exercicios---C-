#include <stdlib.h>
#include <stdio.h>
int main ()
{
	float segundos, minutos, horas; 
	printf("Digite o valor em segundos a ser Convertido:");
	scanf("%f", &segundos);
	minutos=segundos/60;
	horas=minutos/60;
	printf("O numero de Segundos foi %f \n O valor em minutos eh %f \n o valor em horas foi %f ", segundos, minutos, horas);
	
return 0;
}
