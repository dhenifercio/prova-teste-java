#include <stdio.h>

float main (){
	
	int dias, salario;
	printf("Descubra o salario, pelos dias trabalhados: ");
	printf("\nDigite a quantidade de dias trabalhados: ");
	scanf("%f", &dias);
	
	salario=(dias*35)*0.92;
	printf("Salario= %f",salario);
		return 0;
}