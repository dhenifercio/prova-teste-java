#include <stdio.h>

int main()
{
	
	float numero, positivo, negativo;
	int i;
	
	printf("Digite dez numeros e descubra quais sao positivo equis sao negativos: ");
	
	for (i=0;i<10;i++)
	{
		printf("\nDigite um numero: ");
		scanf("%f",&numero);
		
		if (numero>=0){
			positivo++;
		}
		else{
			negativo++;
		}	
	}
	
	printf("\nNumeros positivos: %.2f",positivo);
	printf("\nNumeros negativos: %.2f",negativo);
	
	return 0;
}