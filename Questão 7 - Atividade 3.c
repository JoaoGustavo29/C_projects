#include <stdio.h>
#include <ctype.h>

int main (){
	int fruta;
	char aux;
	
	do{
		printf ("Bem-vindo (a) a feira de frutas! Seguem as opçoes que nos temos:\n");
		printf("\n|1| - Abacaxi  |2|- Maçã   |3|- Pera\n");
		printf("Digite o numero referente a sua escolha: ");
		scanf("%d", &fruta);
			fflush(stdin);
		if (fruta == 0)
		  printf ("Fruta invalida, tente novamente!");
		  else {
		  	switch (fruta){
		  		case 1: printf ("Abacaxi!", fruta); break; 
		  		case 2: printf ("Maça!", fruta); break;
		  		case 3: printf ("Pera!", fruta); break;
				default: printf("Fruta invalida, tente novamente!");  	
			  }
			}
			do{
				printf("\nGostaria de escolher uma nova fruta? |s| - sim ou |n|- não: ");
				scanf ("%c", &aux); 
				fflush(stdin);
		        aux = tolower(aux);
		        if (aux != 's' && aux != 'n')
		           printf("INVALIDO!");
			} while (aux != 's' && aux != 'n');	
	
	} while (aux == 's');
	
	return 0;
}