#include <stdio.h>

int main ()
{
    int num1, num2, soma = 0;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    for(int i = 1; i <= num1; i++)
     soma = soma + num2;
     
     printf("%d x %d = %d", num1, num2, soma);
	return 0;
}