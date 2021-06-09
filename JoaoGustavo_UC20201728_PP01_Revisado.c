//João Gustavo Borges e Souza
//UC20201728
//Bacharel em Ciência da Computação


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
#define MAX 45
#define ERROR "O dado inserido e invalido, tente novamente...\n"


//DECLARAÇÃO DE FUNÇÕES
int leValidaNumeroSessoes();
void leValidaNomeFilme(char filme[]);
int leValidaQuantPessoas();
void leValidaSexo(char *sexo, int *sexoM, int *sexoF, int *pessoas);
int leValidaIdade();
void leValidaMaiorIdade(int *Mmaior, int *Fmaior, int *pessoasIdade, char *sexo, int *crianca, int *adolescente, int *adulto, int *idosos);
//FIM DA DECLARAÇÃO DE FUNÇÕES


int main(void)
{
   int nSessoes,idadePessoas,pessoasFilme,sexoMasculino=0,sexoFeminino=0,crianca=0,adolescente=0,adultos=0,idosos=0, Mmaior=0,Fmaior=0;
   char filme[MAX],sexo;
   nSessoes = leValidaNumeroSessoes();
   leValidaNomeFilme(filme);
   pessoasFilme = leValidaQuantPessoas();
   leValidaSexo(&sexo,&sexoMasculino,&sexoFeminino,&pessoasFilme);
   idadePessoas = leValidaIdade();
   leValidaMaiorIdade(&Mmaior, &Fmaior, &idadePessoas, &sexo, &crianca, &adolescente, &adultos, &idosos);

   printf("Nome do Filme:%c\nHomens:%i\nMulheres:%i\nCriancas:%i\nAdolescentes:%i\nAdultos:%i\nIdosos:%i",&filme,&sexoMasculino,&sexoFeminino,&crianca,&adolescente,&adultos,&idosos);
   system("cls");
   printf("Homens maiores de idade:%i\nMulheres maiores de idade:%i", &Mmaior,&Fmaior);
   return 0;

}

//int float void //NÃO EXISTE FUNÇÃO CHAR

//INT RETORNA SEMPRE UM VALOR & FLOAT TAMBÉM
//VOID NÃO RETORNA NADA;
//NÃO EXISTE FUNÇÃO QUE RETORNA CHAR PRA ISSO USAMOS VOID

int leValidaNumeroSessoes()
{
  int numeroSessoes;
  do
  {
      printf("Digite aqui o numero das sessoes: \n");
      scanf("%i",&numeroSessoes);
      if(numeroSessoes!=2)
      {
        printf(ERROR);
      }
  }while(numeroSessoes!=2);
  return numeroSessoes;
}

void leValidaNomeFilme(char filme[])
{
  int tamanhoFrase;
  do
  {
    printf("Digite aqui o nome do filme: \n");
    fflush(stdin); //FFLUSH STDIN 
    gets(filme);
    tamanhoFrase = strlen(filme);
    if(tamanhoFrase<=1)
    {
      printf(ERROR);
    }
  }while(tamanhoFrase<=1);
}

int leValidaQuantPessoas()
{
  int pessoas;
    do
    {
        printf("Quantidade de pessoas que assistiram: \n");
        scanf("%i", &pessoas);

        if(pessoas < 10)
        {
          printf(ERROR);
        }

    } while (pessoas < 10);
    return pessoas;
}

void leValidaSexo(char *sexo, int *sexoM, int *sexoF, int *pessoas)
{
  int indice;
    for(indice=0; indice < *pessoas; indice++)
    {
        printf("Digite aqui o seu sexo: \n");
        fflush(stdin);
        *sexo = getchar();
        *sexo = toupper(*sexo);
        if(*sexo=='M')
        {
          *sexoM+=1; // sexo = sexo + 1
        }else
        {
          *sexoF+=1; // sexo = sexo + 1
        }
    }  
}
int leValidaIdade()
{ 
  int idade;
  do
  {
  printf("Digite sua idade: ");
    scanf("%i", &idade);
    
  } while (idade < 0);
  return idade;
  
}
void leValidaMaiorIdade(int *Mmaior, int *Fmaior, int *pessoasIdade, char *sexo, int *crianca, int *adolescente, int *adultos, int *idosos)
{
  if (*pessoasIdade >= 18 && *sexo == 'M')
  {
    *Mmaior+=1;
  }
  else if (*pessoasIdade >= 18 && *sexo == 'F')
  {
    *Fmaior+=1;
  }

   if(*pessoasIdade >= 3 && *pessoasIdade <= 13){
     *crianca++;
   } 
   else if (*pessoasIdade >= 14 && *pessoasIdade <= 17)
   {
     *adolescente++;
   }
   else if (*pessoasIdade >= 18 && *pessoasIdade <= 64)
   {
     *adultos++;
   }
   else{
     *idosos++;
   }
  
  
}
