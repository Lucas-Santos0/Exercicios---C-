#include <stdio.h>

int main() {
    int cedulas100, cedulas50, cedulas20, cedulas10, cedulas5, cedulas2, cedulas1, valor;

    printf("Digite o valor em reais: ");
    scanf("%d", &valor);

    cedulas100 = valor / 100;
    valor=valor % 100;

    cedulas50 = valor / 50;
    valor=valor % 50;

    cedulas20 = valor / 20;
    valor=valor % 20;

    cedulas10 = valor / 10;
    valor=valor % 10;

    cedulas5 = valor / 5;
    valor=valor % 5;

    cedulas2 = valor / 2;
    valor=valor % 2;

    cedulas1 =valor;
    
    printf("R$%d = ", valor);
    printf("%d cedula(s) de 100\n ", cedulas100);
    printf("%d cedula(s) de 50\n ", cedulas50);
    printf("%d cedula(s) de 20\n ", cedulas20);
    printf("%d cedula(s) de 10\n ", cedulas10);
    printf("%d cedula(s) de 5\n ", cedulas5);
    printf("%d cedula(s) de 2\n ", cedulas2);
    printf("%d cedula(s) de 1\n", cedulas1);

    return 0;
}

