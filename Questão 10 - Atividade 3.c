#include <stdio.h>

int main(){
	int i = 0, num;
	
	do{
		printf("Digite o numero: ");
		scanf("%d", &num);
		fflush(stdin);
		
		i++;
	}while(num >= 0 && i < 100);
	
	printf("Foram informados %d numeros.", i);
	
	return 0;
}