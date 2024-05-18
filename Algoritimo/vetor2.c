#include <stdio.h>
#define TAM 10

int main ()
{
	
	int i, numeros[TAM];
	
	for(i=0;i<TAM;i++){
	
		printf("Digite 10 valores inteiros e positivos, para serem exibidos de tras para frente: ");
		scanf("%i",&numeros[i]);
	}

	for(i=TAM-1 ;i>=0;i--){
	printf ("%i ",numeros[i]);
	}
	
	return 0;
}