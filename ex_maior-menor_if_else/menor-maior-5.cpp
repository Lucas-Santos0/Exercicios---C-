#include <stdio.h>
#include <stdlib.h>
	main(void)
	{
		int num1, num2, num3, num4, num5;
		printf("Digite o primeiro numero inteiro: ");
		scanf("%d", &num1);
		printf("Digite o segundo numero inteiro: ");
		scanf("%d", &num2);
		printf("Digite o terceiro numero inteiro: ");
		scanf("%d", &num3);
		printf("Digite o quarto numero inteiro: ");
		scanf("%d", &num4);
		printf("Digite o quinto numero inteiro: ");
		scanf("%d", &num5);
		
		if (num1>=num2 && num1>=num3 && num1>=num4 && num1>=num5){
		 printf("o maior numero eh :%d\n", num1);}	
		else
			if(num2>=num1 && num2>=num3 && num2>=num4 && num2>=num5)
				printf("o maior numero eh:%d\n", num2);
				else
					if(num3>=num1 && num3>=num2 && num3>=num4 && num3>=num5)
					printf("o maior numero eh:%d\n", num3);
						else
							if(num4>=num1 && num4>=num2 && num4>=num3 && num4>=num5)
							printf("o maior numero eh:%d\n", num4);
								else
									if(num5>=num1 && num5>=num2 && num5>=num4 && num5>=num3)
									printf("o maior numero eh:%d\n", num5);
		
		if (num1<=num2 && num1<=num3 && num1<=num4 && num1<=num5){
		 printf("o menor numero eh :%d", num1);}	
		else
			if(num2<=num1 && num2<=num3 && num2<=num4 && num2<=num5)
				printf("o menor numero eh:%d", num2);
				else
					if(num3<=num1 && num3<=num2 && num3<=num4 && num3<=num5)
					printf("o menor numero eh:%d", num3);
						else
							if(num4<=num1 && num4<=num2 && num4<=num3 && num4<=num5)
							printf("o menor numero eh:%d", num4);
								else
									if(num5<=num1 && num5<=num2 && num5<=num4 && num5<=num3)
									printf("o menor numero eh:%d", num5);
									
		return (0);
}