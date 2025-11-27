#include <stdlib.h>
#include <stdio.h>
int main() 
{
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1, valor;
    
    printf("Digite o valor em reais: ");
    scanf("%d", &valor);

    nota100 = valor / 100;
    valor=valor % 100;
    nota50 = valor / 50;
    valor=valor % 50;
    nota20 = valor / 20;
    valor=valor % 20;
    nota10 = valor / 10;
    valor=valor % 10;
    nota5 = valor / 5;
    valor=valor % 5;
    nota2 = valor / 2;
    valor= valor % 2;
    nota1 = valor;
    
    printf("O valor recebido, convertido em notas fica:\n ", valor);
    printf("%d 100\n ", nota100);
    printf("%d 50\n ", nota50);
    printf("%d 20\n ", nota20);
    printf("%d 10\n ", nota10);
    printf("%d 5\n ", nota5);
    printf("%d 2\n ", nota2);
    printf("%d 1\n", nota1);

    return 0;
}

