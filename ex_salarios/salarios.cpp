#include <stdio.h>
#include <stdlib.h>
	int main (void)
	{
		float salario, reajuste;
		printf("Digite seu salario:");
		scanf("%f",&salario);
		if(salario<=280){
			reajuste=salario*1.20;
			printf(" o reajuste eh de 20 porcento, %f", reajuste);
		}
		else{
			if (salario>=281 && salario<=700){
			
			reajuste=salario*1.15;
			printf("o reajuste eh de 15 porcento, %f", reajuste);}
			
			else{
				if (salario>=701)
				reajuste=salario*1.10;
				printf("o reajuste eh de 10 porcento,%f", reajuste);
			}
		}
		
		return (0);
		
	}
