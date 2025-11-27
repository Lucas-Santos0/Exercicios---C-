#include <stdio.h>
#include <stdlib.h>
	main(void)
	{
	int nascimento, ano, idade;
	printf("Digite o seu ano de nascimento:");
	scanf("%d", & nascimento);
	printf("Digite o ano atual:");
	scanf("%d", & ano);
	idade=ano-nascimento;
	printf("sua idade eh:%d!\n", idade);
	
	if(idade>=16){
		printf("Voce ja pode votar!");
	}
	else
	printf("Voce nao pode votar!");
		return (0);
}