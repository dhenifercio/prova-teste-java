//RECEBER
/*
saldo inicial
valores (while != 3)
operacao
*/

#include <stdio.h>

int main()
{
	
	int i, opcoes;
	float saldo, num, deposito, retirada, saldoTotal=0;
	
	printf("Digite o valor do saldo da conta: R$ ");
	scanf("%f",&saldo);
	
	i=0; 
	do{

		printf("\nQual operacao deseja realizar? \n1-Deposito \n2-Retirada \n3-Sair: ");
		scanf("%i",&opcoes);
	

			if(opcoes !=3){
				printf("Digite o valor da operacao: ");
	 			scanf("%f",&num);
			
				if(opcoes == 1){
					saldoTotal=saldo+num;
				}	
				else{
					saldoTotal=saldo-num;
				}
				saldo=saldoTotal;
			}		
		
		i++;
	}while(opcoes !=3);
	
	if(opcoes== 3){
		printf("Saldo atual= %.3f",saldo);
		
		if(saldoTotal<0){
			printf("\nConta Estourada!");
		}
		else{
			if(saldoTotal>0){
				printf("\nConta Preferencial");
			}
			else{
				printf("Conta zerada!");
			}
		}			
	}
	return 0;
}