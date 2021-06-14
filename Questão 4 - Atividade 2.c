#include <stdio.h>

int main ()
{

	char nome [30]; 
	char sexo;
	
	printf("Digite seu nome: ");
	fgets(nome, 30, stdin);
	fflush(stdin);
	printf("Informe seu sexo (M para masculino e F para feminino): ");
	scanf("%c", &sexo);
	fflush(stdin);
	
	if((sexo) == 'm' || (sexo) == 'M')
	{
		printf ("Ilmo. Sr.%s", nome);
	}
	else if ((sexo) == 'f' || (sexo) == 'F')
	{
		printf("Ilma. Sra.%s", nome);
	}
	else 
	{
		printf("Resposta Invalida!");
	}
	return 0;
}