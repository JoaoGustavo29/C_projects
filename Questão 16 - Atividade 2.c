#include <stdio.h>

int main()
{
	char nome1[20], nome2[20], nome3[20];
	float altura1, altura2, altura3;
	
	printf ("Este programa tem como finalidade analisar qual de vocês 3 possui a menor altura, portanto informe seu primeiro nome e altura, nessa ordem: ");
	scanf("%s%f",&nome1, &altura1);
	fflush (stdin);
	printf ("Bobo 2, informe seu primeiro nome e altura, nessa ordem: ");
	scanf("%s%f",&nome2, &altura2);
	fflush (stdin);
	printf ("Bobo 3 informe seu primeiro nome e altura, nessa ordem: ");
	scanf("%s%f",&nome3, &altura3);
	fflush (stdin);
	
	if (altura1 < altura2 && altura1 < altura3)
	{
		printf("%s voce e o mais baixo (%.1fm) dentre os demais!", nome1, altura1);
	}
	else if (altura2 < altura1 && altura2 < altura3)
	{
		printf("%s voce e o mais baixo(%.1fm) dentre os demais!", nome2, altura2);
	}
	else if (altura3 < altura1 && altura3 < altura2)
	{
		printf("%s voce e o mais baixo (%.1f m) dentre os demais!", nome2, altura2);
	}
}