#include <stdio.h>
#define LIN 20
#define COL 30

int main (){
	
	int i,l,c,f,a, opcoes, ingresso, senha, quant=0, inteiro=0, meio=0, cortesia=0, soma=0, soma1=0, somaTotal=0;
	int m[LIN][COL];
	
	for(l=0; l<LIN; l++){
		for(c=0; c<COL; c++){
			m[l][c]=0;
			printf("%i  ",m[l][c]);
			if(c==29){
				printf("\n");
			}
		}
	}
	printf("\n***BEM VINDO AO CINEMA***");
	
	do{
		printf("\n\nSelecione a opcao desejada: ");
		printf("\n1-Escolher assento \n2-Finallizar secao \nOpcao: ");
		scanf("%i",&opcoes);
	
		if(opcoes == 1){
			do{	
					printf("\nLembre-se: \n0 = Assento Livre! \n1 = Assento Reservado!");
					printf("\nEscolha a fileira de 0-20: ");
					scanf("%i",&f);
					printf("\nEscolha seu assento de 0-30: ");
					scanf("%i",&a);
				if(m[f-1][a-1]==1){
					printf("\n *** ASSENTO OCUPADO, ESCOLHA OUTRO PARA CONTINUAR ***");
				}
				quant++;
	
			}while(m[f-1][a-1]==1);
		
			printf("\nQual o tipo de ingresso? ");
			printf("\n1-Inteiro R$ 40,00 \n2-Meio R$20,00 \n3-Cortesia \nIngresso: "); //chave da cortesia : 7
			scanf("%i",&ingresso);
		
			if(ingresso==1){
				inteiro++;
			}	
		
			else{
				if(ingresso == 3){
					do{
						printf("Digite a chave de acesso da cortesia: ");
						scanf("%i",&senha);
						if(senha == 7){
							printf("Acesso liberado!\n");
						}
						else{
							printf("Senha incorreta! Tente novamente!\n");
						}
					}while(senha !=7);
					cortesia++;
				}
			}
		}
			if(ingresso==1){
				meio++;
			}	
	
		for(l=0; l<LIN; l++){
			for(c=0; c<COL; c++){
				m[f - 1][a - 1] = 1;
				printf("%i  ",m[l][c]);
				if(c==29){
					printf("\n");
				}	
			}
		}
		

	}while(opcoes !=2 && quant<600 );
	printf("\n *** Agradecemos sua visita! ***");
	
	soma=soma+inteiro*40;
	soma1=soma1+meio*20;
	somaTotal= soma+soma1;
	
	printf("\nTotal de ingressos inteiros vendidos= %i",inteiro);
	printf("\nTotal de ingressos meio vendidos= %i",meio);
	printf("\nTotal de ingressos cortesia fornecidos= %i",cortesia);
	printf("\nTotal arrecadado= %i",somaTotal);
	
	return 0;
	
}