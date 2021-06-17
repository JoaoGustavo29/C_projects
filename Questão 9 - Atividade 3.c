#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 1, leMaiorIdade, idade;
	char sexo, leCorOlho[10], leCorCabelo[10];
	float leHabitantePadrao, porcentagem;
	
	printf("Responda esta pesquisa corretamente. Para finaliza-la informe a idade (-1)\n");	
	do{
		printf("Informe o sexo %d (F)- feminino ou (M)- masculino: ", i);
		scanf("%c", &sexo);
		fflush(stdin);
		sexo = toupper(sexo);
		printf("Informe a cor do olho %d (AZUL) (VERDE) (CASTANHO) (PRETO): ", i);
		fgets(cor_olho, 10, stdin);
		fflush(stdin);
		printf("Informe a cor do cabelo %d (LOIRO) (CASTANHO) (PRETO): ", i);
		fgets(cor_cabelo, 10, stdin);
		fflush(stdin);
		printf("Informe a idade %d: ", i);
		scanf("%d", &idade);
		fflush(stdin);
		
		if((idade>=18 || idade <=35) && sexo=='M'&& strcmp(leCorOlho, "castanho")==1 && strcmp(leCorCabelo, "castanho")==1)
			leHabitantePadrao++;
						
		if(i==1)
			leMaiorIdade = idade;
		if(leMaiorIdade < idade)
			leMaiorIdade = idade;
		
		i++;
	} while(idade > 1);
		porcentagem = (leHabitantePadrao / (i-1)) * 100;
		
		printf("Obrigado por responder a pesquisa!\n");
		printf("O/A habitante com a maior idade possui: %d anos.\n", leMaiorIdade);
		printf("A porcentagem de habitantes do sexo masculino, com idade entre 18 e 35 anos, olho castanho e cabelo castanho e: %.1f %",porcentagem);
	
	return 0;
}