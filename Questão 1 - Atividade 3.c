#include <stdio.h>

int main ()
{
	int num, fat;
	
	printf("Digte o numero: ");
	scanf("%d", &num);
	
	if (num == 0)
	  fat == 1;
	
	for(fat = 1; num > 1; num = num - 1)
    fat = fat * num;
	
	printf("O fatorial deste numero e: %d", fat);
	return 0;
}