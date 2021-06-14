#include <stdio.h>

int main ()
{
	float x, y, z;

	printf("Informe o primeiro numero: ");
	scanf("%f", &x);
	printf("Informe o segundo numero: ");
	scanf("%f", &y);
	printf("Informe o terceiro numero: ");
	scanf("%f", &z);
	
	if (x > y && x > z) 
	{
		printf("O maior numero e : %.1f",x);
	}
	else if (y > x && y > z) 
	{
		printf("O maior numero e : %.1f",y);
	}
	else if (num3 > x && z > y) 
	{
		printf("O maior numero e : %.1f",z);
	}
}