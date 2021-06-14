#include <stdio.h>

int main ()
{
	int valor, horas;

	printf("Quantidade de horas de internet utilizada: ");
	scanf("%d", &horas);

	if (horas > 0 && horas <= 20)
	{
		printf("O valor a ser pago e: 30 reais");
	}
	else if (horas > 20)
	{
		valor = 30 + (horas - 20) * 3; 
		printf ("O valor a ser pago e: %d reais", valor);
	}
	else
	{
		printf ("Valor invalido");
	}
	
	return 0;
}