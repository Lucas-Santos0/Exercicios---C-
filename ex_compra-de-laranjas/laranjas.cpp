#include <stdio.h>
#include <stdlib.h>
	main(void)
	{
	float laranjas, valor, desconto;
	printf("Digite Quantas laranjas voce quer comprar: ");
	scanf("%f", & laranjas);
	valor=laranjas*0.93;
	printf("Voce vai comprar %f laranjas\n\n", laranjas);
		if(valor>=12){
			desconto=valor*0.9;
			printf("Acima de $12.00 voce recebe um desconto de 10 porcento!!\n\n");
			printf("O valor a pagar eh:%f!!", desconto);
		}
		else
		printf("Voce ira pagar:%f!!", valor);
		return (0);
}