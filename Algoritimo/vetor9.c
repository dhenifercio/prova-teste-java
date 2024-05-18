#include <stdio.h>
#define TAM 10

int main (){
	
	int i, num[TAM], repete=0, valor;
	
	printf("Digite 10 valores, para guarda-los: ");
	
	for(i=0; i<TAM; i++){
		printf("\nDigite o %i valor : ",i+1);
		scanf("%i",&num[i]);
	}
	
	i=0;
	do{
		printf("\nDigite uma valor para descobrir se ele pertence ao intervalo: ");
		scanf("%i",&valor);
		
		for(i=0; i<TAM; i++){
			if(valor == num[i]){
				repete++;
			}
		}
		i++;
		if(repete==0){
			printf("O valor %i nao esta no vetor", valor);
		}else{
			printf("Valor se repete!: %i, por %i vezes",valor, repete);
		}	
				
	}while(repete==0);
	
	return 0;
}