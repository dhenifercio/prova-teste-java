#include <stdio.h>

int main()
{
	
	int i, opcoes, sair;
	float num1, num2, soma, subtracao, multiplicacao, divisao;
	
	printf("Digite dois valores, para relizar uma operacao!");
	
	i=0;
	while(sair!=5){
		printf("\nDigite o primeiro valor: ");
		scanf("%f",&num1);
		
		printf("\nDigite o segundo valor: ");
		scanf("%f",&num2);
		
		printf("\nEscolha a opcao desejada: \n1-Soma \n2-Subtracao \n3-Multiplicacao \n4-Divisao: ");
		scanf("%i",&opcoes);
		
		if(opcoes==1){
			soma=num1+num2;
			printf("\nSoma= %.2f",soma);
		}
		else{
			if(opcoes==2){
				subtracao=num1-num2;
				printf("\nSubtracao= %2.f",subtracao);
			}
		}
		if(opcoes==3){
			multiplicacao=num1*num2;
			printf("Multiplicacao= %.2f",multiplicacao);
		}
		else{
			if(opcoes==4){
				divisao=num1/num2;
				printf("\nDivisao= %.3f",divisao);
			}
		}
		
		printf("\nDigite 5, para sair, ou outro numero para continuar!");
		scanf("%i",&sair);
		
		i++;	
	}
	
	return 0;
}