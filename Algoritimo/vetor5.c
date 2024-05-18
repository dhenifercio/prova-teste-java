#include <stdio.h>
#define TAM 12

int main()
{
	
	int i, num[TAM], positivo=0;
	
	printf("Digite 12 valores inteiros e descubra quais sao positivos:");
	
	for(i=0; i<TAM; i++){
		printf("\nDigite o valor da %i posicao: ",i+1);
		scanf("%i",&num[i]);
		
	}	
	
	i=0;
	while(i<TAM){
		if(num[i]>0){
			printf("\nNumeros= %i ",num[i]);
		}
		i++;
	}
	
		
	return 0;
}