#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int maxima, motorista, acima, multa;
    printf("Digite em km/h a velocidade maxima permitida em uma avenina" );
    scanf("%d", &maxima);
    printf("Digite em km/h a velocidade em que o motorista estava dirigindo: ");
    scanf("%d", &motorista);
    
    if( motorista <= maxima){
        printf(" Nao ha multa!");
    }
    else {
    acima=motorista-maxima;
    multa=acima*5;
        printf("A multa a ser paga eh de %d", multa);
    }
return 0;
}
