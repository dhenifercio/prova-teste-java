#include <stdio.h>

int main()
{
	
	float num1, num2, numero;
	
	printf("Digite dois numeros para criar um intervalo, e depois um valor qualquer, para descobrir se esta dentro do intervalo");
	printf("\nDigite o valor para iniciar um intervalo: ");
	scanf("%f",&num1);
	
	printf("\nDigite o valor para finalizar o intervalo: ");
	scanf("%f",&num2);
	
	printf("\nDigite um valor para ver se pertence ou nao no intervalo: ");
	scanf("%f",&numero);
	
	if(numero>num1 && numero<num2){
		printf("\nPertence ao intervalo!");
	}
	else{
		printf("\nNao pertence ao intervalo!");
	}
	
	return 0;
}