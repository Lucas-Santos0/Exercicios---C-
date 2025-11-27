#include <stdlib.h>
#include <stdio.h>
int main ()
{
	float lados, tamanho area;
    printf("Digite o Numero de lados de um poligono regular e seuas medidas respectivamente:");
    scanf("%f %f", &lados, &tamanho);
    if(lados <> 3 || lados <> 4 || lados <> 6){
        printf("nao sei calcular a area!!");
    }
    else{
        switch(lados){
            case 3: 
            area=tamanho*tamanho*1,73/4;
            printf("A area do poligono regular de 3 lados eh %f", area);
            case 4: 
            area=tamanho*tamanho*;
            printf("A area do poligono regular de 4 lados eh %f", area);
            case 6: 
            area=6*tamanho*tamanho*1,73/4;
            printf("A area do poligono regular de 6 lados eh %f", area);
        }
    }
return 0;
}
