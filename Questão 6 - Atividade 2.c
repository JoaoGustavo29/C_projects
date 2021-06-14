#include <stdio.h>

int main (){
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	if (num %2 == 0) 
		printf("O numero %d é PAR.\n", num);
		else 
		printf("O numero %d é ÍMPAR.\n", num);

	return 0;
}