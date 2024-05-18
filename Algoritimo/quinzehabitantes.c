#include <stdio.h>
#define TAM 15
int main(){
	
	float salario, mediapop,mediafil,percentual, somasal;
	float somafil=0;
	float salpessoas=0;
	float maiorsal=0;
	int i, filhos =0;
	
	printf("Digite a informacao dos habitantes, para gerar a classificacao: ");
	
	
	for(i=0;i<TAM;i++)
	{
		printf("\nDigite a quantidade de filhos :");
		scanf("%i",&filhos);
		
		printf("\nDigite o salario: ");
		scanf("%f",&salario);
		
		
		somasal=somasal+salario;
	 	somafil=somafil+filhos;
		
		if(salario> maiorsal){
			maiorsal=salario;
		}
		if(salario<=1000){
		    salpessoas++;	
		}	
	}
	
	mediapop= somasal/TAM;
	mediafil= somafil/TAM;
	percentual=(salpessoas/TAM)*100;
	
	printf("\nMedia do salario: %.2f \nMedia do numero de filhos: %.1f \nMaior salario: %.2f \nPorcentagem de pessoas com o salario ate 1000: %.2f",mediapop,mediafil,maiorsal,percentual);
	
	return 0;
}