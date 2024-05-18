#include <stdio.h>
#define TAM 12

int main()
{
	
	int i, num[TAM], negativo=0;
	
	printf("Digite 12 valores inteiros e descubra quantos sao negativos:");
	
	for(i=0; i<TAM; i++){
		printf("\nDigite o valor da %i posicao: ",i+1);
		scanf("%i",&num[i]);
			if(num[i]<0){
				negativo++;
			}
	}	
	printf("\nQuantidade de numeros negativos: %i",negativo);
		
	return 0;
}