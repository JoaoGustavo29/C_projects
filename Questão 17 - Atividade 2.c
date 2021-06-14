#include <stdio.h>

int main ()
{
	int dias, idade, leAnoNascimento, leAnoAtual;
	char nome [20];

	printf("informe seu primeiro nome: ");
	scanf("%s", &nome);
	fflush(stdin); 
	printf("Em que ano estamos? ");
	scanf("%d", &leAnoAtual);
	printf("Em que ano voce nasceu? ");
	scanf("%d", &leAnoNascimento);

	idade = leAnoAtual - leAnoNascimento; 
	dias = idade * 365; 
	
	printf("%s, você ja viveu em media %d dias", nome, dias);
	
	return 0;
}