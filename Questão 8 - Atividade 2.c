#include <stdio.h>

int main ()
{
	char nome [30]; 
	char sexo;
	float peso, altura;
	
	printf("Informe seu nome: ");
	fgets(nome, 30, stdin);
	fflush(stdin);
	printf("Informe seu sexo (M = Masculino / F = Feminino): ");
	scanf("%c", &sexo);
	fflush(stdin);
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	if((sexo) == 'm' || (sexo) == 'M')
	{
		peso = (72.5 * altura) - 58;
		printf ("Ilmo. Sr.%s o peso ideal para voce e %.1f", nome, peso);
	}
	else if ((sexo) == 'f' || (sexo) == 'F')
	{
		peso = (62.1 * altura) - 44.7;
		printf("Ilma. Sra.%s o peso ideal para voce e %.1f", nome, peso);
	}
	else 
	{
		printf("Resposta invalida!");
	}
	return 0;
}