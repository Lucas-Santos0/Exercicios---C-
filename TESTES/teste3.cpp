#include <stdio.h>
int main ()
{
float x , y, result;
printf ("digite primeiro numero:");
scanf ("%f", &x);
printf ("digite segundo numero:");
scanf ("%f", &y);
result = (x*x)+x+y-(y*y*y);
printf (" o resultado e: %f", result);
return 0 ;
}