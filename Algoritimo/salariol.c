#include <stdio.h>

int main(){
	
	float salariob, salariol;
	
	printf("Digite o valor de um salario bruto, e descubra quanto sera o salario liquido:");
	scanf("%f",&salariob);
	
	if(salariob<= 2750){
		salariol = salariob*0.85;
		printf("Salario liquido: %.2f",salariol);
	}
	else{
		salariol = salariob*0.75;
		printf("Salario liquido: %.2f",salariol);
	}
	return 0;
}