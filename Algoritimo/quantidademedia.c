#include <stdio.h>

int main(){
	
	float quantidade, numero, media, soma;
	int i;
	
	printf("Quantos numeros deseja informar ?");
	scanf("%f",&quantidade);
	
	for(i=0; i<quantidade ;i++)
	{
		printf("\nDigite um valor: ");
		scanf("%f",&numero);
		
		if(numero>0){
			soma=soma+numero;
			media=soma/quantidade;
		}
	}
	
	printf("\nMedia= %f",media);
	
	return 0;
}