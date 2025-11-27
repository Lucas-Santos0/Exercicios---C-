#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int p1, p2, p3;
	
	printf(" BEM VINDO AO NOSSO DRIVE THRU !!");
	printf(" \n\n GOSTARIA DE VER OS COMBOS DO DIA? DIGITE: \n 1. PARA SIM E 2. PARA NAO   ");
	scanf("%d", &p1);
	switch (p1){
		
		case 1:
		printf("AQUI ESTAO OS COMBOS DO DIA! \n");
		printf("\n\n 1. Combo KIDS \n  NESSE COMBO VOCE RECEBE UMA COCACOLA 200ML, MEIA PORCAO DE BATATA E O NOSSO LANCHE KIDS NO VALOR DE R25,99 \n ingredientes do lanche:\n  Pao de hamburguer, hamburguer, alface, presunto e queijo \n  >70g< \n\n");
		printf( "\n 2. Combo BACONZITOS NESSE COMBO VOCE RECEBE UMA COCACOLA 1L, UMA PORCAO DE BATATA E O NOSSO LANCHE BACONZITOS NO VALOR DE R35,99\n  ingredientes do lanche:\n Pao de hamburguer, hamburguer, alface, presunto, queijo e bacon \n  >100g< \n\n");
		printf( "\n 3. Combo CHEESE NESSE COMBO VOCE RECEBE UMA COCACOLA 1L, UMA PORCAO DE BATATA C/ QUEIJO E O NOSSO LANCHE CHEESE NO VALOR DE R35,99\n  ingredientes do lanche:\n Pao de hamburguer, hamburguer, presuntoe queijo cheddar \n  >100g< \n\n");
		printf( "\n 4. Combo CHUURRASCO NESSE COMBO VOCE RECEBE UMA COCACOLA 1L, UMA PORCAO DE BATATA E O NOSSO LANCHE CHURRASCO NO VALOR DE R37,99\n  ingredientes do lanche:\n Pao de hamburguer, bacon e carne de churrasco \n  >100g< \n\n");
		printf( "\n 5. Combo VEGANO NESSE COMBO VOCE RECEBE UMA COCACOLA1L, UMA PORCAO DE BATATA E O NOSSO LANCHE VEGANO NO VALOR DE R35,99\n  ingredientes do lanche:\n Pao vegano, alface, colve, tomate e cogumelo assado \n  >100g< \n\n");
		printf( "\n 6. Combo XTUDAO NESSE COMBO VOCE RECEBE UMA COCACOLA2L, UMA PORCAO DE BATATA E O NOSSO LANCHE XTUDAO NO VALOR DE R36,99\n  ingredientes:\n Pao de hamburguer, 2 hamburguer, alface, presunto e queijo cheddar e bacon \n >200g< \n\n");
		printf("DIGITE A COMBO DESEJADO: ");
		scanf("%d", &p2);
		
		 switch (p2){
		 case 1:
		 	printf("\n O COMBO ESCOLHIDO FOI: 1. Combo KIDS \n   \n \n");
		 	printf("FACA O PAGAMENTO NO CAIXA AO LADO");
			break;
			
	   	 case 2:
	   	 	printf("\n O COMBO ESCOLHIDO FOI: 2. Combo BACONZITOS \n   \n\n\n");
	   	 	printf("FACA O PAGAMENTO NO CAIXA AO LADO");
	   	 	break;
	   	 	
		 case 3:
		 	printf("\n O COMBO ESCOLHIDO FOI: 3. Combo CHEESE \n   \n\n\n");
	   	 	printf("FACA O PAGAMENTO NO CAIXA AO LADO");
		 	break;
		 	
		 case 4:
		 	printf("\n O COMBO ESCOLHIDO FOI: 4. Combo XURRASCO \n   \n\n\n");
	   	 	printf("FACA O PAGAMENTO NO CAIXA AO LADO");
		 	break;
		 	
		 case 5:
		 	printf("\n O COMBO ESCOLHIDO FOI: 5. Combo VEGANO \n  \n\n\n");
	   	 	printf("FACA O PAGAMENTO NO CAIXA AO LADO");
			break;
			
		case 6:
			printf("\n O COMBO ESCOLHIDO FOI: 6. Combo XTUDAO \n  \n\n\n");
	   	 	printf("FACA O PAGAMENTO NO CAIXA AO LADO");
	   	 	break;
		 }
		case 2:
			return 0;
}
	

return 0;
}
