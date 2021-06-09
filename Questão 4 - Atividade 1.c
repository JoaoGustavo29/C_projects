#include<stdio.h>
int main(){
	int x, y, res, quo;
	printf("Digite o numero a ser dividido:\n");
	scanf("%d", &x);
	printf("Digite o divisor:\n");
	scanf("%d", &y);
	
	res = x % y;
	quo = x / y;
	
	printf("Quociente = %d\tresto = %d", quo, res);
	return 0; 
}
