#include <stdio.h>

int main()
{
	char placa[7];
	float velocidade;
	
	printf("Digite a placa do veiculo: \n");
	scanf("%s", &placa);
	fflush(stdin);

	printf("Informe a velocidade de trafego no Eixo Rodoviario (sem unidade de medida): ");
	scanf("%f", &velocidade);
	
	if (velocidade < 0 || velocidade >= 220)
	{
	    printf("Informe uma velocidade valida!\n");
	}
	else if (velocidade < 80)
	{
	    printf("O motorista nao sera multado!\n");
	}
    else if(velocidade >= 80)
    {
    	printf("Multa para o carro com a placa %s devido ao excesso de velocidade (acima dos 80 km/h) no Eixo Rodoviário", placa, velocidade);
        printf("velocidade aferida: %.1f km/h", velocidade);
    }
	
	return 0;
}