#include <stdio.h>

int main()
{
	int ddd;
	
	printf("Informe o ddd: ");
	scanf("%d", &ddd);
	
	if(ddd == 61)
	{
		printf("Brasilia");
	}
	else if(ddd == 71)
	{
		printf("Salvador");
	}
	else if(ddd == 11)
	{
		printf("Sao Paulo");
	}
	else if(ddd == 21)
	{
		printf("Rio de Janeiro");
	}
	else if(ddd == 32)
	{
		printf("Juiz de fora");
	}
	else if(ddd == 19)
	{
		printf("Campinas");
	}
	else if(ddd == 27)
	{
		printf("Vitoria");
	}
	else if(ddd == 31)
	{
		printf("Belo Horizonte");
	}
	else 
	{
		printf("DDD invalido, digite Novamente!");
	}
}