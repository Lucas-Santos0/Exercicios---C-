#include <stdio.h>
	int main(void)
	{
		int numb1, numb2;
		printf ("Digite um numero inteiro:");
		scanf ("%d", &numb1);
		printf ("Digite segundo numero inteiro:");
		scanf ("%d", &numb2);
		if (numb1==0){
			printf ("O primeiro numero eh nulo!\n");
			}else {
				if (numb1<0){
					printf (" O primeiro numero eh negativo!\n");
				}
				else {
				
					 printf ("O primeiro numero eh positivo!\n");}		
			}
		
		if (numb2==0){
			printf ("O segundo numero eh nulo!\n");
			}else {
				if (numb2<0){
					printf (" O segundo numero eh negativo!\n");
				}
				else { 
				
				
					 printf ("O segundo numero eh positivo!\n");}		
			}
	return 0;
	}