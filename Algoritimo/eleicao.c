#include <stdio.h>

int main(){
	
	int i, cand1=0, cand2=0, cand3=0, branco=0, nulo=0, opcoes;
	float porcent, totalVotos, vencedor;
	
	i=0;
	do{

		printf("Escolha a opcao desejada: \n1-Jose \n2-maria \n3-Joao \n4-Branco \n5-Nulo \n\n0-Encerrar: ");
		scanf("%i",&opcoes);
		
		if(opcoes==1){
			cand1++;
		}
		else{
			if(opcoes==2){
				cand2++;
			}
		}
		if(opcoes==3){
			cand3++;
		}
		else{
			if(opcoes==4){
				branco++;
			}
		}
		if(opcoes==5){
			nulo++;
		}
	
	
	i++;
	}while(opcoes!=0);
	
	if(cand1>cand2 && cand1>cand3){
		printf("Vencedor= Jose ");
		vencedor=cand1;
	}
	else{
		if(cand2>cand1 && cand2>cand3){
			printf("Vencedor= Maria ");
			vencedor=cand2;
		}
	}
	if(cand3>cand2 && cand3>cand1){
		printf("Vencedor= Joao ");
		vencedor=cand3;
	}
	
	totalVotos=cand1+cand2+cand3+branco+nulo;
	porcent=(vencedor/totalVotos)*100;
	
	printf("\nTotal de votos: %.2f", totalVotos);
	printf("\nPorcentagem do numero de vontantes do vencedor: %.2f",porcent);

	return 0;
}