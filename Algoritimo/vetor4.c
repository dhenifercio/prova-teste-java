#include <stdio.h>
#define TAM 15

int main()
{
	
int i, num[TAM], dobro;

	printf("Digite 15 numeros, para obter o dobro de cada um: ");
	
	for(i=0; i<TAM; i++){
		printf("Digite o %i valor: ",i+1);
		scanf("%i",&num[i]);
	}
	
	for(i=0; i<TAM; i++){
		dobro=num[i]*2;
		printf("\nDobro da posicao %i= %i ",i+1,dobro);
	}
	
	
	return 0;
}