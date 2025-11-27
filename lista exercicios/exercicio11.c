#include <stdio.h>
#include <stdlib.h>
int main ()
{
int mes, ano;
printf ("Digite o numero do mes:\n 1=Janeiro \n 2=Fevereiro \n 3=Marco \n 4=Abril \n 5=Maio \n 6=Junho \n 7=Junho \n 8=Agosto \n 9=Setembro \n 10=Outubro \n 11=Novembro \n 12=Dezembro\n");
scanf ("%d", &mes);
printf ("Digite o ano: ");
scanf ("%d", &ano);
switch (mes)
{
case 1:
printf ("O mês escolhido foi Janeiro ele possui 31 dias.");
break;
case 2:
if (ano % 4 == 00) {
    printf(" \n O mês escolhido foi Fevereiro ele possui 29 dias pois o ano escolhido eh bissexto.");
}
    else {
    printf("O mês escolhido foi Fevereiro ele possui 28 dias.");
}
break;
case 3:
printf ("O mês escolhido foi Março ele possui 31 dias.");
break;
case 4:
printf ("O mês escolhido foi Abril ele possui 30 dias.");
break;
case 5:
printf ("O mês escolhido foi Maio ele possui 31 dias.");
break;
case 6:
printf ("O mês escolhido foi Junho ele possui 30 dias.");
break;
case 7:
printf ("O mês escolhido foi Julho ele possui 31 dias.");
break;
case 8:
printf ("O mês escolhido foi Agosto ele possui 31 dias.");
break;
case 9:
printf ("O mês escolhido foi Setembro ele possui 30 dias.");
break;
case 10:
printf ("O mês escolhido foi Outubro ele possui 31 dias.");
break;
case 11:
printf ("O mês escolhido foi Novembro ele possui 30 dias.");
break;
case 12:
printf ("O mês escolhido foi Dezembro ele possui 31 dias.");
break;
default:
printf ("Você selecionou um numero inválido!");
break;
}
return 0;
}