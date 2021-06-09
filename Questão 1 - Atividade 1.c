#include<stdio.h>
int main(){
	int h,min,sec;
	printf("Que horas sao:\n");
	scanf("%d", &h);
	min = h*60;
	sec = (h*60) * 60;
	printf("Sao %d, que e igual a %d minutos e igual a %d segundos.", h, min, sec);
	return 0;
}
