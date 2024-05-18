#include <stdio.h>
#define TAM 10

int main ()
{
	
	int i, numeros[TAM];
	
	for(i=0;i<TAM;i++){
	
		printf("Digite 10 valores inteiros, para serem exibidos: ");
		scanf("%i",&numeros[i]);
	}

	for(i=0;i<TAM;i++){
	printf ("%i ",numeros[i]);
	}
	
	return 0;
}