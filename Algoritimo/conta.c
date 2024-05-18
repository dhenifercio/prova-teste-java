#include <stdio.h>

int main(){
	
	float minutos, conta, valorAmais, total;
	
	printf("Digite a quantidade de minutos gastos, e descubra o valor do plano: ");
	scanf("%f",&minutos);
	
	conta=minutos-50;
	valorAmais=conta*1.5;
	    
	if(minutos>50){
	    total=valorAmais +50;
	    printf("Valor da conta: %.2f",total);
	}
	else{
		printf("Valor da conta: 50,00");
	}
	return 0;
}