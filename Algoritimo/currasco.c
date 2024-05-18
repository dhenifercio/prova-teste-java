#include <stdio.h>
#include <math.h>
int main(){
	
	int criancas, mulheres,homens;
  	float picanha, costela, linguica, coxinhaFrango, alcatra, queijinho, refrigerante, agua, paoalho, suco;
  	
	printf("Obtenha a sua lista de churrasco, atraves da quantidade de participantes");
	printf("\nQual a quantidade de criancas ? ");
	scanf("%i",&criancas);
	
	printf("Qual a quantidade de mulheres adultas? ");
	scanf("%i",&mulheres);
	
	printf("Qual a quantidade de homens adultos? ");
	scanf("%i",&homens);
	
	paoalho= ceil ( 0.5*mulheres + 0.5*homens);
	picanha= 0.100*criancas + 0.200*mulheres + 0.350*homens;
	costela= 0.05*criancas + 0.150*mulheres + 0.300*homens;
	linguica= 0.200*criancas +0.150*mulheres + 0.100*homens;
	coxinhaFrango= 0.200*criancas +0.150*mulheres + 0.200*homens;
	agua= ceil(0.5*criancas + 0.5*mulheres + 0.5*homens);
	suco= ceil( 1*criancas +0.5*mulheres + 0.5*homens);
	alcatra= 0.100*criancas + 0.200*mulheres + 0.350*homens;
	queijinho= ceil(0.3*criancas+ 0.2*mulheres + 0.2*homens);
	refrigerante=ceil( 0.3*criancas + 0.6*mulheres+ 0.6*homens);
	
	printf("\nPao De Alho:       %.0f pacotes",paoalho);
	printf("\nPicanha:           %.3f Kg",picanha);
	printf("\nCostela:           %.3f Kg",costela);
	printf("\nLinguica:          %.3f Kg",linguica);
	printf("\nCoxinha De Frango: %.3f Kg",coxinhaFrango);
	printf("\nAgua:              %.0f garrafas de 1L",agua);
	printf("\nSuco:              %.0f garrafas de 1L",suco);
	printf("\nAlcatra:           %.3f Kg",alcatra);
	printf("\nRefrigerante:      %.0f garrafas de 1L",refrigerante);
	printf("\nAproveite o churrasco!");
	return 0;
}