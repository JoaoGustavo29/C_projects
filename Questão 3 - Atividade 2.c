#include <stdio.h>

int main ()
{
	int lado1, lado2, lado3;

	printf("Informe as medidas dos 3 lados do triangulo: ");
	scanf("%d%d%d", &lado1,&lado2,&lado3);
	
	if (lado1 < (lado2 + lado3) && lado2 < (lado1 + lado3) && lado3 < (lado1 + lado2)) 
	{
		printf("Possivel constituir os lados de um triangulo!");
	}
	else
	{
		printf ("Impossivel constituir os lados de um triangulo!");
	}
	
	return 0;
}