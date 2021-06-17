#include <stdio.h>

int main ()
{

	int i = 0, menor, altura, pessoas = 10;
	while(i != pessoas){
		printf("Informe a altura (em cm) da %dª pessoa: ", i + 1);
		scanf("%d", &altura);
		if(i == 0)
		   menor = altura;
		   if(menor > altura)
		   menor = altura;
		   i++;
	}
	printf("O valor da menor altura e: %dcm", menor);
	return 0;
}