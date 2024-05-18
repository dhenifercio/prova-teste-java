#include <stdio.h>

int main(){
	
	float numero, tabuada;
	int i;
	
	printf("Digite um numero e descubra sua tabuada de 0 a 10: ");
	scanf("%f", &numero);
		 
	for (i=0; i<=10; i++)
	{
		tabuada= numero * i;
		printf("\nTabuada: %.2f",tabuada);
	}
	return 0;
}