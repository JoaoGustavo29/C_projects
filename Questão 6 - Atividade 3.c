#include <stdio.h>
#include <ctype.h>

int main(){
	float notas, leNotasFem, leNotasMasc, leMediaFem, leMediaMasc;
	int alunos, fem = 0, masc = 0;
	char sexo;
	
	printf("Quantos alunos tem na classe? ");
	scanf("%d", &alunos);
	fflush(stdin);
	printf("\nPrimeiramente informe o sexo do aluno(a) e em seguida a nota do mesmo(a).\n");
	notas = 0; 
	leNotasFem = 0; 
	leNotasMasc = 0; 
	leMediaFem = 0; 
	leMediaMasc = 0;
	for (int i = 1; i <= alunos; i++){
	   do{
	   	printf("\nO aluno(a) %d e do sexo masculino|M| ou feminino|F|? ", i);
	    scanf("%c", &sexo);
	    fflush(stdin);
	    sexo = toupper(sexo); 
	   }while (sexo !='F' && sexo !='M');
	       
		do{ 
		    printf("\nInforme a nota desse aluno(a) |0| a |10|: ");
			scanf("%f", &notas);
			fflush(stdin);
			
		}while(notas < 0 &&  notas > 10);	
		   if (sexo == 'F'){ 
	    	fem++; 
		    leNotasFem = leNotasFem + notas;
			}
		   else if (sexo == 'M'){ 
	        masc++;  
	        leNotasMasc = leNotasMasc + notas;
			} 
	}
	   leMediaFem = leNotasFem / fem;
	   leMediaMasc = leNotasMasc / masc;
	   
	   printf ("A media de notas das meninas e %.2f\n", leMediaFem);
	   printf ("A media de notas dos meninos e %.2f", leMediaMasc);
	
	return 0; 
}