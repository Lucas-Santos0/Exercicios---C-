# include <stdio.h>
	int main ()
{
	float peso, altura, imc;
	printf ("Digite sua altura em metros:");
	scanf ("%f", &altura);
	printf ("Digite seu peso em quilogramas");
	scanf ("%f", &peso);
	imc = peso/(altura*altura);
	printf ("Seu Indice de Massa Corporea e:%f", imc);
	return 0;
}