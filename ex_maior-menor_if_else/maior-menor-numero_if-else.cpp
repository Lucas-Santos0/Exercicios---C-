#include <stdio.h>
int main ()
{
	int a, b, c;
	printf ("digite 3 numeros:");
	scanf ("%d %d %d", &a, &b, &c );
	
	if (a>=b && b>=c)
		printf ("%d eh o maior numero\n", a);
	
	else 
	
		if(b>=a && b>=c)
		printf ("%d eh o maior numero/n", b);
		
		else
		printf ("%d eh o maior numero\n", c);
		
	if (a<b && b<c)
	printf ("%d eh o maior numero\n", a);
	
	else 
	
		if(b<a && b<c)
		printf ("%d eh o menorro/n", b);
		
		else
		printf ("%d eh o menorro\n", c);
	
	return (0);
}