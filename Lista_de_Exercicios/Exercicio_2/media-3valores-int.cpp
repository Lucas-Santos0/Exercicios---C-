#include <stdlib.h>
#include <stdio.h>
int main ()
{
	float n1, n2, n3, media;
	printf("Vamos calcular Medias! \nDigite 3 valores inteiros:");
	scanf("%f %f %f",&n1, &n2, &n3);
	media=(n1+n2+n3)/3;
	printf("Os valores escolhidos foram %f %f %f\n a media deles eh %f", n1, n2, n3, media);
return 0;
}
