#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int numb, numb2;
	printf("Digite um numero inteiro:");
	scanf("%d", &numb);
	numb2= numb/2;
	if(numb2 % 2 == 0){
		printf("O numero Digitado foi %d \n O numero eh par",numb);
	}
	else{
		printf("O numero Digitado foi %d \n O numero eh impar",numb);
	}
return 0;
}
