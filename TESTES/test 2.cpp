#include <stdio.h>
int main ()
{
	int num1, num2, num3, media;
	printf("Digite primeiro numero:");
	scanf("%d", &num1);
	printf("Digite segundo numero:");
	scanf("%d", &num2);
	printf("Digite terceiro numero:");
	scanf("%d", &num3);
	media = (num1+num2+num3)/3;
	printf("A media e: %d", media);
	
	return 0;
}
