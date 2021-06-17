#include <stdio.h>

int main(){
	int i = 0, num, fat = 1;
	
	printf("Informe o numero: ");
	scanf("%d", &num);
	
	while(num > 0){
		fat = fat * num;
		num--;
	}
    printf("O fatorial desse numero e: %d", fat);
	
	return 0;
}