#include<stdio.h>
int main(){
	double n1, n2, med;
	printf("Qual foi a nota da p1?\n");
	scanf("%lf", &n1);
	printf("Qual foi a nota da p2?\n");
	scanf("%lf", &n2);

	med = ((n1 * 3.5) + (n2 * 7.5)) / 11;
	
	printf("A media do aluno foi igual a: %.1lf", med);
	return 0;
}
