#include <stdio.h>
#define TAM 8

int main ()
{

int i, num[TAM], posicao;

	printf("Digite 8 valores inteiro, e depois a posicao que esta o numero desejado, para exibilo: ");

	for(i=0;i<TAM;i++){
		printf("\nDigite o %i valor: ",i);
		scanf("%i",&num[i]);
	}


	printf("\nEscolha a posicao de (0-7), para ser exibido: ");
	scanf("%i",&posicao);
	printf("Numero na posicao %i e: %i",posicao,num[posicao]);
	
return ;
}