  
#include <stdio.h>

int main ()
{
    int X, Y, Z;
	
	printf("Informe os valores dos 3 lados do triangulo: ");
	scanf("%d%d%d", &X,&Y,&Z);
	
	if (X == Y && Y == Z && X == Z) 
	{
		printf("Esse triangulo e equilatero!");
	}
	else if (X == Y || X == Z || Y == Z) 
	{
		printf ("Esse triangulo e isosceles!");
	}
	else if (X != Y && X != Z && Y != Z) 
	{
		printf ("Esse triangulo e escaleno!");
	}