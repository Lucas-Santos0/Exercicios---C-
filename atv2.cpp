#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int pa;
	int x1, x2;
	pa = (2+20)*5;
	while(x1!=1)
	{
		printf("A soma da tabuada do 2 é %d \n", pa);
		printf("Digite 1 para encerrar ou outro numero para repetir \n");
		scanf("%d", &x2);
		x1=x2;
	}
	return(0);
}
