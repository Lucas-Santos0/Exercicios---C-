#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main ()
{
	float alt, v0, angulo, gravity;
	gravity=9.81;
	printf("Digite a altura innicial em que o projetil sera lacado: ");
	scanf("%f", &alt);
	printf("Digite o angulo em que o projetil sera lacado: ");
	scanf("%f", &angulo);
	printf("Digite a velocidade inicial em que o projetil sera lacado: ");
	scanf("%f", &v0);
	
	float angulo_radianos = angulo*M_PI/180.0;
	float tempo_voo=2*v0*angulo_radianos/gravity;
	float distancia=v0*angulo_radianos*tempo_voo;
	
	printf("A trajetoria percorrida pelo projetil foi de %f metros", distancia);
	return 0;
}
