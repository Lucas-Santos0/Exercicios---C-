#include <stdlib.h>
#include <stdio.h>
int main ()
{
	float n1, n2, result;
    char operaçao;
    printf("Digite 2 numeros reais: ");
    scanf("%f %f", &n1, &n2);
    printf("escolha a operaçao ( + - / *): ");
    scanf("%c", &operaçao);
    switch(operaçao){
        case '+':
        result=n1+n2;
        printf("O resultado da operacao eh %.2f", result);
        break
        case '-':
        result=n1-n2;
        printf("O resultado da operacao eh %.2f", result);
        break
        case '/':
        result=n1/n2;
        printf("O resultado da operacao eh %.2f", result);
        break
        case '*':
        result=n1*n2;
        printf("O resultado da operacao eh %.2f", result);
        break
    }

return 0;
}
