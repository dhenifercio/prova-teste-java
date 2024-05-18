#include <stdio.h>
#define TAM 10

int main()
{
	
	int i,f;
	float  num[TAM],soma;
	
	printf("Digite 10 numeros, apenas positivos:");
	
	for(f=0; f<TAM; f++){
		printf("\nDigite o %i valor: ",f+1);
		scanf("%f",&num[f]);
	}
	if(num[f]>0){
		for(f=0; f<TAM; f+=2){
			soma+=num[f];
		}
		printf("Soma dos valores que estao nas posicoes impares: %.2f",soma);
	}
	else{
		printf("\nValores incorretos!");
	}
	
	return 0;
}