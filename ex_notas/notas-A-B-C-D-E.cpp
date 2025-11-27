#include <stdio.h>
#include <stdlib.h>
	int main (void)
	{
		float nota1, nota2, media;
		printf("digite a primeira nota:");
		scanf("%f", &nota1);
		printf("digite a primeira nota:");
		scanf("%f", &nota2);
		media=(nota1+nota2)/2;
		printf("a media foi %f\n", media);
		if (media>=9 && media<=10){
			printf("sua nota foi A!");}
			else
			if (media>=7.5 && media<=8.9){
			printf("sua nota foi B!");}
			else
			if (media>=6 && media<=7.4){
			printf("sua nota foi C!");}
			else
			if (media>=4.0 && media<=5.9){
			printf("sua nota foi D!");}
			else
			printf("sua nota foi E!");
			return (0);
	}