#include <stdio.h>

int main(){
	
	float horasTrabalhadas, horasExtras, salario;
	
	printf("DESCUBRA O VALOR DO SALARIO: ");
	printf("\nQUANTAS HORAS TRABALHADAS NORMALMENTE? ");
	scanf("%f", &horasTrabalhadas);
	
	printf("\nQUANTAS HORAS EXTRAS TRABALHADAS? ");
	scanf("%f", &horasExtras);
	
	salario= horasTrabalhadas*7,42 + horasExtras*(7,42/130)*100;
	
	printf("SALARIO TOTAL= %.2f",salario);
	return 0;
}