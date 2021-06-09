#include<stdio.h>
int main(){
	int rol, avls, metros;
	printf("Qual o total de fios(m) que serao utilizados?\n");
	scanf("%d", &metros);
	
	avls = metros % 50;
	rol = metros / 50; 
	
	printf("Necessario %d rolos e %d metros avulsos.", rol, avls);
	return 0;
}
