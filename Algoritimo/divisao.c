#include <stdio.h>

int main(){
	
	float numerador, denominador, divisao;
	
	printf("Digite dois valores para calcular uma divisao:");
	printf("\nDigite o numerador: ");
	scanf("%f",&numerador);
	
	printf("\nDigite o denominador: ");
	scanf("%f",&denominador);
	
	divisao = numerador/denominador;
		
	if(denominador == 0){
		printf("Nao existe divisao por zero!");
	}
	else{
	printf("Resultado da divisao: %.2f",divisao);	
	}

	return 0;
}