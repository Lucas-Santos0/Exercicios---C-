#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int x, y, z;
    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &x, &y, &z);
    if(x+y > z){
        printf("esses valores podem formar um triangulo!");
        if(x=y && x=z){
            printf("o triangulo formado por esses valores eh EQUILATERO!");
        }
        else if (x=y || x=z || y=z){
            printf("o triangulo formado por esses valores eh ISOCELES!");
        }
        else if (x<>y && x<>z && z<>y){
            printf(" o triangulo formado por esses valores eh ESCALONO");
        }
    }
    else if(x+z > y){
        printf("esses valores podem formar um triangulo!");
        if(x=y && x=z){
            printf("o triangulo formado por esses valores eh EQUILATERO!");
        }
        else if (x=y || x=z || y=z){
            printf("o triangulo formado por esses valores eh ISOCELES!");
        }
        else if (x<>y && x<>z && z<>y){
            printf(" o triangulo formado por esses valores eh ESCALONO");
        }
    }
    else if(y+z > x){
        printf("esses valores podem formar um triangulo!");
        if(x=y && x=z){
            printf("o triangulo formado por esses valores eh EQUILATERO!");
        }
        else if (x=y || x=z || y=z){
            printf("o triangulo formado por esses valores eh ISOCELES!");
        }
        else if (x<>y && x<>z && z<>y){
            printf(" o triangulo formado por esses valores eh ESCALONO");
        }
    }

    
return 0;
}
