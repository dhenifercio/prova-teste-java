#include <stdio.h>

int main()
{
	
	int i, decisao, quant=0;
	float num ,media, maior=0,soma=0;
	
	i=0;
	
	do {
		printf("Digite um valor: ");
		scanf("%f",&num);
		soma= soma+num;	
		quant++;
		
		if(num>maior){
		maior=num;
		}
		
		printf("\nDigite 1 para inserir um novo valor, ou 2 para encerrar: ");
		scanf("%i",&decisao);
		
		i++;
	}while(	decisao ==1);
	
	media=soma/quant;
	printf("O maior numero digitado = %f",maior);
	printf("\nMedia dos numeros digitados: %f",media); 
	return 0;
}