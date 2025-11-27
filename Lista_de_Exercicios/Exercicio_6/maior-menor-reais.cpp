#include <stdlib.h>
#include <stdio.h>
int main ()
{
	float n1, n2, n3;
	printf("Digite 3 valores nao inteiros:");
	scanf("%f %f %f",&n1, &n2, &n3);
	if (n1>=n2 && n1>=n3){
		printf("O maior numero eh %f\n",n1);
	}
	if (n2>=n1 && n2>=n3){
		printf("O maior numero eh %f\n",n2);
	}
	if (n3>=n1 && n3>=n2){
		printf("O maior numero eh %f\n",n3);
}
	if (n1<=n2 && n1<=n3){
		printf("O menor numero eh %f\n",n1);
	}
	if (n2<=n1 && n2<=n3){
		printf("O menor numero eh %f\n",n2);
	}
	if (n3<=n1 && n3<=n2){
		printf("O menor numero eh %f\n",n3);
	}
	if (n1<=n2 && n1>=n3){
		printf("O numero intermediario eh %f",n1);
	}
	if (n2<=n1 && n2>=n3){
		printf("O numero intermediario eh %f",n2);
	}
	if (n3<=n1 && n3>=n2){
		printf("O numero intermediario beh %f",n3);
	}
	if (n1>=n2 && n1<=n3){
		printf("O numero intermediario eh %f",n1);
	}
	if (n2>=n1 && n2<=n3){
		printf("O numero intermediario eh %f",n2);
	}
	if (n3>=n1 && n3<=n2){
		printf("O numero intermediario beh %f",n3);
	}
return 0;
}