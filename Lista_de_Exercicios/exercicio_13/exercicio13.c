#include <stdlib.h>
#include <stdio.h>
int main ()
{
	float horas, valor, adicional;
    printf("Digite seu numero de horas trabalhadas na semana: ");
    scanf("%f", &horas);
    printf("Digite o Valor da hora: ");
    scanf("%f", &valor);
    if (horas <=40){
        printf("nenhum adicional!");
    }
    else if (horas >= 40 && horas <= 60){
        printf("ha um bonus de 50%");
    }
    else if( horas >= 60){
        printf("ha um bonus de 100% para essas horas");
    }
return 0;
}
