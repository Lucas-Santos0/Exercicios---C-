#include <stdio.h>
	int main ()
	{
		float a, b, c, ab, abc, ba , bb, cb;
		a=5;
		b=7;
		c=6;
		ab = a/b;
		abc = a*b*c;
		ba= b+6*a;
		bb= 5*b/4*b;
		cb= c*2*b; 
		printf("Se a=5, b=7, c=6:\n\n a/b=%f \n",ab);
		printf("\n a x b x c = %f \n", abc);
		printf ("\n b+6xa = %f \n", ba);
		printf ("\n 5xb/4xb = %f \n", bb);
		printf ("\n cx2xb = %f", cb);
		return 0;
		
	}