#include <stdlib.h>
#include <stdio.h>
int main ()
{
	float n1, n2, media, exame, media_final;
	printf("Digite suas 2 notas parciais (0 a 100): ");
	scanf("%f %f", &n1, &n2);
	media=(n1+n2)/2;
	
	if (n1>100 || n2>100) {
		printf ("Voce digitou uma nota maior que 100. Por favor, corrija a informacao.");
	}
	
	else if (media>=70){
		printf("\nSua media foi %.2f \n Voce foi APROVADO!!", media);
	}
	
	else if (media<=69){
		printf ("Sua media foi %.2f \n Voce esta de RECUPERACAO!", media);
		printf ("Insira a nota do Exame Final:");
		scanf ("%f", &exame);
		if (exame>100) {
			printf ("\nVoce inseriu uma nota maior que 100. Por favor, corrija a informacao.");
		}
		media_final = media+exame;
			if (media_final >= 100) {
				printf ("\nEssa foi por pouco! \n Voce foi APROVADO.");
			}
			else {
				printf ("\nVoce foi reprovado.");
			}
	}
	
	else if (media<=40){
		printf("Sua media foi %.2f \n voce foi REPROVADO!!",media);
	}
	return 0;
}