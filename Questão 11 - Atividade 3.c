#include <stdio.h>
#include <string.h>

int main(){
	int i= 1,nota = 0, nota1 = 0, nota2 = 0, nota3 = 0, leMaiorNota, juizes;
	char finalista1[30], finalista2[30], finalista3[30], vencedor[30];
	
    printf("Quantos juizes vao participar do evento de hoje? ");
    scanf("%d", &juizes);
    fflush(stdin);
	
	printf("Qual o nome do(a) primeiro finalista? ");
	fgets(finalista1, 30, stdin);
	fflush(stdin);
	
	printf("Qual o nome do(a) segundo finalista? ");
	fgets(finalista2, 30, stdin);
	fflush(stdin);
	
	printf("Qual o nome do(a) terceiro finalista? ");
	fgets(finalista3, 30, stdin);
	fflush(stdin);
	
	do{
		printf("Juiz %d! A sua nota para o(a) finalista e: %s ", i, finalista1);
		scanf("%d", &nota);
		fflush(stdin);
			
			do{
				if(nota<0 || nota>100){
					printf("Nota invalida, tente novamente!");
				}
			}while(nota<0 || nota>100);
			
			nota1= nota1 + nota;
			
		printf("Juiz %d! A sua nota para o(a) finalista e: %s ", i, finalista2);
		scanf("%d", &nota);
		fflush(stdin);
			
			do{
				if(nota<0 || nota>100){
					printf("Nota invalida, tente novamente!");
				}
			}while(nota<0 || nota>100);
			
			nota2= nota2 + nota;
			
		printf("Juiz %d! A sua nota para o(a) finalista e: %s ", i, finalista3);
		scanf("%d", &nota);
		fflush(stdin);
			
			do{
				if(nota<0 || nota>100){
					printf("Nota invalida, tente novamente!");
				}
			}while(nota<0 || nota>100);
			
			nota3= nota3 + nota;
			i++;
	}while(i <= juizes);
		
		if (nota1 > nota2 && nota1> nota3){
			strcpy(vencedor, finalista1);
			leMaiorNota = nota1;
		}
			else if(nota2 > nota1 && nota2 > nota3){
				strcpy(vencedor, finalista2);
				leMaiorNota = nota2;
			}
	    		else if(nota3 > nota1 && nota3 > nota2){
	    			strcpy(vencedor, finalista3);
					leMaiorNota = nota3;
				}
					
		printf("\nNota do primeiro finalista %s: %d", finalista1,nota1);
		printf("\nNota do segundo finalista %s: %d", finalista2,nota2);
		printf("\nNota do terceiro finalista %s: %d", finalista3,nota3);
		printf("\nO vencedor do concurso é: %s, com %d pontos", vencedor, leMaiorNota);	
				
	return 0;
}
