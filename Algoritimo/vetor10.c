#include <stdio.h>
#define TAM 10

int main(){
	
	int i, num[TAM], num2[TAM];
	
	printf("Digite 10 valores para armazena-los no vetor:");
	
	for(i=0; i<TAM; i++){
		printf("\nDigite o %i valor: ",i+1);
		scanf("%i",&num[i]);
	}
	for(i=0; i < TAM; i++){
		num2[9-i]=num[i];
	} 
	for(i=0; i < TAM; i++){
		printf("\n%i ",num2[i]);
	
	}  	 	
	for(i=0; i<TAM; i++){
		if(num[i]==num2[i]){
		  printf("\nOs valores na posicao %i de ambos vetores, sao iguais", i+1);
		}
		
	}
	                  
	return 0;
}