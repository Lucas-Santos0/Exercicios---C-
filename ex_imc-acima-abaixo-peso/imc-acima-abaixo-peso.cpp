#include <stdio.h>
#include <stdlib.h>
	int main (void)
	{
		float peso, alt, imc;
		printf("Digite seu peso em kg:");
		scanf("%f", &peso);
		printf("Digite sua altura em metros:");
		scanf("%f",& alt);
		imc=peso/(alt*alt);
		printf("seu imc eh %f\n",imc);
		
		if (imc>=25){
			printf("acima do peso");
		}
		else {
			if(imc==25) 
			printf("peso normal");
			else{
				if(imc<=25)
				printf("abaixo do peso");
			}
		}

		return 0;
		
	}
