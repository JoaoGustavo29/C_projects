#include<stdio.h>
int main(){
	double a, b, c, md;
	printf("Digite o primeiro numero:\n");
	scanf("%lf", &a);
	printf("Digite o segundo numero:\n");
	scanf("%lf", &b);
	printf("Digite o terceiro e ultimo numero:\n");
	scanf("%lf", &c);
	md = (a + b + c) / 3;
	printf("A media dos numero %.1lf , %.1lf e %.1lf e igual a:\n%.1lf", a, b , c, md); 
	return 0;
}
