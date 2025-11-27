#include <stdlib.h>
#include <stdio.h>
int main ()
{
	float numb1, numb2, numb3;
	printf("Digite 3 valores nao inteiros:");
	scanf("%f %f %f",&numb1, &numb2, &numb3);
	if(numb1>=numb2 && numb1>=numb3){
		printf("o maior numero eh %d", numb1);
	}
return 0;
}
