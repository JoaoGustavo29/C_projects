#include <stdio.h>

int main()
{
	int i, n = 1;
	float h;
	
	while (n < 2){
		printf("Informe um numero N: ");
		scanf("%d", &n);
		break;
	}
	h = 0;
	for (i = 1; i <= n; i++)
		h = h + 1.0/i; 
     printf ("O resultado de H é %.2f", h);	S

	return 0;
}