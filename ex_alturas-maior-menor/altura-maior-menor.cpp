#include <stdio.h>
#include <stdlib.h>
	int main (void)
	{
		float alt1,alt2, alt3;
		printf("Digite a primeira altura em metros:");
		scanf("%f", &alt1);
		printf("Digite a segunda altura em metros:");
		scanf("%f", &alt2);
		printf("Digite a terceira altura em metros:");
		scanf("%f", &alt3);
	
	if (alt2<alt1 && alt1>alt3)
		{
			printf("a maior altura eh %f", alt1);
		}
	
		if (alt1<alt2 && alt2>alt3)
		{
			printf("a maior altura eh %f", alt2);
		}
		
		if (alt2<alt3 && alt3>alt1)
		{
			printf("a maior altura eh %f", alt3);
		}
		return (0);
		
	}
