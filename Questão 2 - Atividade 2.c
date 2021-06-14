#include <stdio.h>

int main ()
{
	int num, modulo;
	
	printf("Informe o numero: ");
	scanf("%d", &num);
	
	if (num < 0)
	{
		modulo = num * (-1);
		printf ("Esse e o modulo do numero %d", modulo);
	}
	else if (num >= 0)
	{
		printf ("Esse e o modulo do numero %d", num);
	}
}
