#include<stdio.h>
int main(){
	char nome[45], genero[1];
	int matricula, trabalho;
	double preco, pgmt;
	printf("Digite seu nome:\t");
	scanf("%s", &nome);
	printf("Genero (M ou F):\t");
	scanf("%s", &genero);
	printf("Digite sua matricula:\t");
	scanf("%d", &matricula);
	printf("Horas de trabalho:\t");
	scanf("%d", &trabalho);
	
	preco = 4.75;
	pgmt = (4.75*trabalho) * 30;
	
	printf("Nome:\t%s", nome);
	
	if(genero == "M")
		printf("\nGenero:\tMasculino");
	if(genero == "F")
		printf("\nGenero:\tFeminino");	
	else
		printf("\nGenero nao existente");
	printf("\nMatricula:\t%d\nHoras de trabalho:\t%d", matricula, trabalho);
	printf("\nPreco por Hora:\t%.2lf\nSalario:\t%d", preco, pgmt);
	return 0;
}
