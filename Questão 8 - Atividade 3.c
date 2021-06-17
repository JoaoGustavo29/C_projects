#include <stdio.h>
#include <ctype.h>

int main(){
	int i, leQuantProd;
	char aux, leNomeProd[10];
	float preco;
	
	printf("Informe a quantidade de produtos: ");
	scanf("%d", &leQuantProd);
	fflush(stdin);
	
	for (i = 1; i <= leQuantProd; i++){	
		if (i < leQuantProd){
	        printf("\nDigite o nome do produto %d? ",i);
		    fgets(leNomeProd, 10, stdin);
			fflush(stdin);
	    
	    	printf("Qual o preço do produto %d? ", i);
	    	scanf("%f", &preco);
	    	fflush(stdin);
			printf("\nO produto %spassou a custar %.2f!\n", leNomeProd, preco * 1.1);
	 
		   
			printf("\nDeseja informar outro produto? |S| - sim |N| - não: ");
			scanf("%c", &aux);
			fflush(stdin); 
			aux = toupper(aux);
	}
        else
		    printf("Por padrao o preço do ultimo produto possui valor igual a -1");
		if(aux == 'N') {
			i = leQuantProd;
		}
	}

	return 0;
}