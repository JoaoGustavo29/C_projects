#include<stdio.h>
int main(){
	double a, r;
	printf("Digite o valor do raio:\n");
	scanf("%lf", &r);
	a = 3.14 * (r*r);
	printf("A area do circulo de raio %.2lf e igual a %.2lf.", r, a);
	return 0;	
}
