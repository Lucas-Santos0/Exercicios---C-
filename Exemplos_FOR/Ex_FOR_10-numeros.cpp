#include <stdio.h>
#include <conio.h>

int main(void)
{
	int par=0, num , i;
	
	for (i=1; i<=10; i++)
	{
		printf("Digite o %d°  numero inteiro: ",i);
		scanf("%d", &num);
		if(num%2==0){
			par=par+1;
		}
		
	}
	
	printf("\nQuantidade de numeros pares: %d\n", par);
	printf("Quantidade de numeros impares: %d", 10-par);
	getch ();
	return(0);
}
